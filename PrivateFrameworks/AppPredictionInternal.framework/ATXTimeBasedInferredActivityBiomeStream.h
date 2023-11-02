
@interface ATXTimeBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addBedtimeTransitionsForDate:(id)arg1 calendar:(id)arg2 toArray:(id)arg3;
- (void)_addHomeTransitionsForDate:(id)arg1 calendar:(id)arg2 toArray:(id)arg3;
- (void)_addTransitionForDate:(id)arg1 transitionHour:(long long)arg2 transitionMinute:(long long)arg3 calendar:(id)arg4 isEntry:(bool)arg5 activity:(unsigned long long)arg6 toArray:(id)arg7;
- (void)_addWorkTransitionsForDate:(id)arg1 calendar:(id)arg2 toArray:(id)arg3;
- (id)sessionPublisherFromStartTime:(double)arg1;
- (id)transitionPublisherFromStartTime:(double)arg1;

@end
