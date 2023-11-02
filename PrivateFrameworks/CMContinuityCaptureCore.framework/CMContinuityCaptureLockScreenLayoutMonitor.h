
@interface CMContinuityCaptureLockScreenLayoutMonitor : NSObject {
    <CMContinuityCaptureLockScreenLayoutMonitorDelegate> * _delegate;
    bool  _firstShieldLayoutReceived;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    bool  _lockScreenInLayout;
    bool  _shieldFrontMostInLayout;
}

@property (nonatomic) <CMContinuityCaptureLockScreenLayoutMonitorDelegate> *delegate;
@property (nonatomic, readonly) bool lockScreenInLayout;

- (void).cxx_destruct;
- (void)_handleLayout:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)lockScreenInLayout;
- (void)setDelegate:(id)arg1;

@end
