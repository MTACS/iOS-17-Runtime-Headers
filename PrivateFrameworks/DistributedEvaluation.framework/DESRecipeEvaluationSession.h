
@interface DESRecipeEvaluationSession : NSObject {
    NSDictionary * _JSONResult;
    NSObject<OS_xpc_object> * _activity;
    NSArray * _attachmentsToDelete;
    NSURL * _baseURL;
    NSData * _binaryResult;
    NSDate * _deadline;
    NSDate * _deferralDate;
    NSError * _error;
    long long  _evaluationResult;
    NSString * _localeIdentifier;
    DESRecordSet * _matchingRecordSet;
    Class  _protocolClass;
    DESRecipe * _recipe;
    bool  _requestedToStop;
    double  _resumeTimestamp;
    NSDate * _startDate;
    id /* block */  _testingCompletionHandler;
    NSArray * _testingRecipeAttachments;
    NSString * _testingRecipePath;
    bool  _wasResumedFromURL;
}

@property (nonatomic, readonly, copy) NSDictionary *JSONResult;
@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly, copy) NSData *binaryResult;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long evaluationResult;
@property (nonatomic, readonly) DESRecordSet *matchingRecordSet;
@property (nonatomic, readonly) DESRecipe *recipe;
@property (nonatomic) bool requestedToStop;
@property (nonatomic, copy) id /* block */ testingCompletionHandler;
@property (nonatomic, copy) NSArray *testingRecipeAttachments;
@property (nonatomic, copy) NSString *testingRecipePath;

- (void).cxx_destruct;
- (id)JSONResult;
- (void)_deleteDownloadedAttachments;
- (id)_initWithDodMLTask:(id)arg1;
- (id)_initWithResumptionURL:(id)arg1 recordSet:(id)arg2 protocolClass:(Class)arg3 error:(id*)arg4;
- (void)_postResultsToServerIfNeededWithCompletionHandler:(id /* block */)arg1;
- (id)activity;
- (id)binaryResult;
- (void)completeWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeWithJSONResult:(id)arg1 binaryResult:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)deferWithDeadline:(id)arg1 error:(id*)arg2;
- (id)deferralURL;
- (void)downloadAttachmentsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)error;
- (long long)evaluationResult;
- (id)initWithResumptionURL:(id)arg1 error:(id*)arg2;
- (id)matchingRecordSet;
- (id)recipe;
- (bool)requestedToStop;
- (void)sendRecipeResponseWithDuration:(double)arg1 evaluationError:(id)arg2 completion:(id /* block */)arg3;
- (void)setActivity:(id)arg1;
- (void)setRequestedToStop:(bool)arg1;
- (void)setTestingCompletionHandler:(id /* block */)arg1;
- (void)setTestingRecipeAttachments:(id)arg1;
- (void)setTestingRecipePath:(id)arg1;
- (bool)taskIsDeferred;
- (id /* block */)testingCompletionHandler;
- (id)testingRecipeAttachments;
- (id)testingRecipePath;

@end
