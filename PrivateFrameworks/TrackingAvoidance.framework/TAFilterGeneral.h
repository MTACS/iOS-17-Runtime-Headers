
@interface TAFilterGeneral : NSObject

+ (id)dateIntervalAfterVisitAdjustment:(id)arg1 intervalOfInterest:(id)arg2;
+ (double)distOfTravelAlong:(id)arg1;
+ (id)filterSuspiciousDeviceWithStore:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
+ (id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;
+ (id)filteredInterVisitMetadata:(id)arg1 inInterval:(id)arg2 withLocRelevanceThreshold:(double)arg3;
+ (id)filteredInterVisitMetadataWithVisitAdjustment:(id)arg1 inInterval:(id)arg2 withLocRelevanceThreshold:(double)arg3;
+ (id)filteredPeopleDensityResults:(id)arg1 within:(id)arg2;
+ (id)getDateIntervalOfInterestForFiltering:(id)arg1 settings:(id)arg2;
+ (bool)locationA:(id)arg1 isSignificantlyDifferentFromLocationB:(id)arg2;
+ (bool)locationSegments:(id)arg1 underMaxSpeed:(double)arg2;
+ (bool)locationSegmentsUnderPedestrianMaxSpeed:(id)arg1 withFilterSettings:(id)arg2;
+ (void)preprocessLocationAndAdvertisementWithEnumerator:(id)arg1 addressToLocationList:(id)arg2 addressToAdvertisementList:(id)arg3 relevanceThreshold:(double)arg4;
+ (bool)satisfyBeepOnMoveRequirementForAddress:(id)arg1 store:(id)arg2 settings:(id)arg3;
+ (bool)satisfyNextPLOIHomeWithStore:(id)arg1;
+ (bool)shouldIssuePeopleDensityScan:(unsigned long long)arg1 distTravel:(double)arg2 durationOfTravel:(double)arg3 settings:(id)arg4 resultsInBuffer:(id)arg5;

@end
