
@interface MPVolumeSettingsController : UIViewController {
    UIAlertController * _alertController;
    NSString * _audioCategory;
    UIWindow * _hostingWindow;
    UIWindow * _previousWindow;
}

@property (nonatomic) UIWindow *hostingWindow;
@property (nonatomic) UIWindow *previousWindow;

- (void).cxx_destruct;
- (void)_flip;
- (void)_keyWindowDidChange:(id)arg1;
- (void)dealloc;
- (void)dismissAlertController;
- (id)hostingWindow;
- (id)initWithAudioCategory:(id)arg1;
- (void)presentAlertControllerInWindow:(id)arg1;
- (id)previousWindow;
- (void)setHostingWindow:(id)arg1;
- (void)setPreviousWindow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
