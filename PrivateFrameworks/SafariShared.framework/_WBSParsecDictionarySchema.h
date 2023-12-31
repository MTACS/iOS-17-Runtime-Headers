
@interface _WBSParsecDictionarySchema : WBSParsecSchema {
    NSDictionary * _keysToSchemata;
}

@property (nonatomic, copy) NSDictionary *keysToSchemata;

- (void).cxx_destruct;
- (bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(id /* block */)arg4;
- (id)initWithSchemaDictionary:(id)arg1 associatedError:(id)arg2 isOptional:(bool)arg3;
- (id)keysToSchemata;
- (void)setKeysToSchemata:(id)arg1;

@end
