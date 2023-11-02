
@protocol FBSProcessIdentity <FBSProcess>

@required

- (BSProcessHandle *)handle;
- (RBSProcessIdentity *)identity;
- (BSMachPortTaskNameRight *)taskNameRight;

@end
