
@interface GEONetworkServiceRequesterOperation : NSObject <GEOProtobufSessionTaskDelegate, GEOServiceRequesterOperation> {
    NSString * _appIdentifier;
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
    unsigned long long  _requestOptions;
    GEOProtobufSessionTask * _task;
    GEODataRequestThrottlerToken * _throttleToken;
    double  _timeout;
    GEOMapServiceTraits * _traits;
    NSURL * _url;
    id /* block */  _validationHandler;
    id /* block */  _willSendRequestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_fullURL;
- (void)_recordNetworkEventDataForTask;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 options:(unsigned long long)arg6 willSendRequestHandler:(id /* block */)arg7 validationHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)protobufSession:(id)arg1 validateResponse:(id)arg2;
- (void)protobufSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)start;

@end
