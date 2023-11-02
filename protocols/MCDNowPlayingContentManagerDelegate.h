
@protocol MCDNowPlayingContentManagerDelegate <NSObject>

@optional

- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 bufferingItem:(bool)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 itemDidChange:(MPModelObject *)arg2 response:(MPCPlayerResponse *)arg3;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 processResponse:(MPCPlayerResponse *)arg2 error:(NSError *)arg3;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 pushViewController:(UIViewController *)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 sectionName:(NSString *)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 setAdditionalBarButtonItems:(NSArray *)arg2;
- (void)contentManager:(_MCDNowPlayingContentManager *)arg1 shouldShowPlaybackQueue:(bool)arg2;
- (void)contentManagerCompletedAllPlayback:(_MCDNowPlayingContentManager *)arg1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(_MCDNowPlayingContentManager *)arg1;
- (void)contentManagerReloadData:(_MCDNowPlayingContentManager *)arg1;

@end
