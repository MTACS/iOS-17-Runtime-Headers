
@interface TriggerCondition : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *recurrence;
@property (nonatomic) long long type;
@property (nonatomic, retain) TriggerValue *value;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
