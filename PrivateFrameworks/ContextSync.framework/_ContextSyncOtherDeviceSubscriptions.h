
@interface _ContextSyncOtherDeviceSubscriptions : NSObject {
    NSMutableDictionary * _deviceToDSLSubscriptions;
}

@property (nonatomic, retain) NSMutableDictionary *deviceToDSLSubscriptions;

+ (id)deviceToDSLSubscription;
+ (id)subscriptionWithDevice:(id)arg1 forWakeSubscription:(id)arg2;

- (void).cxx_destruct;
- (bool)addWake:(bool)arg1 forIdentifier:(id)arg2 forDevice:(id)arg3;
- (id)deviceToDSLSubscriptions;
- (bool)hasWakingIdentifierForDevice:(id)arg1;
- (bool)isIdentifierWaking:(id)arg1 forDevice:(id)arg2;
- (id)lastChangeDateForIdentifier:(id)arg1 forDevice:(id)arg2;
- (bool)removeAllDSLsForDevice:(id)arg1;
- (bool)removeIdentifier:(id)arg1 forDevice:(id)arg2;
- (void)setDeviceToDSLSubscriptions:(id)arg1;
- (id)subscribedDevices;
- (id)subscriptionsOnDevice:(id)arg1;
- (id)wakeStateForIdentifier:(id)arg1 forDevice:(id)arg2;

@end
