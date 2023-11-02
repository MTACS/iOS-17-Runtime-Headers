
@interface AVAssetDownloadSessionInternal : NSObject {
    NSURL * URL;
    AVURLAsset * asset;
    struct CMBaseObject { } * assetDownloader;
    long long  assetTypeLoadingStatus;
    NSNumber * cachePrimingDownloadTokenNum;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSURL * destinationURL;
    bool  didStartLoadingMetadata;
    unsigned long long  downloadToken;
    NSError * error;
    struct OpaqueFigAsset { } * figAsset;
    NSObject<OS_dispatch_source> * fileDownloadProgressTimer;
    NSArray * mediaSelections;
    struct OpaqueFigPlaybackItem { } * playbackItem;
    struct OpaqueFigPlayer { } * player;
    long long  priority;
    NSObject<OS_dispatch_queue> * stateQueue;
    long long  status;
    AVWeakReference * weakReference;
}

@end
