
@interface ATXUnifiedActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    ATXAppLaunchBasedInferredActivityBiomeStream * _appLaunchInferredActivityStream;
    ATXHeuristicInferredActivityBiomeStream * _heuristicInferredActivityStream;
    ATXTimeBasedInferredActivityBiomeStream * _timeBasedInferredActivityStream;
    ATXUserFocusComputedActivityBiomeStream * _userFocusComputedActivityStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mergeTransitionPublisher:(id)arg1 withOthers:(id)arg2;
- (id)_mergeTransitionPublishers:(id)arg1;
- (id)efficientCurrentMode;
- (id)init;
- (id)initFromTimeBasedTransitionStream:(id)arg1 appLaunchBasedTransitionStream:(id)arg2 heuristicTransitionStream:(id)arg3 userFocusTransitionStream:(id)arg4;
- (id)sessionPublisherFromStartTime:(double)arg1;
- (id)transitionPublisherFromStartTime:(double)arg1;

@end
