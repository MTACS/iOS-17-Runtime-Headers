
@interface NTKFaceSupportNotificationPresentationEventRecorder : NSObject {
    NSMapTable * _lookup;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMapTable *lookup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)eventRecorder;
+ (id)sharedRecorder;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_beginPresentationForIdentifier:(id)arg1 pushDate:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_endPresentationForIdentifier:(id)arg1 status:(long long)arg2 artworkUsed:(long long)arg3 errorCode:(long long)arg4 optOutStatus:(long long)arg5 completion:(id /* block */)arg6;
- (id)_validateIdentifier:(id)arg1;
- (void)beginPresentationForIdentifier:(id)arg1 pushDate:(id)arg2 completion:(id /* block */)arg3;
- (void)endPresentationForIdentifier:(id)arg1 status:(long long)arg2 artworkUsed:(long long)arg3 errorCode:(long long)arg4 optOutStatus:(long long)arg5 completion:(id /* block */)arg6;
- (id)lookup;
- (id)queue;

@end
