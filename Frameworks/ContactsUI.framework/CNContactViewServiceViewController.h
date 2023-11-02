
@interface CNContactViewServiceViewController : UIViewController <CNContactViewControllerPPTDelegate, CNContactViewHostProtocol> {
    CNContactContentViewController * _contactContentVC;
}

@property (nonatomic, retain) CNContactContentViewController *contactContentVC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)classForContentViewControllerImpl;

- (void).cxx_destruct;
- (id)contactContentVC;
- (void)didChangePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (id)init;
- (void)isPresentingEditingController:(bool)arg1;
- (void)isPresentingFullscreen:(bool)arg1;
- (void)presentCancelConfirmationAlert;
- (void)setContactContentVC:(id)arg1;
- (bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)updateEditing:(bool)arg1 doneButtonEnabled:(bool)arg2 doneButtonText:(id)arg3;
- (void)viewDidAppear;
- (void)viewDidAppearForContactViewController:(id)arg1;
- (void)viewDidLoad;

@end
