
@interface TBPersistenceRemoteStoreServer : NSObject {
    NSURL * _modelURL;
    NSDictionary * _serverOptions;
    NSURL * _storeURL;
    NSXPCStoreServer * _xpcStoreServer;
}

@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, retain) NSDictionary *serverOptions;
@property (nonatomic, retain) NSURL *storeURL;
@property (nonatomic, retain) NSXPCStoreServer *xpcStoreServer;

- (void).cxx_destruct;
- (id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3;
- (id)modelURL;
- (id)serverOptions;
- (void)setModelURL:(id)arg1;
- (void)setServerOptions:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setXpcStoreServer:(id)arg1;
- (void)startListening;
- (id)storeURL;
- (id)xpcStoreServer;

@end
