
@interface ICDocCamRenamePrompt : NSObject <UITextFieldDelegate> {
    NSString * _existingTitle;
    UIAlertAction * _saveAction;
    ICDocCamRenamePrompt * _strongSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *existingTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIAlertAction *saveAction;
@property (nonatomic, retain) ICDocCamRenamePrompt *strongSelf;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enableAction:(id)arg1 withString:(id)arg2;
- (id)existingTitle;
- (id)initWithExistingTitle:(id)arg1;
- (bool)isTitleValid:(id)arg1 error:(out id*)arg2;
- (id)saveAction;
- (void)setExistingTitle:(id)arg1;
- (void)setSaveAction:(id)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)showFromViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)showSingleButtonAlertFromViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3;
- (id)stringByScrubbingStringForCollectionName:(id)arg1;
- (id)strongSelf;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldChanged:(id)arg1;

@end
