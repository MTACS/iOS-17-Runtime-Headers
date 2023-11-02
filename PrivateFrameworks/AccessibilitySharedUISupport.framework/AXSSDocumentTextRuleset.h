
@interface AXSSDocumentTextRuleset : NSObject {
    NSMutableArray * __rules;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *_rules;
@property (nonatomic, readonly, copy) NSArray *allRules;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)_rules;
- (void)addRule:(id)arg1;
- (id)allRules;
- (id)init;
- (id)name;
- (id)rulesForGranularity:(long long)arg1;
- (void)setName:(id)arg1;
- (void)set_rules:(id)arg1;

@end
