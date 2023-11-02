
@protocol DBWorkspaceStateChangeSessionDelegate <NSObject>

@required

- (void)session:(id <DBWorkspaceStateChangeSession>)arg1 handleStateChangeRequest:(DBWorkspaceStateChangeRequest *)arg2;
- (unsigned long long)session:(id <DBWorkspaceStateChangeSession>)arg1 policyForRequest:(DBWorkspaceStateChangeRequest *)arg2;

@end
