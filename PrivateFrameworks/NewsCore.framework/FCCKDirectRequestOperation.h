
@interface FCCKDirectRequestOperation : FCOperation {
    NSDictionary * _additionalRequestHTTPHeaders;
    NSURL * _baseURL;
    NSString * _containerName;
    id /* block */  _criticalNodeFailureTest;
    FCEdgeCacheHint * _edgeCacheHint;
    bool  _ignoreCache;
    FCNetworkEvent * _networkEvent;
    int  _networkEventType;
    bool  _operationFailsOnRequestFailure;
    bool  _production;
    id /* block */  _requestCompletionHandler;
    long long  _requestType;
    NSString * _requestUUID;
    NSArray * _requests;
    NSError * _resultError;
    NSMutableDictionary * _resultErrorsByRequestID;
    NSMutableArray * _resultResponses;
    double  _timeoutIntervalForRequest;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (bool)validateOperation;

@end
