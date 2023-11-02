
@protocol CPBannerProviding <NSObject>

@required

- (void)postBannerForManeuver:(CPManeuver *)arg1 travelEstimates:(CPTravelEstimates *)arg2;
- (void)postBannerForNavigationAlert:(CPNavigationAlert *)arg1;

@end
