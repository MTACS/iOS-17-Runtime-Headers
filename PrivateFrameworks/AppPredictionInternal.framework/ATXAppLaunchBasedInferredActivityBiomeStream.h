
@interface ATXAppLaunchBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    ATXAppLaunchInferredModeSessionBiomeStream * _modeSessionStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInferredModeSessionStream:(id)arg1;
- (id)sessionPublisherFromStartTime:(double)arg1;
- (id)transitionPublisherFromStartTime:(double)arg1;

@end
