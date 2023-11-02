
@interface AVSampleBufferVideoOutputInternal : NSObject {
    AVWeakReferencingDelegateStorage * delegateStorage;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  lastImageTime;
    struct OpaqueVTPixelBufferConformer { } * pixelBufferConformer;
    NSObject<OS_dispatch_queue> * stateQueue;
    struct OpaqueFigVisualContext { } * vc;
    AVWeakReference * weakReference;
}

@end
