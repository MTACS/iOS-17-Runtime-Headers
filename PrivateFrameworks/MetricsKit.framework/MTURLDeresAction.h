
@interface MTURLDeresAction : MTTreatmentAction {
    NSDictionary * _allowedParams;
    NSString * _scope;
}

@property (nonatomic, retain) NSDictionary *allowedParams;
@property (nonatomic, retain) NSString *scope;

- (void).cxx_destruct;
- (id)allowedParams;
- (id)allowedQueryItemsFromItems:(id)arg1;
- (id)initWithField:(id)arg1 configDictionary:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (id)scope;
- (void)setAllowedParams:(id)arg1;
- (void)setScope:(id)arg1;

@end
