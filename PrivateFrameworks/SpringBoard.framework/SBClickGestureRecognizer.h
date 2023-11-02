
@interface SBClickGestureRecognizer : SBPressGestureRecognizer {
    bool  _allPressBeganReceived;
    bool  _allPressesUpRequired;
    bool  _gestureWasRecognized;
    double  _maximumBetweenClicksDelay;
    double  _maximumClickDownDuration;
    double  _maximumClickFormationDuration;
    unsigned long long  _numberOfClicksRequired;
    NSMutableSet * _receivedPressBeganTypes;
    NSMutableSet * _receivedPressEndedTypes;
    unsigned long long  _recognizedClicksCount;
    NSMutableArray * _shortcutPressTypesSubsets;
}

@property (nonatomic) bool allPressesUpRequired;
@property (nonatomic) double maximumBetweenClicksDelay;
@property (nonatomic) double maximumClickDownDuration;
@property (nonatomic) double maximumClickFormationDuration;
@property (nonatomic) unsigned long long numberOfClicksRequired;

- (void).cxx_destruct;
- (bool)_areRequiredPressTypesContainedInSet:(id)arg1;
- (void)_notePressReceivedWithType:(long long)arg1 phase:(long long)arg2;
- (void)addShortcutWithPressTypes:(id)arg1;
- (bool)allPressesUpRequired;
- (bool)didReceiveRequiredPressBeganCount;
- (bool)didReceiveRequiredPressEndedCount;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)maximumBetweenClicksDelay;
- (double)maximumClickDownDuration;
- (double)maximumClickFormationDuration;
- (unsigned long long)numberOfClicksRequired;
- (void)reset;
- (void)resetShortcutsTracking;
- (void)setAllPressesUpRequired:(bool)arg1;
- (void)setMaximumBetweenClicksDelay:(double)arg1;
- (void)setMaximumClickDownDuration:(double)arg1;
- (void)setMaximumClickFormationDuration:(double)arg1;
- (void)setNumberOfClicksRequired:(unsigned long long)arg1;

@end
