
@interface UIKeyboardCameraViewController : UIViewController <UIKeyboardCameraRemoteViewControllerHost> {
    <UIKeyboardCameraViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    UIKeyboardCameraRemoteViewController * _remoteViewController;
    NSString * _textContentType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIKeyboardCameraRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic) NSString *textContentType;

+ (void)_updateIsCameraRestricted;
+ (bool)isCameraRestricted;
+ (bool)isEnabled;
+ (bool)isLiveTextEnabled;
+ (bool)isSupportedByDevice;

- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (id)extension;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)arg1;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (id)remoteViewController;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setTextContentType:(id)arg1;
- (id)textContentType;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
