
@interface WBSPasswordRule : NSObject {
    long long  _type;
    id  _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id value;

+ (id)ruleWithType:(long long)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)initWithPasswordRuleType:(long long)arg1 value:(id)arg2;
- (long long)type;
- (id)value;

@end
