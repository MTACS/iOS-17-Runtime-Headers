
@interface MGRemoteQueryServerHandlerQuery : NSObject <MGRemoteQueryServerHandlerProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _payloadProvider;
    bool  _pendingUpdate;
    MGGroupQuery * _query;
    NSError * _queryError;
    NSArray * _queryGroups;
    NSURLRequest * _request;
    NSPredicate * _requestPredicate;
    NSString * _responseBoundary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ payloadProvider;
@property (nonatomic) bool pendingUpdate;
@property (nonatomic, retain) MGGroupQuery *query;
@property (nonatomic, retain) NSError *queryError;
@property (nonatomic, retain) NSArray *queryGroups;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, retain) NSPredicate *requestPredicate;
@property (nonatomic, retain) NSString *responseBoundary;
@property (readonly) Class superclass;

+ (id)handlerForRequest:(id)arg1;
+ (id)urlPath;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1;
- (void)_queryHandleResults:(id)arg1 error:(id)arg2;
- (void)_querySendResults;
- (void)_queryStart;
- (void)_requestParse;
- (void)_withLock:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)payloadProvider;
- (bool)pendingUpdate;
- (int)prepareResponse:(id)arg1;
- (void)provideResponseData:(id /* block */)arg1;
- (id)query;
- (id)queryError;
- (id)queryGroups;
- (id)request;
- (id)requestPredicate;
- (id)responseBoundary;
- (void)setPayloadProvider:(id /* block */)arg1;
- (void)setPendingUpdate:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryError:(id)arg1;
- (void)setQueryGroups:(id)arg1;
- (void)setRequestPredicate:(id)arg1;
- (void)setResponseBoundary:(id)arg1;
- (bool)validateRequest;

@end
