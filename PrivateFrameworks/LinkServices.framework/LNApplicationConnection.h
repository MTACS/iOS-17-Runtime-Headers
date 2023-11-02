
@interface LNApplicationConnection : LNConnection

- (id)appBundleIdentifier;
- (void)handleConnectionActionResponse:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 error:(id*)arg3;
- (bool)shouldRefreshWithOptions:(id)arg1;

@end
