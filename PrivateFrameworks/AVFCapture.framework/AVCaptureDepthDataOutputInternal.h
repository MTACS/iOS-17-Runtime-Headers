
@interface AVCaptureDepthDataOutputInternal : NSObject {
    bool  alwaysDiscardsLateDepthData;
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    bool  filteringEnabled;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
