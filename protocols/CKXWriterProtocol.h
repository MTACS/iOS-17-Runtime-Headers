
@protocol CKXWriterProtocol <CKXReaderWriterProtocol>

@required

- (void)assignStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 toReference:(unsigned long long)arg2 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginAppendedListStructInList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })beginReferencedListForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginRootStructWithType:(unsigned long long)arg1 error:(id*)arg2;
- (void)commitStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (bool)flushWithError:(id*)arg1;
- (void)setData:(void*)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)setData:(void*)arg1 withLength:(unsigned long long)arg2 forList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg3;
- (bool)setWritableStorage:(CKDSWritableStorage *)arg1 error:(id*)arg2;

@end
