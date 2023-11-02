
@interface HIDDisplayInterface : NSObject {
    NSString * _containerID;
    HIDDevice * _deviceRef;
    HIDManager * _manager;
    unsigned long long  _registryID;
}

@property (readonly) NSArray *capabilities;
@property (readonly) NSString *containerID;
@property (readonly) unsigned long long registryID;

- (void).cxx_destruct;
- (id)capabilities;
- (bool)commit:(id)arg1 error:(id*)arg2;
- (id)containerID;
- (void)dealloc;
- (id)description;
- (id)device;
- (bool)extract:(id)arg1 error:(id*)arg2;
- (id)extractContainerIDFromService:(unsigned int)arg1;
- (id)getDeviceElements:(id)arg1;
- (id)getHIDDevices;
- (id)getHIDDevicesForMatching:(id)arg1;
- (bool)hasMatchingContainerID:(id)arg1 containerID:(id)arg2;
- (id)initWithContainerID:(id)arg1;
- (id)initWithMatching:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (unsigned long long)registryID;
- (void)setDevice:(id)arg1;

@end
