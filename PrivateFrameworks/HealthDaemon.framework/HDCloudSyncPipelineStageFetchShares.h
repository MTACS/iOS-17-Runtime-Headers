
@interface HDCloudSyncPipelineStageFetchShares : HDCloudSyncPipelineStage {
    bool  _fetchAllShares;
    NSArray * _shares;
}

@property (nonatomic) bool fetchAllShares;
@property (nonatomic, readonly, copy) NSArray *shares;

- (void).cxx_destruct;
- (bool)fetchAllShares;
- (void)main;
- (void)setFetchAllShares:(bool)arg1;
- (id)shares;

@end
