
@protocol FBSServiceFacilityClientHandle <NSObject>

@required

- (<FBSServiceFacilityClientContext> *)context;
- (NSString *)facilityID;
- (bool)isSuspended;
- (int)pid;
- (BSProcessHandle *)processHandle;
- (RBSProcessIdentity *)processIdentity;
- (void)setContext:(id <FBSServiceFacilityClientContext>)arg1;

@end
