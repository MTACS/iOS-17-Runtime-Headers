
@protocol AEPolicyActivation <AEPolicyAction>

@required

- (void)activateWithScratchpad:(void *)arg1 invalidationHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: <AEPolicyWriteOnlyScratchpad><AEPersistable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, <AEPolicyDeactivation> *, NSError *, void*
- (<AEPolicyDeactivation> *)deactivationForScratchpad:(id <AEPolicyReadOnlyScratchpad>)arg1;

@end
