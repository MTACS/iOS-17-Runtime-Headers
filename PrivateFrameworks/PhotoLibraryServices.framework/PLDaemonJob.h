
@interface PLDaemonJob : NSObject <NSSecureCoding> {
    PLAssetsdClient * _assetsdClient;
    NSXPCConnection * _clientConnection;
    PLLibraryServicesManager * _libraryServicesManager;
    id /* block */  _replyHandler;
    unsigned long long  _signpostId;
    PLXPCTransaction * _transaction;
    NSObject<OS_xpc_object> * _xpcReply;
}

@property (nonatomic, readonly) PLAssetsdClient *assetsdClient;
@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (nonatomic, retain) PLLibraryServicesManager *libraryServicesManager;
@property (nonatomic, copy) id /* block */ replyHandler;
@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcReply;

+ (void)runDaemonSideWithXPCEvent:(id)arg1 libraryServicesManager:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)archiveXPCToDisk:(id)arg1;
- (id)assetsdClient;
- (id)clientConnection;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleReply;
- (id)init;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)initWithAssetsdClient:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)libraryServicesManager;
- (id)newDictionaryReplyForObject:(id)arg1;
- (id /* block */)replyHandler;
- (void)run;
- (void)runDaemonSide;
- (void)sendToAssetsd;
- (void)sendToAssetsdWithReply;
- (void)setClientConnection:(id)arg1;
- (void)setLibraryServicesManager:(id)arg1;
- (void)setReplyHandler:(id /* block */)arg1;
- (void)setXpcReply:(id)arg1;
- (bool)shouldArchiveXPCToDisk;
- (bool)shouldRunOnDaemonSerialQueue;
- (id)xpcReply;

@end
