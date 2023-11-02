
@interface AVAssetTrackInternal : NSObject {
    AVWeakReference * assetWeakReference;
    AVWeakReference * figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack { } * figAssetTrackNotificationSource;
    AVAssetTrackInspector * trackInspector;
    AVWeakReference * weakReferenceToSelf;
}

@end
