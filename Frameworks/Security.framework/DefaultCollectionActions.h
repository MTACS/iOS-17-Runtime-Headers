
@interface DefaultCollectionActions : NSObject <SFAnalyticsCollectionAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)autoBugCaptureWithType:(id)arg1 subType:(id)arg2 domain:(id)arg3;
- (void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 componentName:(id)arg4 componentVersion:(id)arg5 componentID:(id)arg6;

@end
