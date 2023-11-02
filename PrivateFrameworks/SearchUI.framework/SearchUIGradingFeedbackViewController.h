
@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate> {
    <SFFeedbackListener> * _feedbackDelegate;
    SFSearchResult * _result;
    UIViewController * _viewControllerForPresenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SFFeedbackListener> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFSearchResult *result;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewControllerForPresenting;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)addActionForGrade:(unsigned long long)arg1 title:(id)arg2;
- (id)feedbackDelegate;
- (id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)result;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setViewControllerForPresenting:(id)arg1;
- (id)viewControllerForPresenting;
- (void)viewWillAppear:(bool)arg1;

@end
