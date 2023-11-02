
@protocol DBWorkspaceOwner <DBWorkspaceStateChangeSessionDelegate>

@required

- (void)workspace:(DBWorkspace *)arg1 didBeginStateChangeSession:(id <DBWorkspaceStateChangeSession>)arg2;
- (void)workspace:(DBWorkspace *)arg1 didEndStateChangeSession:(id <DBWorkspaceStateChangeSession>)arg2;

@end
