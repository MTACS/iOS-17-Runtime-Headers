
@interface MTCreateAlarmIntent : INIntent

@property (nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic) long long requiresAppLaunch;
@property (nonatomic, copy) INObject *time;

@end
