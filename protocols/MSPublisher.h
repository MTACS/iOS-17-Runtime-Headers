
@protocol MSPublisher <NSObject>

@required

- (void)abort;
- (<MSPublisherDelegate> *)delegate;
- (void)publish;
- (int)publishBatchSize;
- (void)reenqueueQuarantinedAssetCollections;
- (void)setDelegate:(id <MSPublisherDelegate>)arg1;
- (void)setPublishBatchSize:(int)arg1;
- (void)stop;
- (void)submitAssetCollectionsForPublication:(NSArray *)arg1 skipAssetCollections:(NSArray *)arg2;

@end
