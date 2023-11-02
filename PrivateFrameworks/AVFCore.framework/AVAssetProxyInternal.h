
@interface AVAssetProxyInternal : NSObject {
    AVAssetInspectorLoader * loader;
    AVDispatchOnce * makeTracksArrayOnce;
    NSArray * tracks;
}

@end
