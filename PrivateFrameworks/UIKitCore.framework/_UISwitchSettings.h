
@interface _UISwitchSettings : NSObject

@property (nonatomic, readonly) bool feedbackEnabled;
@property (nonatomic, readonly) double hapticDelay;
@property (nonatomic, readonly) double impactIntensity;
@property (nonatomic, readonly) double knobSpringAnimationDamping;
@property (nonatomic, readonly) double knobSpringAnimationDuration;
@property (nonatomic, readonly) double knobSpringAnimationMass;
@property (nonatomic, readonly) double knobSpringAnimationStiffness;
@property (nonatomic, readonly) double knobSpringDampingAnimationTouchDown;
@property (nonatomic, readonly) double knobSpringDampingAnimationTouchUp;
@property (nonatomic, readonly) double knobSpringDurationAnimationTouchDown;
@property (nonatomic, readonly) double knobSpringDurationAnimationTouchUp;
@property (nonatomic, readonly) double knobSpringMassAnimationTouchDown;
@property (nonatomic, readonly) double knobSpringMassAnimationTouchUp;
@property (nonatomic, readonly) double knobSpringStiffnessAnimationTouchDown;
@property (nonatomic, readonly) double knobSpringStiffnessAnimationTouchUp;
@property (nonatomic, readonly) double knobTouchDownSpringAnimationDamping;
@property (nonatomic, readonly) double knobTouchDownSpringAnimationDuration;
@property (nonatomic, readonly) double knobTouchDownSpringAnimationMass;
@property (nonatomic, readonly) double knobTouchDownSpringAnimationStiffness;
@property (nonatomic, readonly) double trackBorderGoingOffAnimationBeginTimeOffset;
@property (nonatomic, readonly) double trackBorderGoingOffAnimationDuration;
@property (nonatomic, readonly) double trackBorderGoingOnAnimationDuration;
@property (nonatomic, readonly) double trackColorAnimationDuration;
@property (nonatomic, readonly) double trackGoingOffSpringAnimationDamping;
@property (nonatomic, readonly) double trackGoingOffSpringAnimationDuration;
@property (nonatomic, readonly) double trackGoingOffSpringAnimationMass;
@property (nonatomic, readonly) double trackGoingOffSpringAnimationStiffness;
@property (nonatomic, readonly) double trackGoingOnSpringAnimationDamping;
@property (nonatomic, readonly) double trackGoingOnSpringAnimationDuration;
@property (nonatomic, readonly) double trackGoingOnSpringAnimationMass;
@property (nonatomic, readonly) double trackGoingOnSpringAnimationStiffness;

+ (id)sharedSettings;

- (bool)feedbackEnabled;
- (double)hapticDelay;
- (double)impactIntensity;
- (double)knobSpringAnimationDamping;
- (double)knobSpringAnimationDuration;
- (double)knobSpringAnimationMass;
- (double)knobSpringAnimationStiffness;
- (double)knobSpringDampingAnimationTouchDown;
- (double)knobSpringDampingAnimationTouchUp;
- (double)knobSpringDurationAnimationTouchDown;
- (double)knobSpringDurationAnimationTouchUp;
- (double)knobSpringMassAnimationTouchDown;
- (double)knobSpringMassAnimationTouchUp;
- (double)knobSpringStiffnessAnimationTouchDown;
- (double)knobSpringStiffnessAnimationTouchUp;
- (double)knobTouchDownSpringAnimationDamping;
- (double)knobTouchDownSpringAnimationDuration;
- (double)knobTouchDownSpringAnimationMass;
- (double)knobTouchDownSpringAnimationStiffness;
- (double)trackBorderGoingOffAnimationBeginTimeOffset;
- (double)trackBorderGoingOffAnimationDuration;
- (double)trackBorderGoingOnAnimationDuration;
- (double)trackColorAnimationDuration;
- (double)trackGoingOffSpringAnimationDamping;
- (double)trackGoingOffSpringAnimationDuration;
- (double)trackGoingOffSpringAnimationMass;
- (double)trackGoingOffSpringAnimationStiffness;
- (double)trackGoingOnSpringAnimationDamping;
- (double)trackGoingOnSpringAnimationDuration;
- (double)trackGoingOnSpringAnimationMass;
- (double)trackGoingOnSpringAnimationStiffness;

@end
