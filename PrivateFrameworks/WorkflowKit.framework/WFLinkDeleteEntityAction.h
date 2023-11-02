
@interface WFLinkDeleteEntityAction : WFLinkEntityAction

+ (id)overrideInputParameterNames;

- (Class)contentItemClass;
- (bool)deletesInput;
- (id)entityParameterName;
- (id)itemsBeingDeleted;
- (id)overrideDescriptionSummary;
- (id)overrideEntityName;
- (id)overrideLabelsByParameter;
- (id)verb;

@end
