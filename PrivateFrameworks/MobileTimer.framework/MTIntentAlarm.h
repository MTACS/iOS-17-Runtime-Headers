
@interface MTIntentAlarm : INObject

@property (nonatomic, copy) NSDateComponents *dateComponents;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *repeatSchedule;

@end
