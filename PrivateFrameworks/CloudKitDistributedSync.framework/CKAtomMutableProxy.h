
@interface CKAtomMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)assignTimestampFromProxy:(id)arg1;
- (void)copyFromReadProxy:(id)arg1;
- (id)location;
- (id)references;
- (void)setAtomBehavior:(unsigned char)arg1;
- (void)setAtomType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (void)setValueBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)setVersion:(unsigned long long)arg1;
- (id)timestamp;

@end
