
@interface WLKFederatedAnalyticsReporter : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)defaultFederatedAnalyticsReporter;

- (void).cxx_destruct;
- (void)_invalidationHandler;
- (id)connection;
- (void)reportPunchout:(id)arg1;
- (void)setConnection:(id)arg1;

@end
