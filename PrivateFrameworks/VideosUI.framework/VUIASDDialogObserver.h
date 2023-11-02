
@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver> {
    UIViewController * _presenterViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presenterViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)presenterViewController;
- (void)setPresenterViewController:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
