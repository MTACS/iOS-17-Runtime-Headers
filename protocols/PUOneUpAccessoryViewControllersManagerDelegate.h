
@protocol PUOneUpAccessoryViewControllersManagerDelegate <NSObject>

@optional

- (bool)oneUpAccessoryViewControllersManager:(PUOneUpAccessoryViewControllersManager *)arg1 preventInternalFileRadarActionForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpAccessoryViewControllersManager:(PUOneUpAccessoryViewControllersManager *)arg1 preventRevealInMomentActionForAssetReference:(PUAssetReference *)arg2;
- (void)oneUpAccessoryViewControllersManagerInvalidateAccessoryLayout:(PUOneUpAccessoryViewControllersManager *)arg1;
- (bool)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(PUOneUpAccessoryViewControllersManager *)arg1;

@end
