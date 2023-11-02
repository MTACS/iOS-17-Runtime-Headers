
@interface CLSRemoteViewController : _UIRemoteViewController <CLSRemoteViewControllerInterface> {
    UIWindow * _previousKeyWindow;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIWindow *previousKeyWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (id)exportedInterface;
+ (id)instantiateViewControllerWithInputItems:(id)arg1 identifier:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentModallyInNewWindowWithCompletion:(id /* block */)arg1;
- (id)previousKeyWindow;
- (void)setPreviousKeyWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)viewDidInvalidateIntrinsicContentSize;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)window;

@end
