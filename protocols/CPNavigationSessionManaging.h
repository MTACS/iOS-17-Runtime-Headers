
@protocol CPNavigationSessionManaging <NSObject>

@required

- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(NSString *)arg2;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(NSString *)arg2 turnCardColor:(UIColor *)arg3;
- (void)showManeuvers:(NSArray *)arg1 usingDisplayStyles:(NSArray *)arg2;
- (void)updateTravelEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)updateTripTravelEstimates:(CPTravelEstimates *)arg1;

@end
