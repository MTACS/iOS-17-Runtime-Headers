
@interface AVCaptureProprietaryDefaultsSingleton : NSObject {
    NSMutableDictionary * _defaultChangedHandlersForObserversForKeys;
    NSMutableArray * _keyObservationsThatFailedToRegisterWithServer;
    NSObject<OS_dispatch_queue> * _proprietaryDefaultChangeNotificationCallbackQueue;
    struct OpaqueFigCaptureSource { } * _proprietaryDefaultsSource;
    NSObject<OS_dispatch_queue> * _proprietaryDefaultsSourceQueue;
    char * _proprietaryDefaultsSourceQueueLabel;
    unsigned long long  _proprietaryDefaultsSourceQueueLabelLength;
    AVWeakReference * _weakReference;
}

+ (void)addObserver:(id)arg1 forKey:(id)arg2 callHandlerForInitialValue:(bool)arg3 defaultChangedHandler:(id /* block */)arg4;
+ (id)cameraHistoryDownplayOverrideList;
+ (void)initialize;
+ (id)objectForKey:(id)arg1;
+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)proprietaryDefaultsDomainForClient;
+ (id)proprietaryDefaultsSingleton;
+ (void)removeObserver:(id)arg1 forKey:(id)arg2;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (void)updateCameraHistory:(id)arg1 withCameraInfo:(id)arg2 maxLength:(unsigned long long)arg3 updateCameraHistoryDownplayOverrideList:(bool)arg4 cameraCanBeInOverrideList:(bool)arg5;
+ (void)updateCameraOverrideHistory:(id)arg1 withCameraInfo:(id)arg2 setOverride:(bool)arg3;
+ (void)updateProprietaryDefaultsSource;

- (void)_handleDefaultChangedNotificationForKey:(id)arg1 newValue:(id)arg2 callHandlersAsync:(bool)arg3;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (int)_registerWithServerToObserveKey:(id)arg1;
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(id /* block */)arg1;
- (void)_updateProprietaryDefaultsSource:(bool)arg1;
- (void)addObserver:(id)arg1 forKey:(id)arg2 callHandlerForInitialValue:(bool)arg3 defaultChangedHandler:(id /* block */)arg4;
- (id)cameraHistoryDownplayOverrideList;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;
- (int)retryPriorFailedKeyObservationRegistrations;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)updateCameraHistory:(id)arg1 withCameraInfo:(id)arg2 maxLength:(unsigned long long)arg3 updateCameraHistoryDownplayOverrideList:(bool)arg4 cameraCanBeInOverrideList:(bool)arg5;
- (void)updateCameraOverrideHistory:(id)arg1 withCameraInfo:(id)arg2 setOverride:(bool)arg3;

@end
