
@interface AVPlayerItemOutputInternal : NSObject {
    struct OpaqueCMTimebase { } * timebase;
    NSObject<OS_dispatch_queue> * timebaseReadWriteQueue;
    AVWeakReference * weakReference;
}

@end
