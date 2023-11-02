
@interface SBFDeviceBlockTimer : NSObject {
    <SBFBlockStatusProvider> * _blockStatusProvider;
    bool  _enabled;
    id /* block */  _handler;
    NSString * _primaryActionButtonText;
    NSString * _subtitleText;
    NSString * _timeoutText;
    NSTimer * _timer;
    NSString * _titleText;
    bool  _userRequestedEraseEnabled;
}

@property (setter=_setBlockStatusProvider:, nonatomic, retain) <SBFBlockStatusProvider> *blockStatusProvider;
@property (getter=_isEnabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *primaryActionButtonText;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *timeoutText;
@property (setter=_setTimer:, nonatomic, retain) NSTimer *timer;
@property (nonatomic, copy) NSString *titleText;
@property (getter=isUserRequestedEraseEnabled, nonatomic) bool userRequestedEraseEnabled;

- (void).cxx_destruct;
- (void)_clearTimer;
- (bool)_isEnabled;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (void)_setBlockStatusProvider:(id)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setTimer:(id)arg1;
- (id)blockStatusProvider;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithDeviceBlockStatusProvider:(id)arg1;
- (void)invalidate;
- (bool)isUserRequestedEraseEnabled;
- (id)primaryActionButtonText;
- (void)setHandler:(id /* block */)arg1;
- (void)setPrimaryActionButtonText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTimeoutText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUserRequestedEraseEnabled:(bool)arg1;
- (void)start;
- (id)subtitleText;
- (id)timeoutText;
- (id)timer;
- (id)titleText;

@end
