
@interface RTScenarioTrigger : NSObject <NSSecureCoding> {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)scenarioTriggerSettledStateToString:(unsigned long long)arg1;
+ (id)scenarioTriggerTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
