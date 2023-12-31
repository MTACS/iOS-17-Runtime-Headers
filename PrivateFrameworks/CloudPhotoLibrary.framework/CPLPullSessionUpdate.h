
@interface CPLPullSessionUpdate : CPLChangeSessionUpdate {
    CPLChangeBatch * _clientBatch;
    CPLChangeBatch * _cloudBatch;
}

@property (nonatomic, readonly) CPLChangeBatch *clientBatch;
@property (nonatomic, readonly) CPLChangeBatch *cloudBatch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (id)clientBatch;
- (id)cloudBatch;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;

@end
