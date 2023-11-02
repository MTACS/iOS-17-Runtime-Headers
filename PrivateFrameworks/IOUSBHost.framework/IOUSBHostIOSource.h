
@interface IOUSBHostIOSource : NSObject {
    unsigned int  _debugLoggingMask;
    unsigned long long  _deviceAddress;
    unsigned long long  _endpointAddress;
    IOUSBHostInterface * _hostInterface;
    unsigned int  _ioConnection;
    struct IONotificationPort { } * _ioNotificationPortRef;
}

@property unsigned int debugLoggingMask;
@property unsigned long long deviceAddress;
@property unsigned long long endpointAddress;
@property (retain) IOUSBHostInterface *hostInterface;
@property unsigned int ioConnection;
@property struct IONotificationPort { }*ioNotificationPortRef;

- (void).cxx_destruct;
- (unsigned int)debugLoggingMask;
- (unsigned long long)deviceAddress;
- (unsigned long long)endpointAddress;
- (id)hostInterface;
- (id)initWithHostInterface:(id)arg1 endpointAddress:(unsigned long long)arg2 ioConnection:(unsigned int)arg3 ioNotificationPortRef:(struct IONotificationPort { }*)arg4 deviceAddress:(unsigned long long)arg5;
- (unsigned int)ioConnection;
- (struct IONotificationPort { }*)ioNotificationPortRef;
- (void)setDebugLoggingMask:(unsigned int)arg1;
- (void)setDeviceAddress:(unsigned long long)arg1;
- (void)setEndpointAddress:(unsigned long long)arg1;
- (void)setHostInterface:(id)arg1;
- (void)setIoConnection:(unsigned int)arg1;
- (void)setIoNotificationPortRef:(struct IONotificationPort { }*)arg1;

@end
