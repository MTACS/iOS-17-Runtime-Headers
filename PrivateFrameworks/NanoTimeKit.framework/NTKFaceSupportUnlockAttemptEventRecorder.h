
@interface NTKFaceSupportUnlockAttemptEventRecorder : NSObject {
    NSMapTable * _lookup;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMapTable *lookup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)eventRecorder;
+ (id)sharedRecorder;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_beginRecordingForIdentifier:(id)arg1 method:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_queue_endRecordingForIdentifier:(id)arg1 status:(unsigned long long)arg2 errorCode:(long long)arg3 completion:(id /* block */)arg4;
- (id)_validateIdentifier:(id)arg1;
- (void)beginRecordingForIdentifier:(id)arg1 method:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)endRecordingForIdentifier:(id)arg1 status:(unsigned long long)arg2 errorCode:(long long)arg3 completion:(id /* block */)arg4;
- (id)lookup;
- (id)queue;

@end
