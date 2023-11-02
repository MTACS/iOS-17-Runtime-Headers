
@interface MusicKit_SoftLinking_MPRequestResponseController : NSObject <MPRequestResponseControllerDelegate> {
    id /* block */  _responseHandler;
    id /* block */  _shouldRetryFailedRequestWithErrorHandler;
    MPRequestResponseController * _underlyingRequestResponseController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MusicKit_SoftLinking_MPCPlayerRequest *request;
@property (nonatomic, readonly) <MusicKit_SoftLinking_MPCPlayerResponse> *response;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, copy) id /* block */ shouldRetryFailedRequestWithErrorHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginAutomaticResponseLoading;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)endAutomaticResponseLoading;
- (id)init;
- (id)initWithUnderlyingRequestResponseController:(id)arg1;
- (void)reloadIfNeeded;
- (id)request;
- (id)response;
- (id /* block */)responseHandler;
- (void)setNeedsReload;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldRetryFailedRequestWithErrorHandler:(id /* block */)arg1;
- (id /* block */)shouldRetryFailedRequestWithErrorHandler;

@end
