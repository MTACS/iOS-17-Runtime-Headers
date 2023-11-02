
@interface IMMultiplexedDaemonConnection : NSObject <IMDaemonMultiplexedConnectionManaging> {
    void capabilities;
    void context;
    void label;
    void onDeinit;
    void onInvalidate;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) NSDictionary *context;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) <IMDaemonProtocol> *remoteProxy;
@property (nonatomic, readonly) <IMDaemonProtocol> *synchronousRemoteProxy;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (void)connectWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)context;
- (void)dealloc;
- (id)init;
- (id)initWithLabel:(id)arg1 capabilities:(unsigned long long)arg2 context:(id)arg3 onInvalidate:(id /* block */)arg4 onDealloc:(id /* block */)arg5;
- (void)invalidate;
- (id)label;
- (id)remoteProxy;
- (id)synchronousRemoteProxy;
- (void)waitForSetup;

@end
