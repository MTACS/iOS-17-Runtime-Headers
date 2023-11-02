
@interface STWebHistory : NSObject {
    NSString * _bundleIdentifier;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)deleteAllHistory;
- (void)deleteHistoryDuringInterval:(id)arg1;
- (void)deleteHistoryForURL:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)xpcConnection;

@end
