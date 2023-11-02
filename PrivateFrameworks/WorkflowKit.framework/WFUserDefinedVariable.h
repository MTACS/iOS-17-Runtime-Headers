
@interface WFUserDefinedVariable : WFVariable {
    <WFVariableProvider> * _variableProvider;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)UUID;
- (id)icon;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;
- (bool)isAvailable;
- (id)name;
- (id)possibleContentClassesWithContext:(id)arg1;
- (bool)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)variableProvider;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;

@end
