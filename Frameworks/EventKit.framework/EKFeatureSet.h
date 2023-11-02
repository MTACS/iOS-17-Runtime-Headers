
@interface EKFeatureSet : NSObject

+ (unsigned long long)_currentSplashScreenVersion;
+ (bool)areApplicationBadgesSupported;
+ (bool)areContextualRemindersSupported;
+ (bool)areQuickActionsSupported;
+ (bool)areVehicleTriggersEnabled;
+ (bool)automaticGeocodingEnabled;
+ (bool)calendarListViewCellsFeaturesAttendeeInformation;
+ (bool)calendarListViewCellsFeaturesExtraContent;
+ (bool)eventsFoundInAppsEnabled;
+ (bool)isConservativeEntryEnabled;
+ (bool)isContinuitySupported;
+ (bool)isSuggestionsEnabled;
+ (bool)isTravelAdvisorySupported;
+ (bool)mustDisplaySplashScreenToUser;
+ (void)userAcknowledgedSplashScreen;

@end
