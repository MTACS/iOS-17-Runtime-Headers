
@interface SearchUIContactPickerViewController : CNContactPickerViewController <CNContactPickerDelegate, CNContactViewControllerDelegate> {
    CNContact * _contact;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contact;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)initWithContact:(id)arg1;
- (void)setContact:(id)arg1;

@end
