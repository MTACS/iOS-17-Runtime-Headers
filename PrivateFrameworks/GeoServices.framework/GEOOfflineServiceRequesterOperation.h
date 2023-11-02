
@interface GEOOfflineServiceRequesterOperation : NSObject <GEOServiceRequesterOperation, GEOTaskQueueTask> {
    GEOApplicationAuditToken * _auditToken;
    bool  _canceled;
    id /* block */  _completionHandler;
    <GEOServiceRequestConfiguring> * _config;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _dataRequestKind;
    NSString * _debugRequestName;
    PBRequest * _request;
    GEOPBOfflineRequestMetadata * _requestMetadata;
    <MapsOfflineServiceV1> * _service;
    GEOTaskQueue * _taskQueue;
    GEODataRequestThrottlerToken * _throttleToken;
    double  _timeout;
    GEOMapServiceTraits * _traits;
    id /* block */  _validationHandler;
    id /* block */  _willSendRequestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_processRequestWithAvailableRegions:(id)arg1 requestToSend:(id)arg2;
- (void)_requestCompletedWithResponse:(id)arg1 error:(id)arg2;
- (void)_start;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 options:(unsigned long long)arg6 willSendRequestHandler:(id /* block */)arg7 validationHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
- (id)parseResponse:(id)arg1 ofType:(Class)arg2;
- (void)runTask;
- (void)start;

@end
