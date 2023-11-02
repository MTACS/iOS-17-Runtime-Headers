
@interface MNTraceBookmarkRecorder : NSObject {
    MNTrace * _trace;
}

- (void).cxx_destruct;
- (id)initWithTrace:(id)arg1;
- (void)recordBookmarkAtTime:(double)arg1 withScreenshotData:(id)arg2 completionHandler:(id /* block */)arg3;

@end
