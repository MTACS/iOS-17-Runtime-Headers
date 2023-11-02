
@interface HDCloudSyncFetchSharesOperation : HDCloudSyncSynchronousOperation {
    bool  _fetchAllShares;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _shares;
}

@property (nonatomic) bool fetchAllShares;
@property (nonatomic, readonly, copy) NSArray *shares;

- (void).cxx_destruct;
- (bool)fetchAllShares;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (bool)performWithError:(id*)arg1;
- (void)setFetchAllShares:(bool)arg1;
- (id)shares;

@end
