
@interface GEOEVCharger : NSObject {
    GEOEVChargerAvailability * _aggregatedAvailabilityInfo;
    NSArray * _plugs;
}

@property (nonatomic, readonly) GEOEVChargerAvailability *aggregatedAvailabilityInfo;
@property (nonatomic, readonly) NSArray *plugs;

+ (id)chargerFromPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)aggregatedAvailabilityInfo;
- (id)initWithPlugs:(id)arg1 aggregatedAvailabilityInfo:(id)arg2;
- (id)plugs;

@end
