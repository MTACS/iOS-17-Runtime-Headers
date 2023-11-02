
@interface CALNEKDebugPreferences : NSObject <CALNDebugPreferences>

@property (nonatomic, readonly) bool forceDisplayOfNewTravelAdvisoryHypotheses;

+ (id)sharedInstance;

- (bool)forceDisplayOfNewTravelAdvisoryHypotheses;

@end
