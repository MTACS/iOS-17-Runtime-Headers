
@interface _UIKBFeedbackGeneratorPartner : NSObject

+ (bool)_isVisceralEnabled;
+ (bool)_shouldPreheatAndCoolSystemSounds;
+ (void)cooldownSystemSoundsForObject:(id)arg1;
+ (id)feedbackGeneratorWithCoordinateSpace:(id)arg1;
+ (void)preheatSystemSoundsForObject:(id)arg1;

@end
