
@protocol PXPeopleFlowViewController <NSObject>

@required

- (PXPeopleBootstrapContext *)bootstrapContext;
- (bool)wantsCancelButton;

@optional

- (<PXPeopleFlowViewControllerActionDelegate> *)actionDelegate;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setActionDelegate:(id <PXPeopleFlowViewControllerActionDelegate>)arg1;
- (bool)shouldConfirmAdvancement;
- (void)willTransitionIn;
- (void)willTransitionToNextInFlow;
- (void)willTransitionToPreviousInFlow;

@end
