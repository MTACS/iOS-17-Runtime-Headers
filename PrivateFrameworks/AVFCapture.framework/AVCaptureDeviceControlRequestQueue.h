
@interface AVCaptureDeviceControlRequestQueue : NSObject {
    NSMutableArray * _mutableArray;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void)dealloc;
- (id)dequeue;
- (void)enqueueRequest:(id)arg1;
- (id)head;
- (id)init;

@end
