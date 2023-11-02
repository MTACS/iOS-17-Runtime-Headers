
@interface WFLinkEntityAction : WFOverridableLinkAction

@property (nonatomic, readonly) <LNValueMetadata> *entityMetadata;

- (id)actualEntityParameterNameFromPossibleNames:(id)arg1;
- (id)capitalizedEntityName;
- (id)capitalizedVerb;
- (id)entityMetadata;
- (id)entityName;
- (id)entityParameterMetadata;
- (id)entityParameterName;
- (id)lowercaseEntityName;
- (id)overrideEntityName;
- (id)overrideName;
- (id)overrideParameterSummary;
- (Class)overrideTypeDescriptions;
- (bool)shouldOverrideParameterLabels;
- (id)verb;

@end
