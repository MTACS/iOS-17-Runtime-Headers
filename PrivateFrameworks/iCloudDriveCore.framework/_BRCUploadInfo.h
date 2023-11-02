
@interface _BRCUploadInfo : _BRCTransferInfo {
    NSMutableSet * _outOfQuotaObjIDs;
}

@property (nonatomic, readonly) bool allUploadsPendingQuota;
@property (nonatomic, readonly) NSMutableSet *outOfQuotaObjIDs;

- (void).cxx_destruct;
- (bool)allUploadsPendingQuota;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (id)description;
- (id)init;
- (id)outOfQuotaObjIDs;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;

@end
