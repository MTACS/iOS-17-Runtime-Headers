
@interface COTimerAddOnProvider : NSObject <COServiceAddOnProvider> {
    COHomeHubAdapter * _homehub;
    COHomeKitAdapter * _homekit;
    MTTimerManager * _timerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COHomeHubAdapter *homehub;
@property (nonatomic, readonly) COHomeKitAdapter *homekit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTTimerManager *timerManager;

- (void).cxx_destruct;
- (id)homehub;
- (id)homekit;
- (id)init;
- (id)initWithTimerManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;
- (id)serviceAddOn;
- (id)timerManager;

@end
