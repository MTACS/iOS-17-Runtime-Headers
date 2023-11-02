
@interface AVAssetReaderVideoCompositionOutputInternal : NSObject {
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    void * figVideoCompositor;
    NSArray * sampleDataTrackIDs;
    AVVideoComposition * videoComposition;
    AVVideoOutputSettings * videoOutputSettings;
    NSArray * videoTracks;
}

@end
