
@interface EKFoundInAppsEventTracker : NSObject

+ (void)trackPseudoEventDateChanged;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventInitialTimeToLeaveFired;
+ (void)trackPseudoEventsExpired:(int)arg1;

@end
