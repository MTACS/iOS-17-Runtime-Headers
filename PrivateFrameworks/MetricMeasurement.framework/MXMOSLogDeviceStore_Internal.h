
@interface MXMOSLogDeviceStore_Internal : NSObject <OSDeviceDelegate> {
    NSMutableDictionary * _devices;
    <MXMProbeableDevice> * _hostDevice;
    OSActivityStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MXMProbeableDevice> *hostDevice;
@property (readonly) Class superclass;

+ (id)shared;

- (void).cxx_destruct;
- (bool)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5;
- (id)devices;
- (id)hostDevice;
- (id)init;

@end
