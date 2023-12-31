
@interface CNContactUpdateExistingContactAction : CNContactAction <CNContactViewControllerDelegate> {
    CNContact * _existingContact;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContact *existingContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)existingContact;
- (void)performActionWithSender:(id)arg1;
- (void)setExistingContact:(id)arg1;

@end
