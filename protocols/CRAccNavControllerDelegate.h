
@protocol CRAccNavControllerDelegate <NSObject>

@required

- (NSDictionary *)laneGuidanceProvidingIndexed;
- (NSDictionary *)maneuversProvidingIndexed;
- (<CRAccNavInfoProviding> *)routeGuidanceProviding;
- (void)sendInfo:(CRAccNavInfo *)arg1 toComponentUID:(NSUUID *)arg2;

@end
