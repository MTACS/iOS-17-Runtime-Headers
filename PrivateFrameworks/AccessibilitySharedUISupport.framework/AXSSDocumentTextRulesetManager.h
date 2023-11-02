
@interface AXSSDocumentTextRulesetManager : NSObject {
    NSMutableArray * __rulesets;
}

@property (nonatomic, retain) NSMutableArray *_rulesets;
@property (nonatomic, readonly, copy) NSArray *rulesets;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_loadCustomRulesets;
- (id)_rulesets;
- (id)description;
- (id)init;
- (void)loadRulesets;
- (id)rulesets;
- (void)set_rulesets:(id)arg1;

@end
