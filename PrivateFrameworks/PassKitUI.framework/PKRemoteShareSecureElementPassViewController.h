
@interface PKRemoteShareSecureElementPassViewController : UIViewController <PKClientShareSecureElementPassViewControllerDelegate, PKRemoteShareSecureElementPassViewControllerProtocol> {
    PKPassShareInitiationNavigationController * _shareNavigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_setRootViewController:(id)arg1;
- (void)didCreateShareURL:(id)arg1 activationCode:(id)arg2 error:(id)arg3;
- (void)didFinishShareWithDidUserShare:(bool)arg1 error:(id)arg2;
- (void)loadView;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setPass:(id)arg1 environment:(unsigned long long)arg2 isFromPeopleScreen:(bool)arg3 completion:(id /* block */)arg4;
- (void)setShouldPromptUserToShare:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;

@end
