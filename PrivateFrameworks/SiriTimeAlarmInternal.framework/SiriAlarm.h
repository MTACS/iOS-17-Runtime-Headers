
@interface SiriAlarm : INObject

@property (nonatomic, copy) NSDateComponents *dateTime;
@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSNumber *firing;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, retain) SleepAlarmAttribute *sleepAlarmAttribute;
@property (nonatomic, retain) NSNumber *undoable;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
