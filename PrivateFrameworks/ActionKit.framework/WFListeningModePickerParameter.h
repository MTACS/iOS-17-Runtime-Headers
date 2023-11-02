
@interface WFListeningModePickerParameter : WFDynamicEnumerationParameter <WFActionEventObserver, WFDynamicEnumerationDataSource> {
    WFAction * _action;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAction:(id)arg1;
- (Class)singleStateClass;

@end
