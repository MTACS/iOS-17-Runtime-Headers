
@interface NSXPCStoreServer : NSObject <NSXPCListenerDelegate, NSXPCServerProtocol> {
    NSMutableDictionary * _cacheIDtoCoordinatorMap;
    NSMapTable * _connectionToCoordinatorMap;
    id  _delegate;
    NSArray * _entitlementNames;
    NSXPCListener * _listener;
    NSManagedObjectModel * _model;
    NSURL * _modelURL;
    NSXPCStoreServerRequestHandlingPolicy * _policy;
    NSDictionary * _storeOptions;
    NSURL * _storeURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NSXPCStoreServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)debugDefault;
+ (void)initialize;

- (void)dealloc;
- (id)delegate;
- (id)errorHandlingDelegate;
- (oneway void)handleRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)initForStoreWithURL:(id)arg1 usingModel:(id)arg2 options:(id)arg3 policy:(id)arg4;
- (id)initForStoreWithURL:(id)arg1 usingModelAtURL:(id)arg2 options:(id)arg3 policy:(id)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setErrorHandlingDelegate:(id)arg1;
- (void)startListening;

@end
