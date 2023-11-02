
@interface WFSelectContactsActionUIKitUserInterface : WFEmbeddableActionUserInterface <CNContactPickerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectContactsActionUserInterface> {
    id /* block */  _completionHandler;
    NSArray * _contactProperties;
    bool  _selectMultiple;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *contactProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool selectMultiple;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperties:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactProperties;
- (void)finishWithContacts:(id)arg1 error:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)selectMultiple;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContactProperties:(id)arg1;
- (void)setSelectMultiple:(bool)arg1;
- (void)showWithProperties:(id)arg1 selectMultiple:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
