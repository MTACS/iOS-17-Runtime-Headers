
@interface AAQuotaInfoResponse : AAResponse {
    NSDictionary * _endPoints;
    NSDictionary * _quotaInfo;
    NSDictionary * _storageInfo;
    NSDictionary * _storageMeterLabel;
    NSArray * _usage;
}

@property (nonatomic, readonly) NSNumber *availableStorageInBytes;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) bool hasMaxTier;
@property (nonatomic, readonly) NSURL *manageStorageURL;
@property (nonatomic, readonly) NSNumber *totalStorageInBytes;
@property (nonatomic, readonly) NSArray *usage;
@property (nonatomic, readonly) NSNumber *usedStorageInBytes;

- (void).cxx_destruct;
- (void)_initFromResponseDict;
- (id)availableStorageInBytes;
- (id)displayLabel;
- (bool)hasMaxTier;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)manageStorageURL;
- (id)totalStorageInBytes;
- (void)updateAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)usage;
- (id)usedStorageInBytes;

@end
