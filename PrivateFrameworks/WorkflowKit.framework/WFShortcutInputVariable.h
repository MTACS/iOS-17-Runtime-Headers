
@interface WFShortcutInputVariable : WFVariable {
    <WFVariableProvider> * _variableProvider;
}

- (void).cxx_destruct;
- (id)icon;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithVariableProvider:(id)arg1 aggrandizements:(id)arg2;
- (bool)isAvailable;
- (id)name;
- (id)possibleContentClassesWithContext:(id)arg1;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)variableProvider;

@end
