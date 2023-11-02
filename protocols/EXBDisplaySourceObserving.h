
@protocol EXBDisplaySourceObserving <NSObject>

@optional

- (void)displaySource:(id <EXBDisplaySourcing>)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displaySource:(id <EXBDisplaySourcing>)arg1 didUpdateIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displaySource:(id <EXBDisplaySourcing>)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;

@end
