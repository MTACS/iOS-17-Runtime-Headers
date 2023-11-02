
@interface CSAddParticipantsViewController : UIViewController <CNContactPickerDelegate, CSAddParticipantsPublicController> {
    CSAddressingViewModel * _addressingViewModel;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    NSArray * _collaborationOptionsGroups;
    CKContainerSetupInfo * _containerSetupInfo;
    <CSAddParticipantsViewControllerDelegate> * _delegate;
    NSURL * _fileURL;
    CKShare * _share;
}

@property (nonatomic, retain) CSAddressingViewModel *addressingViewModel;
@property (nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic, retain) NSArray *collaborationOptionsGroups;
@property (nonatomic, retain) CKContainerSetupInfo *containerSetupInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAddParticipantsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKShare *share;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addressingViewModel;
- (id)childViewController;
- (id)collaborationOptionsGroups;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)containerSetupInfo;
- (id)delegate;
- (void)dismissViewControllerWithError:(id)arg1 shareURL:(id)arg2 ckShare:(id)arg3;
- (void)embedViewController:(id)arg1;
- (id)fileURL;
- (id)initWithCKShare:(id)arg1 containerSetupInfo:(id)arg2 fileURL:(id)arg3 collaborationOptionsGroups:(id)arg4 headerImageData:(id)arg5 headerTitle:(id)arg6 loadingText:(id)arg7 supplementaryText:(id)arg8 primaryButtonText:(id)arg9 secondaryButtonText:(id)arg10;
- (void)setAddressingViewModel:(id)arg1;
- (void)setChildViewController:(id)arg1;
- (void)setCollaborationOptionsGroups:(id)arg1;
- (void)setContainerSetupInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;
- (void)showContactPickerFromSourceRect:(id)arg1;
- (void)viewDidLoad;

@end
