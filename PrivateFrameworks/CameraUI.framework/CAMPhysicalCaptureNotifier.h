
@interface CAMPhysicalCaptureNotifier : NSObject {
    <BSInvalidatable> * __cameraButtonRequest;
    UIView * __view;
    long long  __volumeDownButtonState;
    long long  __volumeUpButtonState;
    <CAMPhysicalCaptureNotifierDelegate> * _delegate;
    bool  _enabled;
    long long  _state;
}

@property (nonatomic, retain) <BSInvalidatable> *_cameraButtonRequest;
@property (nonatomic, readonly) UIView *_view;
@property (setter=_setVolumeDownButtonState:, nonatomic) long long _volumeDownButtonState;
@property (setter=_setVolumeUpButtonState:, nonatomic) long long _volumeUpButtonState;
@property (nonatomic) <CAMPhysicalCaptureNotifierDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (setter=_setState:, nonatomic) long long state;

- (void).cxx_destruct;
- (id)_cameraButtonRequest;
- (void)_handleVolumeDownButtonDownNotification:(id)arg1;
- (void)_handleVolumeDownButtonUpNotification:(id)arg1;
- (void)_handleVolumeUpButtonDownNotification:(id)arg1;
- (void)_handleVolumeUpButtonUpNotification:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_setVolumeDownButtonState:(long long)arg1;
- (void)_setVolumeUpButtonState:(long long)arg1;
- (void)_updateCaptureButtonNotifications;
- (void)_updateStateAndNotifyDelegateIfNeededForButton:(long long)arg1;
- (id)_view;
- (long long)_volumeDownButtonState;
- (long long)_volumeUpButtonState;
- (void)dealloc;
- (id)delegate;
- (id)initWithView:(id)arg1;
- (bool)isEnabled;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)set_cameraButtonRequest:(id)arg1;
- (long long)state;

@end
