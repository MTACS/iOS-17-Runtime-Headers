
@interface PKPayLaterMoreInformationViewController : PKPayLaterSetupViewController <PKPayLaterSectionControllerDelegate> {
    PKPayLaterMoreInformationSectionController * _sectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSetupFlowController:(id)arg1;
- (void)nextButtonTapped;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
