
@protocol CKXORCHelpers

@required

- (void)configureColumnsWithRootColumn:(void*)arg1;
- (NSString *)generateSchema;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;

@end
