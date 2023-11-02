
@protocol MSSubscriber

@required

- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForNewAssetCollectionsIfMissingCtag;
- (void)checkForOutstandingActivities;
- (<MSSubscriberDelegate> *)delegate;
- (MSSubscribedStream *)ownSubscribedStream;
- (void)resetSync;
- (void)retrieveAssets:(NSArray *)arg1;
- (void)setDelegate:(id <MSSubscriberDelegate>)arg1;
- (void)stop;
- (NSArray *)subscribedStreams;

@end
