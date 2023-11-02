
@interface TLAudioQueue : NSObject {
    NSString * _assumeRunningOnAudioQueueThreadLocalStorageKey;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_underlyingSerialQueue;

+ (id)sharedAudioQueue;

- (void).cxx_destruct;
- (id)_init;
- (bool)_shouldAssumeRunningOnAudioQueue;
- (id)_underlyingSerialQueue;
- (void)assertNotRunningOnAudioQueue;
- (void)assertRunningOnAudioQueue;
- (void)performSynchronousTaskWithBlock:(id /* block */)arg1;
- (void)performSynchronousTaskWithOptions:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)performTaskWithBlock:(id /* block */)arg1;

@end
