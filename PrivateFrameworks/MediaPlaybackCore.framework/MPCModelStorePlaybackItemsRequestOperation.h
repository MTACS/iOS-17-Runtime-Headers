
@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPCPlaybackAccount * _account;
    NSProgress * _activeProgress;
    NSMutableArray * _errors;
    bool  _hasCalledResponseHandler;
    bool  _hasReceivedFinalResponse;
    NSOperationQueue * _operationQueue;
    MPCModelStorePlaybackItemsResponse * _previousModelResponse;
    MPCModelStorePlaybackItemsRequest * _request;
    struct { 
        bool useGlideMAPI; 
        bool useStorePlatform; 
    }  _requestOptions;
    bool  _requiresFollowupRequest;
    id /* block */  _responseHandler;
    bool  _useUniversalAccumulator;
}

@property (nonatomic, readonly, copy) MPCModelStorePlaybackItemsRequest *request;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_handleItemMetadataBatchRequestCompletedWithAccumulator:(id)arg1 previousResponse:(id)arg2 error:(id)arg3 isFinalResponse:(bool)arg4;
- (void)_importMediaAPICollectionItemMetadataResponse:(id)arg1 withError:(id)arg2 usingAccumulator:(id)arg3 trustID:(id)arg4 previousResponse:(id)arg5;
- (id)_localStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg1;
- (void)_runMediaAPIRequestToLoadMetadataWithAccumulator:(id)arg1 previousResponse:(id)arg2;
- (void)_runPersonalizationWithSectionCollection:(id)arg1 localEquivalencyMapping:(id)arg2 expirationDate:(id)arg3 error:(id)arg4 isFinalResponse:(bool)arg5 isInvalidForPersonalization:(bool)arg6 performanceMetrics:(id)arg7;
- (void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)arg1 previousResponse:(id)arg2;
- (void)cancel;
- (void)execute;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)request;
- (id /* block */)responseHandler;

@end
