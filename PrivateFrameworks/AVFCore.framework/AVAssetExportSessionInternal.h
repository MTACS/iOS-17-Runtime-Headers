
@interface AVAssetExportSessionInternal : NSObject {
    AVAsset * asset;
    AVAudioMix * audioMix;
    unsigned long long  audioTrackGroupHandling;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    struct OpaqueFigAssetExportSession { } * figExportSession;
    void * figVideoCompositor;
    id /* block */  handler;
    NSArray * metadata;
    AVMetadataItemFilter * metadataItemFilter;
    AVVideoComposition * videoComposition;
}

@end
