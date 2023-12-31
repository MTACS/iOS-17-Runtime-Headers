
@interface AVVideoCompositionCoreAnimationTool : NSObject {
    AVVideoCompositionCoreAnimationToolInternal * _videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;

- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (bool)_hasLayerAsAuxiliaryTrack;
- (bool)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayers;
- (void)dealloc;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;

@end
