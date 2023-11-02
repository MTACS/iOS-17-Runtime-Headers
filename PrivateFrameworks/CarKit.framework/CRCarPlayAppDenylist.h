
@interface CRCarPlayAppDenylist : NSObject {
    NSXPCConnection * _connection;
    NSSet * _denylistedBundleIDs;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSSet *denylistedBundleIDs;

- (void).cxx_destruct;
- (id)_denylistPreference;
- (void)_requestDenylistUpdate;
- (void)_setupConnection;
- (id)connection;
- (bool)containsBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)denylistedBundleIDs;
- (id)init;
- (void)setConnection:(id)arg1;
- (void)setDenylistedBundleIDs:(id)arg1;

@end
