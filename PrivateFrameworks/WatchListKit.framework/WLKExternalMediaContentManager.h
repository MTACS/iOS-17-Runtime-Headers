
@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection * _connection;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_connection;
- (void)_deletePlaybackActivityWithIdentifier:(id)arg1 bundleID:(id)arg2;
- (id)_init;
- (id)_proxy;
- (void)deletePlaybackActivityWithIdentifier:(id)arg1;
- (id)init;

@end
