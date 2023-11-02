
@interface WFAppPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    <WFAppListProvider> * _appListProvider;
    long long  _appSearchType;
    bool  _useLegacyIdentifiers;
}

@property (nonatomic) <WFAppListProvider> *appListProvider;
@property (nonatomic, readonly) long long appSearchType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useLegacyIdentifiers;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)appEnumerator;
- (id)appListProvider;
- (long long)appSearchType;
- (id)enumeration:(id)arg1 accessoryIconForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 accessoryImageForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (bool)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)preferParameterValuePicker;
- (void)setAppListProvider:(id)arg1;
- (Class)singleStateClass;
- (id)stateForRecord:(id)arg1;
- (bool)useLegacyIdentifiers;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)moduleSummarySlotsForState:(id)arg1;

@end
