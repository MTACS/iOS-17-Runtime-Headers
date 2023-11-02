
@interface IRFeatureFlags : NSObject

@property (getter=isAutomaticControlFeatureEnabled, nonatomic, readonly) bool automaticControlFeatureEnabled;
@property (getter=isAutomaticRoutingFeatureEnabled, nonatomic, readonly) bool automaticRoutingFeatureEnabled;
@property (getter=isPickerPrioritizationFeatureEnabled, nonatomic, readonly) bool pickerPrioritizationFeatureEnabled;
@property (getter=isServiceFeatureEnabled, nonatomic, readonly) bool serviceFeatureEnabled;
@property (getter=isSuggestedControlFeatureEnabled, nonatomic, readonly) bool suggestedControlFeatureEnabled;
@property (getter=isSuggestedRoutingFeatureEnabled, nonatomic, readonly) bool suggestedRoutingFeatureEnabled;
@property (getter=isTVRemoteControlFeatureEnabled, nonatomic, readonly) bool tvRemoteControlFeatureEnabled;

+ (id)sharedFeatureFlags;

- (void)_checkForUnitTestingWithFeatureName:(id)arg1;
- (bool)isAutomaticControlFeatureEnabled;
- (bool)isAutomaticRoutingFeatureEnabled;
- (bool)isPickerPrioritizationFeatureEnabled;
- (bool)isServiceFeatureEnabled;
- (bool)isSuggestedControlFeatureEnabled;
- (bool)isSuggestedRoutingFeatureEnabled;
- (bool)isTVRemoteControlFeatureEnabled;

@end
