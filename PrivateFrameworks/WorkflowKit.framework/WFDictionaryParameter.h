
@interface WFDictionaryParameter : WFParameter {
    NSSet * _allowedValueTypes;
    NSString * _localizedItemTypeName;
    NSString * _localizedNewItemTypeName;
}

@property (nonatomic, readonly) NSSet *allowedValueTypes;
@property (nonatomic, readonly) NSString *localizedItemTypeName;
@property (nonatomic, readonly) NSString *localizedNewItemTypeName;

- (void).cxx_destruct;
- (id)allowedValueTypes;
- (bool)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (id)localizedItemTypeName;
- (id)localizedNewItemTypeName;
- (Class)singleStateClass;

@end
