
@protocol WBSSiteMetadataProvider <NSObject>

@required

- (bool)canHandleRequest:(WBSSiteMetadataRequest *)arg1;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(bool)arg2;
- (<WBSSiteMetadataProviderDelegate> *)providerDelegate;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(bool*)arg2;
- (void)setProviderDelegate:(id <WBSSiteMetadataProviderDelegate>)arg1;

@optional

- (void)emptyCaches;
- (bool)providesFavicons;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;

@end
