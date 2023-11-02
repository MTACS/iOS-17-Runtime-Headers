
@interface MTToggleAlarmIntent : INIntent

@property (nonatomic, copy) MTIntentAlarm *alarm;
@property (nonatomic) long long operation;
@property (nonatomic) long long state;

@end
