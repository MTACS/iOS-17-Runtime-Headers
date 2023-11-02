
@interface VKVenueBuildingFeatureMarker : VKMarker {
    bool  _localize;
}

@property (nonatomic, readonly) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long businessId;
@property (nonatomic, readonly) NSDictionary *floorNames;
@property (nonatomic, readonly) NSArray *floorOrdinals;
@property (nonatomic, readonly) NSDictionary *shortFloorNames;

- (unsigned long long)buildingId;
- (unsigned long long)businessId;
- (id)floorNames;
- (id)floorOrdinals;
- (id)initWithVenueBuilding:(const void*)arg1 localize:(bool)arg2;
- (struct { double x1; double x2; })nearestFramingPositionToLocation:(struct { double x1; double x2; })arg1;
- (id)shortFloorNames;
- (const void*)venueBuildingFeatureMarker;

@end
