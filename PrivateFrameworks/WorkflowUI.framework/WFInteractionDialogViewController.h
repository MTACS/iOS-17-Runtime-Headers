
@interface WFInteractionDialogViewController : WFCompactDialogViewController <WFInteractionCardViewControllerDelegate> {
    WFInteractionCardViewController * _cardViewController;
    WFCompactDialogAction * _confirmAction;
    WFDialogRequest * _followUpRequest;
    WFInteractionCardProgressViewController * _progressViewController;
}

@property (nonatomic, retain) WFInteractionCardViewController *cardViewController;
@property (nonatomic, retain) WFCompactDialogAction *confirmAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFDialogRequest *followUpRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFInteractionCardProgressViewController *progressViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canHandleFollowUpRequest:(id)arg1;
- (id)cardViewController;
- (id)confirmAction;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (id)followUpRequest;
- (void)handleFollowUpRequest:(id)arg1;
- (void)interactionCardViewControllerDidInvalidateSize:(id)arg1;
- (void)interactionCardViewControllerDidLoad:(id)arg1;
- (void)interactionCardViewControllerDidRequestCancel:(id)arg1;
- (void)interactionCardViewControllerDidRequestPunchout:(id)arg1;
- (void)loadView;
- (id)progressViewController;
- (void)setCardViewController:(id)arg1;
- (void)setConfirmAction:(id)arg1;
- (void)setFollowUpRequest:(id)arg1;
- (void)setProgressViewController:(id)arg1;
- (bool)showCheckmarkOnAppear;
- (void)showProgressWithEvent:(unsigned long long)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
