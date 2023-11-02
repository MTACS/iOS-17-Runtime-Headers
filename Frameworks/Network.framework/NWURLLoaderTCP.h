
@interface NWURLLoaderTCP : NSObject <NWURLLoader> {
    bool  _TLS;
    bool  _addedTLS;
    bool  _cancelled;
    <NWURLLoaderClient> * _client;
    NWURLSessionTaskConfiguration * _configuration;
    NSObject<OS_nw_connection> * _connection;
    NSError * _error;
    NSString * _hostname;
    NSMutableArray * _pendingWork;
    long long  _port;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _ready;
}

@property (nonatomic, readonly) bool allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_sec_trust> *peerTrust;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_nw_connection> *underlyingConnection;

- (void).cxx_destruct;
- (bool)allowsWrite;
- (id)peerTrust;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)readResponse:(id /* block */)arg1;
- (void)responseIsMixed;
- (void)start:(id /* block */)arg1;
- (void)stop;
- (id)underlyingConnection;
- (void)updateClient:(id)arg1;
- (void)writeData:(id)arg1 complete:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
