
@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumAllowableTravelTime;
@property (nonatomic, readonly) double minimumAllowableTravelTime;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1;
- (double)maximumAllowableTravelTime;
- (double)minimumAllowableTravelTime;
- (bool)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end
