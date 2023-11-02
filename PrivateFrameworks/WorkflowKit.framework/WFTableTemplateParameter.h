
@interface WFTableTemplateParameter : WFParameter {
    Class  _contentItemClass;
    bool  _filterable;
}

@property (nonatomic, readonly, copy) id additionalRowSerializedRepresentation;
@property (nonatomic, readonly) Class contentItemClass;
@property (getter=isFilterable, nonatomic, readonly) bool filterable;

- (void).cxx_destruct;
- (id)additionalRowSerializedRepresentation;
- (bool)allowsMultipleValues;
- (Class)contentItemClass;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (id)initWithDefinition:(id)arg1;
- (bool)isFilterable;
- (Class)singleStateClass;

@end
