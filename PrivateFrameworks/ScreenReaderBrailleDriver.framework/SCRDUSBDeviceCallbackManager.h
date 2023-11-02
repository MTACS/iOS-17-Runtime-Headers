
@interface SCRDUSBDeviceCallbackManager : NSObject {
    NSMutableDictionary * _completions;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addCompletion:(struct _SCRDUSBDeviceCompletion { unsigned long long x1; int x2; }*)arg1;
- (struct _SCRDUSBDeviceCompletion { unsigned long long x1; int x2; }*)completionWithReference:(void*)arg1;
- (id)init;
- (void)removeCompletion:(void*)arg1;

@end
