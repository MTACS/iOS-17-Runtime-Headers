
@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {
    NSDictionary * _usageElementMap;
}

- (void).cxx_destruct;
- (bool)factoryReset:(unsigned char)arg1 securityToken:(unsigned long long)arg2 error:(id*)arg3;
- (id)getHIDDevices;
- (bool)getSecurityToken:(unsigned long long*)arg1 error:(id*)arg2;
- (id)initWithContainerID:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (bool)setupInterface;

@end
