
@protocol RBRequestManaging

@required

- (void)executeLaunchRequest:(void *)arg1 euid:(void *)arg2 requestor:(void *)arg3 entitlements:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: RBSLaunchRequest *, unsigned int, RBProcess *, <RBEntitlementPossessing> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RBSProcessHandle *, RBSAssertionIdentifier *, NSError *, void*

@end
