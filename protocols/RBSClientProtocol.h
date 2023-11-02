
@protocol RBSClientProtocol

@required

- (oneway void)async_assertionWillInvalidate:(RBSAssertionIdentifier *)arg1;
- (oneway void)async_assertionsDidInvalidate:(NSSet *)arg1 withError:(NSError *)arg2;
- (oneway void)async_didChangeInheritances:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: RBSInheritanceChangeSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)async_observedPreventLaunchPredicatesUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)async_observedProcessExitEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)async_observedProcessStatesDidChange:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)async_processDidExit:(RBSProcessIdentifier *)arg1 withContext:(RBSProcessExitContext *)arg2;
- (oneway void)async_willExpireAssertionsSoon;

@end
