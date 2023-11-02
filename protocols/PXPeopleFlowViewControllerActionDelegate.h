
@protocol PXPeopleFlowViewControllerActionDelegate <NSObject>

@required

- (void)requestAdvanceToNextInFlow;
- (void)requestCancel;
- (void)requestDone;
- (void)setAdvanceButtonEnabled:(bool)arg1;

@end
