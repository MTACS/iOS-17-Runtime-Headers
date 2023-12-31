
@interface CMExerciseMinute : NSObject {
    CMExerciseMinuteInternal * _internal;
}

@property (nonatomic, readonly) CMExerciseMinuteInternal *_internal;

+ (bool)isExerciseMinuteAvailable;
+ (id)maxExerciseMinuteDataEntries;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)queryExerciseMinutesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdates;

@end
