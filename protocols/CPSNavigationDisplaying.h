
@protocol CPSNavigationDisplaying <NSObject>

@optional

- (void)navigator:(CPSNavigator *)arg1 didEndTrip:(bool)arg2;
- (void)navigator:(CPSNavigator *)arg1 pausedTripForReason:(unsigned long long)arg2 description:(NSString *)arg3 usingColor:(UIColor *)arg4;
- (void)showManeuvers:(NSArray *)arg1 usingDisplayStyles:(NSArray *)arg2;
- (void)updateEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)updateTripEstimates:(CPTravelEstimates *)arg1;

@end
