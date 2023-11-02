
@interface UIKeyboardCameraRemoteViewController : _UIRemoteViewController <UIKeyboardCameraRemoteViewControllerHost> {
    <UIKeyboardCameraRemoteViewControllerHost> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCameraRemoteViewControllerHost> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
