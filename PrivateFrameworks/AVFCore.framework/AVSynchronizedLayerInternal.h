
@interface AVSynchronizedLayerInternal : NSObject {
    bool  isVisible;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    NSMutableSet * oldPlayerItems;
    AVPlayerItem * playerItem;
    NSObject<OS_dispatch_queue> * serialQueue;
}

@end
