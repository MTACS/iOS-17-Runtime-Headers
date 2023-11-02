
@interface VUIDebugMetricsGladiatorsRulesets : NSObject {
    NSArray * _rulesets;
}

@property (nonatomic, retain) NSArray *rulesets;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)rulesets;
- (void)setRulesets:(id)arg1;

@end
