
@interface PGKeyCuratorCluster : NSObject {
    <CLSInvestigationItem> * _keyItem;
    double  _score;
    NSArray * _subclusters;
}

@property (readonly) <CLSInvestigationItem> *keyItem;
@property (readonly) double score;
@property (readonly) NSArray *subclusters;

- (void).cxx_destruct;
- (id)initWithSubclusters:(id)arg1 keyItem:(id)arg2 score:(double)arg3;
- (id)keyItem;
- (double)score;
- (id)subclusters;

@end
