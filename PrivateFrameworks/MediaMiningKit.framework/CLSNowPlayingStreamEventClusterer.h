
@interface CLSNowPlayingStreamEventClusterer : NSObject {
    CLSNowPlayingStreamEventClusteringParameters * _clusteringParameters;
    NSArray * _sessions;
}

@property (nonatomic, readonly) CLSNowPlayingStreamEventClusteringParameters *clusteringParameters;
@property (nonatomic, readonly) NSArray *sessions;

- (void).cxx_destruct;
- (id)_dbScanClusterEvents:(id)arg1;
- (id)_populateSessionsWithClusters:(id)arg1;
- (void)clusterEvents:(id)arg1;
- (id)clusteringParameters;
- (void)dbScanClusterEvents:(id)arg1;
- (id)init;
- (id)initWithClusteringParameters:(id)arg1;
- (void)naiveClusterEvents:(id)arg1;
- (id)sessions;

@end
