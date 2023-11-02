
@interface HAENotificationCenterClient : NSObject <HAENotificationCenterDelegate> {
    NSString * bundleID;
    NSXPCConnection * connection;
    bool  connectionDidInvalidate;
}

@property (nonatomic, retain) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addHAENotificationEvent:(id)arg1;
- (id)bundleID;
- (id)initWithBundleID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (id)setupConnection;

@end
