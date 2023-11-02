
@protocol CNUIUserActionContext <NSObject>

@required

- (<CNUIUserActionCurator> *)actionCurator;
- (<CNUIUserActionRecorder> *)actionRecorder;
- (NSString *)channelIdentifier;
- (BSServiceConnectionEndpoint *)connectionEndpoint;
- (<CNUIUserActionDialRequestOpener> *)dialRequestOpener;
- (bool)isOriginatingFromFavorites;
- (void)setChannelIdentifier:(NSString *)arg1;
- (void)setConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1;
- (void)setIsOriginatingFromFavorites:(bool)arg1;
- (<CNUIUserActionURLOpener> *)urlOpener;
- (<CNUIUserActionUserActivityOpener> *)userActivityOpener;

@end
