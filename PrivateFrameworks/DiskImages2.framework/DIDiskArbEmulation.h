
@interface DIDiskArbEmulation : DIDiskArb

- (void)addDisappearedCallbackWithMountPoint:(id)arg1 shadowMountPoints:(id)arg2 delegate:(id)arg3;
- (id)copyDescriptionWithBSDName:(id)arg1;
- (bool)ejectWithBSDName:(id)arg1 error:(id*)arg2;
- (bool)unmountWithMountPoint:(id)arg1 error:(id*)arg2;
- (bool)waitForDAIdleWithError:(id*)arg1;

@end
