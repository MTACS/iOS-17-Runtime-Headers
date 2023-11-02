
@interface CLAvailableVenuesStateMachine : NSObject {
    CLIndoorAvailabilityTileParams * _availabilityTileParams;
    NSSet * _disabledVenues;
    GeographicCoordinate * _lastFix;
    double  _maxLoadRadius;
}

@property (readonly) CLIndoorAvailabilityTileParams *availabilityTileParams;
@property (retain) NSSet *disabledVenues;
@property (readonly) GeographicCoordinate *lastFix;
@property double maxLoadRadius;

+ (double)deg2rad:(double)arg1;
+ (double)distBetweenLatLon:(id)arg1 latlon1:(id)arg2;
+ (long long)getLocationContextFromVenueBounds:(const void*)arg1;
+ (double)metersFromGreatCircleDistance:(double)arg1;

- (void).cxx_destruct;
- (id)availabilityTileParams;
- (void)clearLastFix;
- (id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2;
- (id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2 withError:(bool*)arg3;
- (id)disabledVenues;
- (id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2;
- (id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3;
- (id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2;
- (id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3;
- (id)init;
- (bool)isVenueDisabled:(id)arg1 locationId:(id)arg2;
- (id)lastFix;
- (double)maxLoadRadius;
- (id)openTileParserAtPath:(id)arg1;
- (id)recomputeIfNecessary:(id)arg1 withGlobalAvailabilityTile:(id)arg2 andAdditionalLOIs:(id)arg3;
- (void)setDisabledVenues:(id)arg1;
- (void)setMaxLoadRadius:(double)arg1;
- (bool)shouldRecompute:(id)arg1;

@end
