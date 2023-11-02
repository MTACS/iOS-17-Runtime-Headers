
@interface JEDeresURLTreatmentAction : JETreatmentAction {
    NSDictionary * _allowedParameters;
    NSString * _scope;
}

- (void).cxx_destruct;
- (id)allowedQueryItemsFromItems:(id)arg1;
- (id)initWithField:(id)arg1 configuration:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;

@end
