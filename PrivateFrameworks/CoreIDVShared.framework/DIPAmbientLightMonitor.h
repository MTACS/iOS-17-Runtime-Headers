
@interface DIPAmbientLightMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _almQueue;
    struct __IOHIDEventSystemClient { } * _client;
    int  _luxLevel;
    struct __IOHIDServiceClient { } * _service;
}

@property (nonatomic, readonly) int luxLevel;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleEvent:(struct __IOHIDEvent { }*)arg1;
- (id)init;
- (int)luxLevel;

@end
