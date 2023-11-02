
@protocol DBWorkspaceObserver <NSObject>

@required

- (void)workspace:(DBWorkspace *)arg1 stateDidChangeFromState:(id <DBWorkspaceState>)arg2 toState:(id <DBWorkspaceState>)arg3;

@end
