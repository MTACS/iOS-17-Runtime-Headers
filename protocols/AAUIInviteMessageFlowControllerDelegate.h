
@protocol AAUIInviteMessageFlowControllerDelegate <NSObject>

@required

- (void)inviteMessageFlowDidFinish:(AAUIInviteMessageFlowController *)arg1;

@optional

- (void)inviteMessageCompleteSecondaryButtonTapped:(AAUIInviteMessageFlowController *)arg1;
- (void)inviteMessageFlowWasCancelled:(AAUIInviteMessageFlowController *)arg1;
- (void)inviteMessageWasSent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AAUIInviteMessageFlowController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
