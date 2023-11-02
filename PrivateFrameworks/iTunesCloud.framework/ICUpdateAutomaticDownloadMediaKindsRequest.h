
@interface ICUpdateAutomaticDownloadMediaKindsRequest : ICRequestOperation <AMSRequestPresentationDelegate> {
    NSSet * _mediaKindsToAdd;
    NSSet * _mediaKindsToRemove;
    ICStoreRequestContext * _requestContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)automaticDownloadMediaKindsForMusic;

- (void).cxx_destruct;
- (void)execute;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRequestContext:(id)arg1 mediaKindsToAdd:(id)arg2 mediaKindsToRemove:(id)arg3;

@end
