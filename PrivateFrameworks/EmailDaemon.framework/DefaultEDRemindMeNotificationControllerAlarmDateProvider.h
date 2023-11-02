
@interface DefaultEDRemindMeNotificationControllerAlarmDateProvider : NSObject <EDRemindMeNotificationControllerAlarmDateProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *nextDate;
@property (readonly) Class superclass;

- (id)nextDate;
- (void)setNextDate:(id)arg1;

@end
