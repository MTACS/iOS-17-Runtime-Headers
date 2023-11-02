
@interface _ATXActivityTransitionCombinationState : NSObject <NSCopying> {
    unsigned long long  _appLaunchActivity;
    double  _appLaunchConfidence;
    unsigned long long  _computedModeActivity;
    double  _computedModeConfidence;
    unsigned long long  _heuristicActivity;
    double  _heuristicConfidence;
    unsigned long long  _timeBasedActivity;
    double  _timeBasedConfidence;
    double  _timestamp;
}

@property (nonatomic) unsigned long long appLaunchActivity;
@property (nonatomic) double appLaunchConfidence;
@property (nonatomic) unsigned long long computedModeActivity;
@property (nonatomic) double computedModeConfidence;
@property (nonatomic) unsigned long long heuristicActivity;
@property (nonatomic) double heuristicConfidence;
@property (nonatomic, readonly) double scaledAppLaunchConfidence;
@property (nonatomic, readonly) double scaledComputedModeConfidence;
@property (nonatomic, readonly) double scaledHeuristicConfidence;
@property (nonatomic, readonly) double scaledTimeBasedConfidence;
@property (nonatomic) unsigned long long timeBasedActivity;
@property (nonatomic) double timeBasedConfidence;
@property (nonatomic) double timestamp;

- (unsigned long long)appLaunchActivity;
- (double)appLaunchConfidence;
- (unsigned long long)computedModeActivity;
- (double)computedModeConfidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endTransitionWithTimestamp:(double)arg1;
- (bool)hasSameTopActivityAndConfidenceAsOther:(id)arg1;
- (unsigned long long)heuristicActivity;
- (double)heuristicConfidence;
- (id)init;
- (id)newStateFromTransition:(id)arg1;
- (double)scaledAppLaunchConfidence;
- (double)scaledComputedModeConfidence;
- (double)scaledHeuristicConfidence;
- (double)scaledTimeBasedConfidence;
- (void)setAppLaunchActivity:(unsigned long long)arg1;
- (void)setAppLaunchConfidence:(double)arg1;
- (void)setComputedModeActivity:(unsigned long long)arg1;
- (void)setComputedModeConfidence:(double)arg1;
- (void)setHeuristicActivity:(unsigned long long)arg1;
- (void)setHeuristicConfidence:(double)arg1;
- (void)setTimeBasedActivity:(unsigned long long)arg1;
- (void)setTimeBasedConfidence:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (id)startTransition;
- (unsigned long long)timeBasedActivity;
- (double)timeBasedConfidence;
- (double)timestamp;
- (id)topActivityWithConfidence;

@end
