
@interface DACLifecycleManagerMediator : NSObject <DACLifecycleClientInterface> {
    DACLifecycleManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activatedAssertionForActivity:(id)arg1 withChangeMarker:(id)arg2;
- (void)activityListChanged:(id)arg1;
- (void)roleChanged:(id)arg1;

@end
