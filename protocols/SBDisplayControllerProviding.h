
@protocol SBDisplayControllerProviding <NSObject>

@required

- (SBDisplayControllerInfo *)displayControllerInfoForConnectingDisplay:(FBSDisplayIdentity *)arg1 configuration:(FBSDisplayConfiguration *)arg2;

@end
