
@interface ICQNDMLiftUIPresenterDelegate : NSObject <ICQLiftUIPresenterDelegate> {
    UIViewController * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)arg1;
- (void)liftUIPresenter:(id)arg1 didLoadWithSuccess:(bool)arg2 error:(id)arg3;
- (void)liftUIPresenter:(id)arg1 performAction:(long long)arg2 parameters:(id)arg3 completion:(id /* block */)arg4;
- (void)liftUIPresenterDidCancel:(id)arg1;
- (void)liftUIPresenterDidComplete:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;

@end
