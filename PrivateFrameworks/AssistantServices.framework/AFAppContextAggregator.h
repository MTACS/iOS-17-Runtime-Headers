
@interface AFAppContextAggregator : NSObject

- (void)aggregateContextForAppWithBundleIdentifier:(id)arg1 contextProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)aggregateContextForAppWithBundleIdentifier:(id)arg1 contextProvider:(id)arg2 deliveryHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)aggregateContextWithRawOutputForAppWithBundleIdentifier:(id)arg1 contextProvider:(id)arg2 deliveryHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
