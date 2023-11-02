
@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate> {
    id /* block */  _completionHandler;
    CPSSessionProxy * _sessionProxy;
    bool  _shouldOpenClipWhenMetadataIsUpdated;
    bool  _shouldReturnErrorOnUserCancellation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldReturnErrorOnUserCancellation;
@property (readonly) Class superclass;

+ (void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(id /* block */)arg3;
+ (void)deleteClipsWithBundleIDs:(id)arg1 completion:(id /* block */)arg2;
+ (void)getLocationConfirmationConsentForBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (void)getUserNotificationConsentForBundleID:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_errorIgnoringUserCancelledErrorIfNeeded:(id)arg1;
- (void)_openClipWithInvocationUI;
- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (void)installClipWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)proxy:(id)arg1 didDetermineAvailability:(bool)arg2;
- (void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)proxyAppDidLaunchForTesting:(id)arg1;
- (void)proxyDidUpdateMetadata:(id)arg1;
- (void)proxyRemoteServiceDidCrash:(id)arg1;
- (void)requestClipWithCompletion:(id /* block */)arg1;
- (id)sessionProxy;
- (void)setShouldReturnErrorOnUserCancellation:(bool)arg1;
- (bool)shouldReturnErrorOnUserCancellation;

@end
