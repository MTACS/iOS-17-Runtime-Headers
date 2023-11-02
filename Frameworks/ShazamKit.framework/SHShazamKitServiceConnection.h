
@interface SHShazamKitServiceConnection : NSObject <SHShazamKitService> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    SHShazamKitServiceConnectionProvider * _connectionProvider;
    SHShazamKitServiceConnectionClient * _shazamKitClient;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } connectionLock;
@property (nonatomic, readonly) SHShazamKitServiceConnectionProvider *connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SHShazamKitServiceConnectionClient *shazamKitClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;
- (void)attachDefaultConnectionHandlers;
- (id)connection;
- (struct os_unfair_lock_s { unsigned int x1; })connectionLock;
- (id)connectionProvider;
- (void)dealloc;
- (id)delegate;
- (id)initWithConnectionProvider:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (id /* block */)matcherDelegateErrorHandlerForSignature:(id)arg1;
- (void)mediaItemsForShazamIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareMatcherForRequestID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendEventSignal:(id)arg1;
- (void)setConnectionLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDelegate:(id)arg1;
- (id)shazamKitClient;
- (void)startRecognitionForRequest:(id)arg1;
- (void)stopRecognition;
- (void)stopRecognitionForRequestID:(id)arg1;
- (void)tearDownConnection;

@end
