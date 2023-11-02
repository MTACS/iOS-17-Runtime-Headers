
@interface AVAssetReaderTrackOutputInternal : NSObject {
    bool  appliesPreferredTrackTransform;
    NSString * audioTimePitchAlgorithm;
    bool  limitsImageQueueCapacityToOneFrame;
    AVOutputSettings * outputSettings;
    AVAssetTrack * track;
    AVWeakReference * weakReferenceToAttachedAdaptor;
}

@end
