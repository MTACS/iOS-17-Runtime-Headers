
@interface UIKeyboardHiddenViewController_Autofill : UIKeyboardHiddenViewController <_SFAppAutoFillPasswordViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)customInfoFromCredential:(id)arg1;
- (bool)isValidedString:(id)arg1;
- (void)passwordViewController:(id)arg1 selectedCredential:(id)arg2;
- (void)presentViewController:(bool)arg1;
- (void)setAutofillVC:(id)arg1;

@end
