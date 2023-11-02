
@interface SUICAutoDismissalStrategy : NSObject {
    long long  _autoDismissalReason;
    <SUICAutoDismissalStrategyDelegate> * _delegate;
    bool  _deviceSupportsFaceDetection;
    bool  _deviceSupportsRaiseGestureDetection;
    double  _extendedIdleTimeout;
    double  _idleTimeInterval;
    double  _idleTimeout;
    NSNumber * _lastShouldDismissValue;
    long long  _latestDeviceMotionEvent;
    long long  _latestFaceAwarenessEvent;
    double  _minimumIdleTimeInterval;
    bool  _shouldDismiss;
    bool  _userInteractedWithTouchIDSensor;
    bool  _userInteractedWithTouchScreen;
    bool  _videoPlaying;
    double  _viewRequiringExtendedTimeoutStartTime;
    bool  _viewRequiringExtendedTimeoutVisible;
}

@property (nonatomic) long long autoDismissalReason;
@property (nonatomic) <SUICAutoDismissalStrategyDelegate> *delegate;
@property (nonatomic, readonly) bool deviceSupportsFaceDetection;
@property (nonatomic, readonly) bool deviceSupportsRaiseGestureDetection;
@property (nonatomic, readonly) double extendedIdleTimeout;
@property (nonatomic, readonly) double idleTimeInterval;
@property (nonatomic, readonly) double idleTimeout;
@property (nonatomic) long long latestDeviceMotionEvent;
@property (nonatomic) long long latestFaceAwarenessEvent;
@property (nonatomic) double minimumIdleTimeInterval;
@property (nonatomic, readonly) bool shouldDismiss;
@property (nonatomic) bool userInteractedWithTouchIDSensor;
@property (nonatomic) bool userInteractedWithTouchScreen;
@property (getter=isVideoPlaying, nonatomic) bool videoPlaying;
@property (nonatomic, readonly) double viewRequiringExtendedTimeoutStartTime;
@property (getter=isViewRequiringExtendedTimeoutVisible, nonatomic) bool viewRequiringExtendedTimeoutVisible;

- (void).cxx_destruct;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(bool)arg1;
- (long long)autoDismissalReason;
- (id)delegate;
- (bool)deviceSupportsFaceDetection;
- (bool)deviceSupportsRaiseGestureDetection;
- (double)extendedIdleTimeout;
- (double)idleTimeInterval;
- (double)idleTimeout;
- (id)initWithIdleTimeout:(double)arg1 extendedIdleTimeout:(double)arg2 deviceSupportsFaceDetection:(bool)arg3 deviceSupportsRaiseGestureDetection:(bool)arg4;
- (bool)isVideoPlaying;
- (bool)isViewRequiringExtendedTimeoutVisible;
- (long long)latestDeviceMotionEvent;
- (long long)latestFaceAwarenessEvent;
- (double)minimumIdleTimeInterval;
- (void)setAutoDismissalReason:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLatestDeviceMotionEvent:(long long)arg1;
- (void)setLatestFaceAwarenessEvent:(long long)arg1;
- (void)setMinimumIdleTimeInterval:(double)arg1;
- (void)setUserInteractedWithTouchIDSensor:(bool)arg1;
- (void)setUserInteractedWithTouchScreen:(bool)arg1;
- (void)setVideoPlaying:(bool)arg1;
- (void)setViewRequiringExtendedTimeoutStartTime:(double)arg1;
- (void)setViewRequiringExtendedTimeoutVisible:(bool)arg1;
- (bool)shouldDismiss;
- (bool)userInteractedWithTouchIDSensor;
- (bool)userInteractedWithTouchScreen;
- (double)viewRequiringExtendedTimeoutStartTime;

@end
