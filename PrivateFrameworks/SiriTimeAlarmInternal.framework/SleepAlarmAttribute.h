
@interface SleepAlarmAttribute : INObject

@property (nonatomic, copy) NSDateComponents *bedtime;
@property (nonatomic, retain) NSNumber *override;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
