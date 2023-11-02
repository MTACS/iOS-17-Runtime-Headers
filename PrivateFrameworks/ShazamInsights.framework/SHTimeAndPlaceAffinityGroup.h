
@interface SHTimeAndPlaceAffinityGroup : NSObject {
    SHAffinityGroup * _affinityGroup;
    NSDictionary * _geohashKeyedRegions;
    NSArray * _regions;
}

@property (nonatomic, readonly) SHAffinityGroup *affinityGroup;
@property (nonatomic, readonly) NSDictionary *geohashKeyedRegions;
@property (nonatomic, readonly) NSArray *regions;

- (void).cxx_destruct;
- (id)affinityGroup;
- (id)geohashKeyedRegions;
- (id)initWithRegions:(id)arg1 affinityGroup:(id)arg2;
- (id)regions;
- (id)regionsForGeohash:(id)arg1;

@end
