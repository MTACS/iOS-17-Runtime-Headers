
@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate, EKUIManagedViewController> {
    <EKShareePickerViewControllerDelegate> * _delegate;
    EKCalendarShareePicker * _picker;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKShareePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *sharees;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_createRecipientFromSharee:(id)arg1;
- (id)_createShareeFromRecipient:(id)arg1;
- (id)_recipientFromSharee:(id)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (void)add;
- (bool)canManagePresentationStyle;
- (void)cancel;
- (id)delegate;
- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(id)arg3;
- (unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForAddress:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calendar:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (void)viewDidLoad;
- (bool)wantsManagement;

@end
