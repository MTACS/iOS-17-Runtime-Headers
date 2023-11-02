
@interface AVCaptureSynchronizedDepthDataInternal : NSObject {
    AVDepthData * depthData;
    bool  depthDataWasDropped;
    long long  droppedReason;
}

@end
