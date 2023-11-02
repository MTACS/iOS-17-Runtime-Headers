
@interface CKDKeyEnvelopeContext : NSObject <NSCopying> {
    bool  _encryptMergeableValueMetadata;
    CKMergeableValueID * _mergeableValueID;
    CKDPCSManager * _pcsManager;
    struct _OpaquePCSShareProtection { } * _shareProtection;
}

@property (nonatomic) bool encryptMergeableValueMetadata;
@property (nonatomic, copy) CKMergeableValueID *mergeableValueID;
@property (nonatomic, retain) CKDPCSManager *pcsManager;
@property (nonatomic) struct _OpaquePCSShareProtection { }*shareProtection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)encryptMergeableValueMetadata;
- (id)envelopeContextWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)mergeableValueID;
- (id)pcsManager;
- (void)setEncryptMergeableValueMetadata:(bool)arg1;
- (void)setMergeableValueID:(id)arg1;
- (void)setPcsManager:(id)arg1;
- (void)setShareProtection:(struct _OpaquePCSShareProtection { }*)arg1;
- (struct _OpaquePCSShareProtection { }*)shareProtection;

@end
