
@interface CKVisualIdentityPickerViewController : CNVisualIdentityPickerViewController <CNVisualIdentityPickerViewControllerDelegate> {
    CKConversation * _conversation;
    <CKVisualIdentityPickerViewControllerDelegate> * _presentationDelegate;
}

@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) <CKVisualIdentityPickerViewControllerDelegate> *presentationDelegate;

+ (id)imagePickerForContact:(id)arg1;
+ (id)imagePickerForGroupIdentity:(id)arg1 withConversation:(id)arg2;

- (void).cxx_destruct;
- (id)conversation;
- (id)presentationDelegate;
- (void)setConversation:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)visualIdentityPicker:(id)arg1 didUpdatePhotoForVisualIdentity:(id)arg2 withContactImage:(id)arg3;
- (void)visualIdentityPickerDidCancel:(id)arg1;

@end
