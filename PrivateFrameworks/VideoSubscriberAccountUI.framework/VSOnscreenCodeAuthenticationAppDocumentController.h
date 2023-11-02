
@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSOnscreenCodeViewModelDelegate> {
    IKViewElement * _buttonLockupViewElement;
}

@property (nonatomic, retain) IKViewElement *buttonLockupViewElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newViewModel;
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;
- (bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id*)arg2;
- (bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;
- (bool)_updateViewModel:(id)arg1 error:(id*)arg2;
- (id)buttonLockupViewElement;
- (void)onscreenCodeViewModelButtonLockupPressed;
- (void)setButtonLockupViewElement:(id)arg1;

@end
