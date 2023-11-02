
@interface CKMergeableValueIDProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (nonatomic, readonly) unsigned long long size;

- (void)copyIdentifierBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (void)copyZoneNameBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (void)copyZoneOwnerNameBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (id)identifier;
- (unsigned long long)identifierSize;
- (id)mergeableValueID;
- (unsigned long long)size;
- (id)zoneName;
- (unsigned long long)zoneNameSize;
- (id)zoneOwnerName;
- (unsigned long long)zoneOwnerNameSize;

@end
