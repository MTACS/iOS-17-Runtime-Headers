
@interface SHClusterStatus : NSObject {
    NSURL * _dataURL;
    bool  _isDataValid;
    long long  _loadStatus;
    SHClusterMetadata * _metadata;
}

@property (nonatomic, readonly) long long clusterType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) NSURL *dataURL;
@property (nonatomic) bool isDataValid;
@property (nonatomic) long long loadStatus;
@property (nonatomic, retain) SHClusterMetadata *metadata;
@property (nonatomic, readonly, copy) NSString *storefront;
@property (nonatomic, readonly, copy) NSString *uniqueHash;

- (void).cxx_destruct;
- (long long)clusterType;
- (id)creationDate;
- (id)dataURL;
- (bool)isDataValid;
- (long long)loadStatus;
- (id)metadata;
- (void)setDataURL:(id)arg1;
- (void)setIsDataValid:(bool)arg1;
- (void)setLoadStatus:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (id)storefront;
- (id)uniqueHash;

@end
