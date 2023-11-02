
@interface CKXAtomORCSchema : NSObject <CKXORCHelpers> {
    <CKXORCHelpers> * _implementation;
}

@property (nonatomic, readonly) <CKXORCHelpers> *implementation;

- (void).cxx_destruct;
- (void)configureColumnsWithRootColumn:(void*)arg1;
- (id)generateSchema;
- (id)implementation;
- (id)initWithBinding:(id)arg1 formatVersion:(unsigned char)arg2;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;

@end
