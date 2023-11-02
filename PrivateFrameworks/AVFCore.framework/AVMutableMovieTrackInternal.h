
@interface AVMutableMovieTrackInternal : NSObject {
    struct OpaqueFigAssetTrack { } * figAssetTrack;
    AVWeakReference * figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack { } * figAssetTrackNotificationSource;
    struct OpaqueFigMutableMovie { } * figMutableMovie;
    NSObject<OS_dispatch_semaphore> * metadataWaitingSemaphore;
    int  trackID;
}

- (void).cxx_destruct;

@end
