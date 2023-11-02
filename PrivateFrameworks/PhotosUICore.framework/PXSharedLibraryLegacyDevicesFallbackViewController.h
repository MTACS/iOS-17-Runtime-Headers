
@interface PXSharedLibraryLegacyDevicesFallbackViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _devices;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantViewControllerDelegate;
- (void)continueButtonTapped:(id)arg1;
- (id)initWithDevices:(id)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
