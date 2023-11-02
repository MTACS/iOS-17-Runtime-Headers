
@interface COAlarmAddOnProvider : NSObject <COServiceAddOnProvider> {
    MTAlarmManager * _alarmManager;
    COHomeHubAdapter * _homehub;
    COHomeKitAdapter * _homekit;
}

@property (nonatomic, readonly) MTAlarmManager *alarmManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COHomeHubAdapter *homehub;
@property (nonatomic, readonly) COHomeKitAdapter *homekit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alarmManager;
- (id)homehub;
- (id)homekit;
- (id)init;
- (id)initWithAlarmManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;
- (id)serviceAddOn;

@end
