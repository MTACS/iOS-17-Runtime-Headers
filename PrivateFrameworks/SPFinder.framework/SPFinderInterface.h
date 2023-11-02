
@interface SPFinderInterface : NSObject {
    SPAdvertisementCache * _advertisementCache;
}

@property (nonatomic, retain) SPAdvertisementCache *advertisementCache;

- (void).cxx_destruct;
- (id)advertisementCache;
- (id)beaconPayloadCache;
- (id)finderStateManager;
- (void)setAdvertisementCache:(id)arg1;
- (id)stateManager;

@end
