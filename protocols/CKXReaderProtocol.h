
@protocol CKXReaderProtocol <CKXReaderWriterProtocol>

@required

- (void)copyData:(void*)arg1 forField:(unsigned long long)arg2 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)copyData:(void*)arg1 forList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (long long)lengthForList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (bool)referenceIsNull:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })referencedListForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedStructAtIndex:(long long)arg1 inList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedStructForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })rootStructWithType:(unsigned long long)arg1;
- (bool)setReadableStorage:(CKDSReadableStorage *)arg1 error:(id*)arg2;

@end
