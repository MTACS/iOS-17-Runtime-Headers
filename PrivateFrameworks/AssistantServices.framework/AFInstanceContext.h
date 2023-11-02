
@interface AFInstanceContext : NSObject

@property (nonatomic, readonly, copy) NSString *audioDeviceIdentifier;
@property (nonatomic, readonly) AFInstanceInfo *info;
@property (nonatomic, readonly) bool isCurrent;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly, copy) NSString *preferencesSubdomain;
@property (nonatomic, readonly) bool supportsAudioPowerUpdate;
@property (nonatomic, readonly) bool supportsProxyGroupPlayer;
@property (nonatomic, readonly) bool supportsTelephony;

+ (id)currentContext;
+ (id)defaultContext;
+ (id)effectiveMachServiceName:(id)arg1;

- (id)audioDeviceIdentifier;
- (id)createXPCConnectionForMachService:(const char *)arg1 targetQueue:(id)arg2 flags:(unsigned long long)arg3;
- (id)createXPCConnectionWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)createXPCListenerForMachService:(const char *)arg1 targetQueue:(id)arg2 flags:(unsigned long long)arg3;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)info;
- (bool)isCurrent;
- (bool)isDefault;
- (id)mediaRouteIdentifier;
- (id)preferencesSubdomain;
- (bool)supportsAudioPowerUpdate;
- (bool)supportsProxyGroupPlayer;
- (bool)supportsTelephony;

@end
