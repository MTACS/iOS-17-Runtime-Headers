
@interface WFLinkStartWorkoutPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    WFLinkAction * _action;
}

@property (nonatomic) WFLinkAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)setAction:(id)arg1;
- (Class)singleStateClass;

@end
