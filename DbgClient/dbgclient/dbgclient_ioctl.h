#ifndef _DBGCLIENT_IOCTL_
#define _DBGCLIENT_IOCTL_


#define DBGCLIENT_DEVICE	FILE_DEVICE_UNKNOWN


#define IOCTL_REGISTER_WINDOW CTL_CODE(DBGCLIENT_DEVICE, 0x1, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_UNREGISTER_WINDOW CTL_CODE(DBGCLIENT_DEVICE, 0x2, METHOD_BUFFERED, FILE_WRITE_ACCESS)

#define DEBUG_WINDOW_IN_PAGES	5

typedef struct _DEBUG_WINDOW {
	UCHAR	bBpId;
	PVOID	pWindowVA;
	ULONG	uWindowSize;
} DEBUG_WINDOW, *PDEBUG_WINDOW;


#endif // _DBGCLIENT_IOCTL_
