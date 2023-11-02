
@interface CKXAtomORCSchemaFormatVersionORC : NSObject <CKXORCHelpers> {
    CKXAtomBindingImplementation * _binding;
}

@property (nonatomic, readonly) CKXAtomBindingImplementation *binding;

- (void).cxx_destruct;
- (id)binding;
- (void)configureColumnsWithRootColumn:(void*)arg1;
- (id)generateSchema;
- (id)initWithBinding:(id)arg1;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;

@end
