
@interface MPAVRoutingViewControllerItems : NSObject {
    NSArray * _headphones;
    NSArray * _localDevices;
    NSDictionary * _routeGrouping;
    NSArray * _speakersAndTVs;
}

@property (nonatomic, copy) NSArray *headphones;
@property (nonatomic, copy) NSArray *localDevices;
@property (nonatomic, copy) NSDictionary *routeGrouping;
@property (nonatomic, copy) NSArray *speakersAndTVs;

- (void).cxx_destruct;
- (id)headphones;
- (id)localDevices;
- (id)routeGrouping;
- (void)setHeadphones:(id)arg1;
- (void)setLocalDevices:(id)arg1;
- (void)setRouteGrouping:(id)arg1;
- (void)setSpeakersAndTVs:(id)arg1;
- (id)speakersAndTVs;

@end
