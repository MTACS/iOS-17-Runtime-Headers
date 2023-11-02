
@interface COAlarmManagerMediator : NSObject <COAlarmManagerClientInterface> {
    COAlarmManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COAlarmManager *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAlarmManager:(id)arg1;
- (id)manager;
- (void)postNotificationName:(id)arg1 withUserInfo:(id)arg2 callback:(id /* block */)arg3;

@end
