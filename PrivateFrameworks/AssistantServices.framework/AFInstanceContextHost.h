
@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo * _info;
}

+ (id)effectiveMachServiceName:(id)arg1;

- (void).cxx_destruct;
- (id)audioDeviceIdentifier;
- (id)createXPCConnectionForMachService:(const char *)arg1 targetQueue:(id)arg2 flags:(unsigned long long)arg3;
- (id)createXPCConnectionWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)createXPCListenerForMachService:(const char *)arg1 targetQueue:(id)arg2 flags:(unsigned long long)arg3;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)description;
- (id)info;
- (id)init;
- (bool)isCurrent;
- (bool)isDefault;
- (id)mediaRouteIdentifier;
- (id)preferencesSubdomain;
- (bool)supportsAudioPowerUpdate;
- (bool)supportsProxyGroupPlayer;
- (bool)supportsTelephony;

@end
