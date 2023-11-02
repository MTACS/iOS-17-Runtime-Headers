
@interface XPCStreamEventRegister : NSObject {
    NSDictionary * _activityServicesMap;
    NSDictionary * _registrationsMap;
}

@property (nonatomic, readonly) NSDictionary *activityServicesMap;
@property (nonatomic, readonly) NSDictionary *registrationsMap;

+ (id)_registrationKeyFromStreamName:(id)arg1 eventName:(id)arg2;
+ (id)emptyRegister;
+ (id)registerFromDagServiceNames:(id)arg1;
+ (id)registerWithRegistrations:(id)arg1;
+ (id)registerWithRegistrations:(id)arg1 withActivityServicesMap:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithRegistrationsMap:(id)arg1 withActivityServicesMap:(id)arg2;
- (id)activityServicesMap;
- (bool)handleXPCActivity:(id)arg1 fromIdentifier:(id)arg2 withAssetCollection:(id)arg3 withSelfMetadata:(id)arg4;
- (bool)handleXPCEvent:(id)arg1 fromStream:(id)arg2 currentConfig:(id)arg3 withSelfMetadata:(id)arg4;
- (id)handleableXPCActivities;
- (id)handleableXPCEventStreams;
- (id)registrationsMap;

@end
