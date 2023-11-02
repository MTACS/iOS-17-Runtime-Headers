
@protocol LBAttendingStatesService <NSObject>

@required

- (void)dismissAttending;
- (void)requestDismissed;
- (void)siriDidPrompt;
- (void)siriDidPromptWithRootRequestId:(NSString *)arg1;
- (void)siriPromptWillStart;
- (void)siriPromptWillStartWithRootRequestId:(NSString *)arg1;
- (void)startUpdateStates;

@end
