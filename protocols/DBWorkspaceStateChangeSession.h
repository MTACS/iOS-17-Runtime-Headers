
@protocol DBWorkspaceStateChangeSession <NSObject>

@required

- (void)invalidate;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)setState:(id <DBWorkspaceState>)arg1;

@end
