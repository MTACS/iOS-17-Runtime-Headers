
@interface WFLinkContentItemFilterAction : WFContentItemFilterAction {
    INAppIntentDescriptor * _appIntentDescriptor;
    LNEntityMetadata * _entityMetadata;
    LNFullyQualifiedActionIdentifier * _fullyQualifiedLinkActionIdentifier;
    LNMetadataProvider * _metadataProvider;
    NSDictionary * _outputDictionary;
    NSDictionary * _propertiesByPropertyIdentifier;
    LNQueryMetadata * _queryMetadata;
}

@property (nonatomic, readonly) INAppIntentDescriptor *appIntentDescriptor;
@property (nonatomic, readonly, copy) LNEntityMetadata *entityMetadata;
@property (nonatomic, readonly) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;
@property (nonatomic, readonly, copy) LNQueryMetadata *queryMetadata;

- (void).cxx_destruct;
- (id)appIntentDescriptor;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)descriptionSummary;
- (id)displayableAppDescriptor;
- (id)entityMetadata;
- (void)finishRunningWithError:(id)arg1;
- (void)finishRunningWithOutput:(id)arg1 randomSortOrder:(bool)arg2 error:(id)arg3;
- (id)fullyQualifiedLinkActionIdentifier;
- (id)initWithIdentifier:(id)arg1 queryMetadata:(id)arg2 entityMetadata:(id)arg3 definition:(id)arg4 serializedParameters:(id)arg5 appIntentDescriptor:(id)arg6 fullyQualifiedActionIdentifier:(id)arg7;
- (bool)isInMemoryFindAction;
- (id)linkValueTypes;
- (id)localizedKeywords;
- (id)localizedSubcategoryForCategory:(id)arg1;
- (id)metadataProvider;
- (id)name;
- (id)outputDictionary;
- (id)propertiesByPropertyIdentifier;
- (id)propertyQuery;
- (id)queryMetadata;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)sortingOptionsWithRandomSortOrder:(bool*)arg1;

@end
