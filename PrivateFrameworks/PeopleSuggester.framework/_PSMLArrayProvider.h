
@interface _PSMLArrayProvider : NSObject {
    MLArrayBatchProvider * _MLArrayProvider;
    int  _clusteringCount;
    int  _recencyCount;
}

@property (nonatomic, retain) MLArrayBatchProvider *MLArrayProvider;
@property (nonatomic) int clusteringCount;
@property (nonatomic) int recencyCount;

- (void).cxx_destruct;
- (id)MLArrayProvider;
- (int)clusteringCount;
- (id)initWithProvider:(id)arg1 clusteringCount:(int)arg2 recencyCount:(int)arg3;
- (int)recencyCount;
- (void)setClusteringCount:(int)arg1;
- (void)setMLArrayProvider:(id)arg1;
- (void)setRecencyCount:(int)arg1;

@end
