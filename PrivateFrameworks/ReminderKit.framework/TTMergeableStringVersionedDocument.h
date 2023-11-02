
@interface TTMergeableStringVersionedDocument : TTVersionedDocument <REMReplicaClockProviding> {
    TTMergeableAttributedString * _mergeableString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TTMergeableAttributedString *mergeableString;
@property (readonly) Class superclass;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)clockElementListForReplicaUUID:(id)arg1;
- (id)initWithArchive:(const void*)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithMergeableString:(id)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithStringVersionedDocument:(id)arg1;
- (id)mergeableString;
- (id)rem_copyWithReplicaIDForNewEdits:(id)arg1;
- (bool)rem_isEqual:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setMergeableString:(id)arg1;

@end
