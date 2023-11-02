
@protocol CLIndoorDelegateProtocol <NSObject>

@required

- (void)indoorDidUpdateToLocation:(CLIndoorLocation *)arg1 fromLocation:(CLIndoorLocation *)arg2;

@optional

- (void)indoorAssetDownloadProgress:(float)arg1;
- (void)indoorDidFailWithError:(NSError *)arg1;
- (void)indoorGivesUpWithLocation:(CLIndoorLocation *)arg1;
- (void)indoorIsUncertainWithLocation:(CLIndoorLocation *)arg1;

@end
