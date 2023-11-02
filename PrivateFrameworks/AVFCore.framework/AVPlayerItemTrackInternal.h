
@interface AVPlayerItemTrackInternal : NSObject {
    long long  activeHapticChannelIndex;
    bool  activeHapticChannelIndexWasSet;
    AVAsset * asset;
    bool  disableColorMatching;
    bool  disableColorMatchingWasSet;
    bool  enabled;
    bool  enabledWasSet;
    struct OpaqueFigPlaybackItem { } * figPlaybackItem;
    bool  figPlaybackItemIsReadyForInspection;
    float  hapticVolume;
    bool  hapticVolumeWasSet;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    NSDictionary * loudnessInfo;
    bool  mutesHaptics;
    bool  mutesHapticsWasSet;
    NSMutableArray * sampleBufferOutputs;
    int  trackID;
    NSDictionary * videoEnhancementFilterOptions;
    NSString * videoFieldMode;
    AVWeakReference * weakReferenceToPlayerItem;
}

@end
