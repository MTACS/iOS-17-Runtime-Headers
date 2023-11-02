
@interface AVCaptureDataOutputSynchronizerInternal : NSObject {
    NSArray * dataOutputs;
    NSArray * dataOutputsStorage;
    struct OpaqueFigSimpleMutex { } * dataOutputsStorageMutex;
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    int  leaderSynchronizedDataQueueMaxDepth;
    bool  synchronizingVideoAndDepth;
    bool  synchronizingVideoAndVisionData;
    AVWeakReference * weakReference;
}

@end
