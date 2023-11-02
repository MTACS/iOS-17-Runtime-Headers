
@interface RBLogStateCaptureEntry : NSObject {
    id /* block */  _captureBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _title;
}

- (void).cxx_destruct;

@end
