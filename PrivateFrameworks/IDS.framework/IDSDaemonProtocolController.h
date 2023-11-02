
@interface IDSDaemonProtocolController : NSObject {
    NSXPCConnection * _connection;
    IDSGroupContextNotifyingObserver * _observer;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) <IDSGroupContextCacheMiddlewareDaemonProtocol> *groupContextCacheMiddleware;
@property (nonatomic, readonly) <IDSGroupContextDataSourceDaemonProtocol> *groupContextDataSource;
@property (nonatomic, retain) IDSGroupContextNotifyingObserver *observer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (id)groupContextCacheMiddleware;
- (id)groupContextDataSource;
- (id)init;
- (id)observer;
- (void)setConnection:(id)arg1;
- (void)setObserver:(id)arg1;

@end
