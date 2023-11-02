
@protocol SBDisplayManagerObserver <NSObject>

@optional

- (void)displayManager:(SBDisplayManager *)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displayManager:(SBDisplayManager *)arg1 didConnectToRootDisplay:(FBSDisplayIdentity *)arg2;
- (void)displayManager:(SBDisplayManager *)arg1 didDisconnectIdentity:(FBSDisplayIdentity *)arg2;
- (void)displayManager:(SBDisplayManager *)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;

@end
