
@interface AVAssetWriterInternal : NSObject {
    <AVAssetWriterFinishWritingDelegate> * finishWritingDelegate;
    AVAssetWriterHelper * helper;
    NSObject<OS_dispatch_queue> * helperReadWriteQueue;
    AVKeyPathDependencyManager * keyPathDependencyManager;
    AVWeakReference * weakReference;
}

- (void).cxx_destruct;

@end
