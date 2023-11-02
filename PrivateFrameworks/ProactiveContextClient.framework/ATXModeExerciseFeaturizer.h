
@interface ATXModeExerciseFeaturizer : NSObject <ATXModeFeaturizer> {
    <ATXModeFeaturizerDelegate> * _delegate;
    bool  _isInWorkout;
    _CDContextualChangeRegistration * _registration;
    _CDClientContext * _userContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isInWorkout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createWorkoutPredicate;
- (void)_setUpContextIfNecessary;
- (void)beginListening;
- (id)delegate;
- (bool)isInWorkout;
- (id)provideFeatures;
- (void)setDelegate:(id)arg1;
- (void)setIsInWorkout:(bool)arg1;
- (void)stopListening;

@end
