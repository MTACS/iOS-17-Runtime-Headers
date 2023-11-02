
@interface APRKContentKeyHelper : NSObject <AVContentKeySessionDelegate> {
    NSMutableDictionary * _activeContentKeyRequests;
    NSData * _appIDData;
    AVContentKeySession * _contentKeySession;
    NSObject<OS_dispatch_queue> * _contentKeySessionQueue;
    <APRKContentKeyHelperDelegate> * _delegate;
    bool  _forwardsFPSSecureStopData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APRKContentKeyHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forwardsFPSSecureStopData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performContentKeyRequest:(id)arg1 isRenewalRequest:(bool)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySessionDidGenerateExpiredSessionReport:(id)arg1;
- (id)delegate;
- (void)forgetAllActiveContentKeyRequests;
- (bool)forwardsFPSSecureStopData;
- (id)init;
- (bool)isHandlingContentKeyRequestWithURLString:(id)arg1;
- (void)processStreamingKeyRequestWithDictionary:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)processUnhandledURLResponseWithDictionary:(id)arg1 error:(id*)arg2;
- (void)registerAVURLAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardsFPSSecureStopData:(bool)arg1;
- (void)unregisterAVURLAsset:(id)arg1;

@end
