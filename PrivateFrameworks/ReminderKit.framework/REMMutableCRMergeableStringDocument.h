
@interface REMMutableCRMergeableStringDocument : NSObject <REMReplicaIDHelperOwner, REMTTHashtagHosting> {
    TTMergeableStringVersionedDocument * _document;
    REMReplicaIDHelper * _replicaIDHelper;
    REMReplicaIDSource * _replicaIDSource;
    <REMReplicaManagerProviding> * _replicaManagerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TTMergeableStringVersionedDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TTMergeableAttributedString *mergeableString;
@property (nonatomic, retain) REMReplicaIDHelper *replicaIDHelper;
@property (nonatomic, retain) REMReplicaIDSource *replicaIDSource;
@property (nonatomic, retain) <REMReplicaManagerProviding> *replicaManagerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_test_insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addHashtag:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)document;
- (void)enumerateHashtagInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)hashtagAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)immutableDocument;
- (id)initWithReplicaIDSource:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 immutableDocumentToEdit:(id)arg2;
- (id)mergeableString;
- (void)removeHashtagInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)replicaIDHelper;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1;
- (id)replicaIDSource;
- (id)replicaManagerProvider;
- (void)setDocument:(id)arg1;
- (void)setReplicaIDHelper:(id)arg1;
- (void)setReplicaIDSource:(id)arg1;
- (void)setReplicaManagerProvider:(id)arg1;
- (id)wipeAndReplaceWithString:(id)arg1;

@end
