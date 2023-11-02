
@interface MRURoutingViewControllerItems : NSObject {
    NSArray * _customRows;
    NSArray * _localDevicesAndHeadphones;
    NSDictionary * _routeGrouping;
    NSArray * _speakersAndTVs;
}

@property (nonatomic, copy) NSArray *customRows;
@property (nonatomic, copy) NSArray *localDevicesAndHeadphones;
@property (nonatomic, copy) NSDictionary *routeGrouping;
@property (nonatomic, copy) NSArray *speakersAndTVs;

- (void).cxx_destruct;
- (id)customRows;
- (id)localDevicesAndHeadphones;
- (id)routeGrouping;
- (void)setCustomRows:(id)arg1;
- (void)setLocalDevicesAndHeadphones:(id)arg1;
- (void)setRouteGrouping:(id)arg1;
- (void)setSpeakersAndTVs:(id)arg1;
- (id)speakersAndTVs;

@end
