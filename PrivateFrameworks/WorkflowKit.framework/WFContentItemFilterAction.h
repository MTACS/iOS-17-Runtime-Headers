
@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) WFContentQuery *query;
@property (nonatomic, readonly) struct _WFContentSlice { unsigned long long x1; unsigned long long x2; } slice;
@property (readonly) Class superclass;

- (id)auxiliaryButton;
- (bool)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)descriptionDictionary;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (bool)hasMultipleFilterConditions;
- (void)initializeParameters;
- (id)inputParameterKey;
- (bool)inputRequired;
- (id)keywords;
- (id)localizedName;
- (id)localizedParameterSummaryStringForFilter;
- (id)localizedParameterSummaryStringForFilterWithFilterConditions;
- (id)localizedParameterSummaryStringForFilterWithMultipleFilterConditions;
- (id)localizedParameterSummaryStringForFind;
- (id)localizedParameterSummaryStringForFindWithFilterConditions;
- (id)localizedParameterSummaryStringForFindWithMultipleFilterConditions;
- (unsigned long long)mode;
- (id)outputContentClasses;
- (unsigned long long)parameterCollapsingBehavior;
- (id)parameterDefinitions;
- (id)parameterStateForKey:(id)arg1;
- (id)parameterSummary;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)query;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runFilterWithInput:(id)arg1 query:(id)arg2;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (struct _WFContentSlice { unsigned long long x1; unsigned long long x2; })slice;
- (id)sortablePropertyDisplayNames;
- (id)sortablePropertyNames;
- (id)tableTemplate;
- (void)updateCompoundParameterVisibility;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
