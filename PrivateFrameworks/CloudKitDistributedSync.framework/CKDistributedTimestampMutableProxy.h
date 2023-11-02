
@interface CKDistributedTimestampMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)assignDistributedSiteIdentifierFromProxy:(id)arg1;
- (void)copyFromReadProxy:(id)arg1;
- (void)copyFromTimestamp:(id)arg1;
- (id)distributedSiteIdentifier;
- (void)setClock:(unsigned long long)arg1;
- (void)setModifier:(unsigned char)arg1;
- (void)setSiteIdentifier:(id)arg1;
- (void)setSiteIdentifierBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)setUnordered:(bool)arg1;

@end
