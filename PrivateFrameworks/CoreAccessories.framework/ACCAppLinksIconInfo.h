
@interface ACCAppLinksIconInfo : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)getIconDataForBundleID:(id)arg1 forIconSize:(double)arg2 withReply:(id /* block */)arg3;
- (id)init;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
