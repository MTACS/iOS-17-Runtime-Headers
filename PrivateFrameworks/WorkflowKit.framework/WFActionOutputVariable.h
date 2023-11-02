
@interface WFActionOutputVariable : WFVariable {
    WFAction * _action;
    <WFVariableProvider> * _variableProvider;
}

@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *outputUUID;

- (void).cxx_destruct;
- (id)UUID;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultName;
- (id)icon;
- (id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4;
- (bool)isAvailable;
- (bool)isRenamed;
- (id)name;
- (id)outputUUID;
- (id)possibleContentClassesWithContext:(id)arg1;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)variableProvider;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;

@end
