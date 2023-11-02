
@interface _GCLogitechRacingWheelDeviceManager : NSObject <_GCDeviceManager> {
    <_GCDeviceRegistry> * _deviceRegistry;
    unsigned int  _ioG29PS3HIDDeviceIterator;
    unsigned int  _ioG29PS4HIDDeviceIterator;
    unsigned int  _ioG920USBDeviceIterator;
    unsigned int  _ioG923HIDDeviceIterator;
    unsigned int  _ioG923USBDeviceIterator;
    struct IONotificationPort { } * _ioNotificationPort;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <_GCDeviceRegistry> *deviceRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deviceRegistry;
- (id)identifier;
- (id)init;
- (void)setDeviceRegistry:(id)arg1;

@end
