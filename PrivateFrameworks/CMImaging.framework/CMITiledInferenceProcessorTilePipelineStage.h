
@interface CMITiledInferenceProcessorTilePipelineStage : NSObject {
    bool  _hasConnectingPostToPreMetalStage;
    CMITiledInferenceProcessorNetworkConfig * _networkConfig;
    <CMITiledInferenceProcessorMetalStage> * _postInferenceStage;
    <CMITiledInferenceProcessorMetalStage> * _preInferenceStage;
}

@property (nonatomic, retain) CMITiledInferenceProcessorNetworkConfig *networkConfig;
@property (nonatomic, retain) <CMITiledInferenceProcessorMetalStage> *postInferenceStage;
@property (nonatomic, retain) <CMITiledInferenceProcessorMetalStage> *preInferenceStage;

- (void).cxx_destruct;
- (bool)hasConnectingPostToPreMetalStage;
- (id)init;
- (id)networkConfig;
- (id)postInferenceStage;
- (id)preInferenceStage;
- (void)setHasConnectingPostToPreMetalStage:(bool)arg1;
- (void)setNetworkConfig:(id)arg1;
- (void)setPostInferenceStage:(id)arg1;
- (void)setPreInferenceStage:(id)arg1;

@end
