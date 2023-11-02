
@interface DESDodMLServer : NSObject <NSURLSessionDelegate, PARSessionDelegate> {
    NSURL * _baseURL;
    NSString * _localeIdentifier;
    PARSession * _parSession;
    NSURL * _postbackBaseURL;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _recipeCountLimit;
    NSURLSession * _session;
    double  _timeLimit;
}

@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 relativePaths:(id)arg4 completion:(id /* block */)arg5;
- (id)_removeLocalOnlyKeys:(id)arg1;
- (id)_requestObjectWithResult:(id)arg1 recipe:(id)arg2 error:(id)arg3;
- (void)_runJSONGETRequestWithPath:(id)arg1 completion:(id /* block */)arg2;
- (void)_runJSONOrMultipartPOSTRequest:(id)arg1 path:(id)arg2 uploadTransport:(id)arg3 completion:(id /* block */)arg4;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 uploadTransport:(id)arg3 completion:(id /* block */)arg4;
- (void)_runPOSTRequestWithHTTPBody:(id)arg1 contentType:(id)arg2 URL:(id)arg3 completion:(id /* block */)arg4;
- (id)baseURL;
- (id)decodePolicyFromPayload:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (void)downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 relativePaths:(id)arg4 completion:(id /* block */)arg5;
- (id)downloadedRecipeWithID:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (void)fetchPolicyForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecipe:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 protocolClass:(Class)arg3;
- (id)initWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 protocolClass:(Class)arg3 sessionConfiguration:(id)arg4;
- (void)invalidate;
- (void)invalidateInternal;
- (bool)maybePostRecipeResponseToParsec:(id)arg1 recipeID:(id)arg2 uploadTransport:(id)arg3;
- (id)moveToURLFromBaseURL:(id)arg1 relativePath:(id)arg2 attachmentURL:(id)arg3 suggestedFilename:(id)arg4;
- (void)runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(id /* block */)arg3;
- (void)sendRecipeResponseWithResult:(id)arg1 recipe:(id)arg2 uploadTransport:(id)arg3 error:(id)arg4 completion:(id /* block */)arg5;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)session:(id)arg1 didDeleteResource:(id)arg2;
- (void)session:(id)arg1 didDownloadResource:(id)arg2;
- (id)systemMetaData;
- (bool)uploadViaDediscoWithResult:(id)arg1 recipe:(id)arg2 error:(id*)arg3;
- (bool)uploadViaDediscoWithResult:(id)arg1 recipe:(id)arg2 inError:(id)arg3 outErrorPtr:(id*)arg4;
- (bool)validatePolicySignature:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)verifyAndMoveAttachmentAtLocation:(id)arg1 attachmentURL:(id)arg2 response:(id)arg3 destinationBaseURL:(id)arg4 relativePath:(id)arg5 key:(id)arg6 signature:(id)arg7 downloadError:(id)arg8 error:(id*)arg9;
- (bool)verifyAttachment:(id)arg1 attachmentURL:(id)arg2 attachmentSignature:(id)arg3;

@end
