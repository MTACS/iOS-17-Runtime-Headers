
@interface AVCaptureDeferredPhotoProcessor : NSObject {
    NSString * _applicationIDOverride;
    struct OpaqueFigCaptureDeferredPhotoProcessor { } * _fcdpp;
    NSObject<OS_dispatch_queue> * _fcdppQueue;
    NSMutableArray * _requests;
    struct OpaqueFigSimpleMutex { } * _requestsLock;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) NSArray *persistentlyStoredDeferredPhotoProxies;

+ (void)initialize;
+ (id)sharedPhotoProcessor;
+ (id)sharedPhotoProcessorForApplicationID:(id)arg1;

- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forProcessingRequest:(id)arg2 error:(id)arg3;
- (int)_establishServerConnection;
- (void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleNotification:(struct __CFString { }*)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedSendingClientNotification:(bool)arg1;
- (void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (id)_processingRequestForCaptureRequestIdentifier:(id)arg1;
- (void)_setFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor { }*)arg1;
- (void)cancelAllPrewarming;
- (bool)cancelProcessingForPhotoProxy:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deletePersistentStorageForPhotoProxy:(id)arg1;
- (id)initWithApplicationIDOverride:(id)arg1;
- (bool)isPaused;
- (id)persistentlyStoredDeferredPhotoProxies;
- (id)prettyPrintDescriptionForContainer:(id)arg1;
- (void)prewarmWithSettings:(id)arg1;
- (void)processPhotoProxy:(id)arg1 queuePosition:(id)arg2 delegate:(id)arg3;
- (void)setPaused:(bool)arg1;

@end
