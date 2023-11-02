
@protocol PBFRuntimeAssertionProviding <NSObject>

@required

- (RBSAssertion *)acquirePosterUpdateMemoryAssertionForReason:(NSString *)arg1 target:(RBSTarget *)arg2 auditToken:(BSAuditToken *)arg3 posterProviderBundleIdentifier:(NSString *)arg4;
- (RBSAssertion *)acquirePosterUpdateRuntimeAssertionForReason:(NSString *)arg1 target:(RBSTarget *)arg2;
- (RBSAssertion *)acquirePrewarmRuntimeAssertionForReason:(void *)arg1 target:(void *)arg2 invalidationHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, RBSTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
