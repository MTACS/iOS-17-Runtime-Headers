
@interface CLSSummaryClusteringItem : NSObject {
    PLDataCluster * _cluster;
    unsigned long long  _numberOfItemsToElect;
}

@property (readonly) PLDataCluster *cluster;
@property (readonly) unsigned long long numberOfItemsToElect;

- (void).cxx_destruct;
- (id)cluster;
- (id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsToElect;

@end
