
@interface SYDocumentWorkflowsClient : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;

+ (id)_createUnableToPerformRequestErrorWithCode:(long long)arg1;
+ (bool)_verifyFeatureFlagWithError:(id*)arg1;

- (void).cxx_destruct;
- (void)_createConnectionIfNecessary;
- (void)_dispatchRequestWithCompletion:(id /* block */)arg1;
- (void)_invalidateConnection;
- (void)canPerformRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)canPerformRequest:(id)arg1 withError:(id*)arg2;
- (id)connection;
- (void)dealloc;
- (void)fetchAttributesForDocumentsWithIndexKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUserActivityForDocumentIndexKey:(id)arg1 completion:(id /* block */)arg2;
- (void)hasLastModifiedDocumentForFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)hasLastModifiedDocumentForFileWithDocumentAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)hasOriginalDocumentForFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)hasOriginalDocumentForFileWithDocumentAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)openLastModifiedDocumentForFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)openLastModifiedDocumentForFileWithDocumentAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)openOriginalDocumentForFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)openOriginalDocumentForFileWithDocumentAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)performRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)performRequest:(id)arg1 withErrorHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)processingQueue;
- (void)saveUserActivity:(id)arg1 forDocumentIndexKey:(id)arg2 sourceBundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)setConnection:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)unlinkDocumentsWithRelatedUniqueidentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)updateLinkedDocumentsWithCompletion:(id /* block */)arg1;

@end
