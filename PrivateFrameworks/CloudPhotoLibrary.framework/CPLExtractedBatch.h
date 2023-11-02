
@interface CPLExtractedBatch : NSObject <NSSecureCoding> {
    CPLChangeBatch * _batch;
    bool  _batchCanLowerQuota;
    NSString * _clientCacheIdentifier;
    bool  _full;
    NSMutableDictionary * _mutablePushContexts;
    NSMutableSet * _mutableUntrustableScopedIndentifiers;
    NSDictionary * _pushContexts;
    unsigned long long  _resourceSize;
    bool  _resourceSizeIsCalculated;
    NSSet * _untrustableScopedIdentifiers;
}

@property (nonatomic, readonly) CPLChangeBatch *batch;
@property (nonatomic, readonly) bool batchCanLowerQuota;
@property (nonatomic, copy) NSString *clientCacheIdentifier;
@property (getter=isFull, nonatomic) bool full;
@property (nonatomic, readonly) unsigned long long resourceSize;
@property (nonatomic, readonly) <NSFastEnumeration> *uploadIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addChange:(id)arg1 fromStorage:(id)arg2;
- (id)batch;
- (bool)batchCanLowerQuota;
- (id)clientCacheIdentifier;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePushContextsWithBlock:(id /* block */)arg1;
- (void)forceScopeIndexOnAllRecordsTo:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFull;
- (unsigned long long)resourceSize;
- (void)setClientCacheIdentifier:(id)arg1;
- (void)setFull:(bool)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (id)uploadIdentifiers;

@end
