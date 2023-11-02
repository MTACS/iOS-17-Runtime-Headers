
@interface SASUIDeviceScreenEngagementController : NSObject {
    NSObject<OS_dispatch_queue> * _attentionAwarenessHandlerQueue;
    NSMutableDictionary * _attentionDetectionStatuses;
    AWAttentionAwarenessClient * _buttonPressAwarenessClient;
    <SASUIDeviceScreenEngagementControllerDelegate> * _delegate;
    AWAttentionAwarenessClient * _touchAttentionAwarenessClient;
    SASUIUserEngagementProviderFactory * _userAttentionSignalProviderFactory;
}

@property (nonatomic) <SASUIDeviceScreenEngagementControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_detectionStartedForType:(unsigned long long)arg1;
- (void)_handleButtonPressAttentionEvent:(id)arg1;
- (void)_handleTouchAttentionEvent:(id)arg1;
- (void)_setDetectionStarted:(bool)arg1 forType:(unsigned long long)arg2;
- (bool)_startButtonPressAttentionAwarenessClient:(id*)arg1;
- (bool)_startTouchAttentionAwarenessClient:(id*)arg1;
- (bool)_stopButtonPressAttentionAwarenessClient:(id*)arg1;
- (bool)_stopTouchAttentionAwarenessClient:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithSamplingInterval:(double)arg1 attentionLostTimeout:(double)arg2;
- (id)initWithSignalProviderFactory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)startIfNeeded:(id*)arg1;
- (void)startIfNeededForTypes:(unsigned long long)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)startIfNeededForTypes:(unsigned long long)arg1 error:(id*)arg2;
- (bool)stopIfNeeded:(id*)arg1;
- (bool)stopIfNeededForTypes:(unsigned long long)arg1 error:(id*)arg2;

@end
