
@interface AVCScreenCapturePicker : NSObject {
    AVConferenceXPCClient * _connection;
    <AVCScreenCapturePickerDelegate> * _delegate;
    bool  _excludeCurrentApplication;
    bool  _isValid;
    NSObject<OS_dispatch_queue> * _screenCapturePickerQueue;
}

@property (nonatomic) bool excludeCurrentApplication;

- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (bool)excludeCurrentApplication;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)invalidate;
- (void)registerBlocksForNotifications;
- (void)setExcludeCurrentApplication:(bool)arg1;
- (void)show;

@end
