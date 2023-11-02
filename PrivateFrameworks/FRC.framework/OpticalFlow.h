
@interface OpticalFlow : NSObject {
    bool  _4xUpscale;
    Class  _adaptationDecoderClass;
    FlowAdaptationFeatureExtractor * _adaptationFeatureExtractor;
    Class  _adaptationFeatureExtractorClass;
    Backwarp * _backwarp;
    FeatureExtractor * _baseFeatureExtractor;
    FlowEstimate * _baseFlowEstimator;
    bool  _baseStageCreated;
    long long  _baseStageUsage;
    <MTLCommandQueue> * _commandQueue;
    bool  _concurrentDualFlowProcessing;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    Correlation * _correlation;
    <MTLDeviceSPI> * _device;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    unsigned long long  _downsampling;
    FeatureExtractor * _featureExtractor;
    Class  _featureExtractorClass;
    struct { 
        struct { 
            int numLevels; 
            struct __CVBuffer {} *feature[6]; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long channels; 
            } tensorSize[6]; 
            struct __CVBuffer {} *adaptationLayerFeature; 
        } imageFeature; 
        struct { 
            int numLevels; 
            struct __CVBuffer {} *feature[6]; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long channels; 
            } tensorSize[6]; 
            struct __CVBuffer {} *adaptationLayerFeature; 
        } baseImageFeature; 
        struct __CVBuffer {} *subsampledInput; 
        struct __CVBuffer {} *baseStageInput; 
    }  _features;
    NSObject<OS_dispatch_semaphore> * _flowEstimateSemaphore;
    FlowEstimate * _flowEstimator;
    Class  _flowEstimatorClass;
    unsigned long long  _flowHeight;
    unsigned long long  _flowWidth;
    int  _numLevels;
    struct { 
        struct { 
            struct __CVBuffer {} *correlations[6]; 
            struct __CVBuffer {} *flows[6]; 
            struct __CVBuffer {} *upscaledFlows[6]; 
            struct __CVBuffer {} *warpedImages[6]; 
            struct __CVBuffer {} *shuffledFlow; 
            unsigned int numLevels; 
        } storage; 
        struct { 
            struct __CVBuffer {} *correlations[6]; 
            struct __CVBuffer {} *flows[6]; 
            struct __CVBuffer {} *upscaledFlows[6]; 
            struct __CVBuffer {} *warpedImages[6]; 
            struct __CVBuffer {} *shuffledFlow; 
            unsigned int numLevels; 
        } baseStorage; 
    }  _opticalFlowStroages;
    bool  _resourcePreAllocated;
    bool  _skipLastLevel;
    bool  _twoStageFlow;
    bool  _upscaleFinalFlow;
    long long  _usage;
    bool  _useAdaptationLayer;
}

@property (nonatomic) bool concurrentDualFlowProcessing;
@property (nonatomic) unsigned long long downsampling;
@property (nonatomic, readonly) unsigned long long flowHeight;
@property (nonatomic, readonly) unsigned long long flowWidth;
@property (readonly) struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*imageFeatures;
@property (nonatomic, readonly) int numLevels;
@property (nonatomic) bool skipLastLevel;
@property (readonly) struct { struct { struct __CVBuffer {} *x_1_1_1[6]; struct __CVBuffer {} *x_1_1_2[6]; struct __CVBuffer {} *x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4[6]; struct __CVBuffer {} *x_1_1_5; unsigned int x_1_1_6; } x1; struct { struct __CVBuffer {} *x_2_1_1[6]; struct __CVBuffer {} *x_2_1_2[6]; struct __CVBuffer {} *x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4[6]; struct __CVBuffer {} *x_2_1_5; unsigned int x_2_1_6; } x2; }*storages;
@property (nonatomic) bool twoStageFlow;
@property (nonatomic) bool useAdaptationLayer;

- (void).cxx_destruct;
- (void)allocateCorreleationBuffer:(struct __CVBuffer {}**)arg1 forLevel:(unsigned int)arg2 extractor:(id)arg3;
- (void)allocateFeatureBuffers:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg1;
- (void)allocateImageFeature:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg1 extractor:(id)arg2;
- (void)allocateIntermediateStageStorage:(struct { struct __CVBuffer {} *x1[6]; struct __CVBuffer {} *x2[6]; struct __CVBuffer {} *x3[6]; struct __CVBuffer {} *x4[6]; struct __CVBuffer {} *x5; unsigned int x6; }*)arg1 baseStage:(bool)arg2;
- (void)allocateIntermediateStorage:(struct { struct { struct __CVBuffer {} *x_1_1_1[6]; struct __CVBuffer {} *x_1_1_2[6]; struct __CVBuffer {} *x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4[6]; struct __CVBuffer {} *x_1_1_5; unsigned int x_1_1_6; } x1; struct { struct __CVBuffer {} *x_2_1_1[6]; struct __CVBuffer {} *x_2_1_2[6]; struct __CVBuffer {} *x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4[6]; struct __CVBuffer {} *x_2_1_5; unsigned int x_2_1_6; } x2; }*)arg1;
- (void)allocateResources;
- (bool)concurrentDualFlowProcessing;
- (bool)createBaseLayer;
- (bool)createModules;
- (void)dealloc;
- (unsigned long long)downsampling;
- (void)estimateFlowFromFirstFeatures:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg1 secondFeature:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg2 storage:(struct { struct { struct __CVBuffer {} *x_1_1_1[6]; struct __CVBuffer {} *x_1_1_2[6]; struct __CVBuffer {} *x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4[6]; struct __CVBuffer {} *x_1_1_5; unsigned int x_1_1_6; } x1; struct { struct __CVBuffer {} *x_2_1_1[6]; struct __CVBuffer {} *x_2_1_2[6]; struct __CVBuffer {} *x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4[6]; struct __CVBuffer {} *x_2_1_5; unsigned int x_2_1_6; } x2; }*)arg3 outputFlow:(struct __CVBuffer { }*)arg4;
- (void)estimateFlowLevel:(unsigned int)arg1 withEstimator:(id*)arg2 firstFeatures:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg3 secondFeatures:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg4 correlation:(struct __CVBuffer { }*)arg5 upscaledFlow:(struct __CVBuffer { }*)arg6 warpedImage:(struct __CVBuffer { }*)arg7 prevFlow:(struct __CVBuffer { }*)arg8 outputFlow:(struct __CVBuffer { }*)arg9 waitForComplete:(bool)arg10;
- (void)estimateStageFlowFromFirstFeatures:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg1 secondFeature:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg2 storage:(struct { struct __CVBuffer {} *x1[6]; struct __CVBuffer {} *x2[6]; struct __CVBuffer {} *x3[6]; struct __CVBuffer {} *x4[6]; struct __CVBuffer {} *x5; unsigned int x6; }*)arg3 baseStage:(bool)arg4 startLevel:(int)arg5 lastLevel:(int)arg6 startFlow:(struct __CVBuffer { }*)arg7 outputFlow:(struct __CVBuffer { }*)arg8;
- (void)estimateTwoWayFlowFromFirstFeatures:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg1 secondFeature:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg2 storage:(struct { struct { struct __CVBuffer {} *x_1_1_1[6]; struct __CVBuffer {} *x_1_1_2[6]; struct __CVBuffer {} *x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4[6]; struct __CVBuffer {} *x_1_1_5; unsigned int x_1_1_6; } x1; struct { struct __CVBuffer {} *x_2_1_1[6]; struct __CVBuffer {} *x_2_1_2[6]; struct __CVBuffer {} *x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4[6]; struct __CVBuffer {} *x_2_1_5; unsigned int x_2_1_6; } x2; }*)arg3 outputForwardFlow:(struct __CVBuffer { }*)arg4 outputBackwardFlow:(struct __CVBuffer { }*)arg5;
- (void)extractFeaturesFromFirst:(struct __CVBuffer { }*)arg1 second:(struct __CVBuffer { }*)arg2 outputFeatures:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg3;
- (void)extractFeaturesFromImage:(struct __CVBuffer { }*)arg1 outputFeatures:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })featureSizeForLevel:(unsigned int)arg1;
- (unsigned long long)flowHeight;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })flowSizeForLevel:(unsigned int)arg1;
- (unsigned long long)flowWidth;
- (struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)imageFeatures;
- (id)init;
- (id)initWithMode:(long long)arg1;
- (int)numLevels;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 flowForward:(struct __CVBuffer { }*)arg3 flowBackward:(struct __CVBuffer { }*)arg4;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 flowForward:(struct __CVBuffer { }*)arg3 flowBackward:(struct __CVBuffer { }*)arg4 reUseFlow:(bool)arg5;
- (void)predictFowardFlow:(struct __CVBuffer { }*)arg1 fromBackwardFlow:(struct __CVBuffer { }*)arg2;
- (void)releaseFeatureBuffers:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg1;
- (void)releaseImageFeature:(struct { int x1; struct __CVBuffer {} *x2[6]; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; } x3[6]; struct __CVBuffer {} *x4; }*)arg1;
- (void)releaseIntermediateStageStorage:(struct { struct __CVBuffer {} *x1[6]; struct __CVBuffer {} *x2[6]; struct __CVBuffer {} *x3[6]; struct __CVBuffer {} *x4[6]; struct __CVBuffer {} *x5; unsigned int x6; }*)arg1;
- (void)releaseIntermediateStorage:(struct { struct { struct __CVBuffer {} *x_1_1_1[6]; struct __CVBuffer {} *x_1_1_2[6]; struct __CVBuffer {} *x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4[6]; struct __CVBuffer {} *x_1_1_5; unsigned int x_1_1_6; } x1; struct { struct __CVBuffer {} *x_2_1_1[6]; struct __CVBuffer {} *x_2_1_2[6]; struct __CVBuffer {} *x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4[6]; struct __CVBuffer {} *x_2_1_5; unsigned int x_2_1_6; } x2; }*)arg1;
- (void)releaseResources;
- (void)releaseUnusedFeatures:(struct { struct { int x_1_1_1; struct __CVBuffer {} *x_1_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4; } x1; struct { int x_2_1_1; struct __CVBuffer {} *x_2_1_2[6]; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; } x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4; } x2; struct __CVBuffer {} *x3; struct __CVBuffer {} *x4; }*)arg1;
- (void)reshuffleFlow:(struct __CVBuffer { }*)arg1 previsouFlow:(struct __CVBuffer { }*)arg2 destination:(struct __CVBuffer { }*)arg3;
- (void)setConcurrentDualFlowProcessing:(bool)arg1;
- (void)setDownsampling:(unsigned long long)arg1;
- (void)setNetworkClasses;
- (void)setSkipLastLevel:(bool)arg1;
- (void)setTwoStageFlow:(bool)arg1;
- (void)setUseAdaptationLayer:(bool)arg1;
- (bool)skipLastLevel;
- (struct { struct { struct __CVBuffer {} *x_1_1_1[6]; struct __CVBuffer {} *x_1_1_2[6]; struct __CVBuffer {} *x_1_1_3[6]; struct __CVBuffer {} *x_1_1_4[6]; struct __CVBuffer {} *x_1_1_5; unsigned int x_1_1_6; } x1; struct { struct __CVBuffer {} *x_2_1_1[6]; struct __CVBuffer {} *x_2_1_2[6]; struct __CVBuffer {} *x_2_1_3[6]; struct __CVBuffer {} *x_2_1_4[6]; struct __CVBuffer {} *x_2_1_5; unsigned int x_2_1_6; } x2; }*)storages;
- (void)subsampleInput:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2 forUsage:(long long)arg3;
- (bool)switchUsageTo:(long long)arg1;
- (bool)twoStageFlow;
- (void)updateFlowSize;
- (void)upscaleInputFlow:(struct __CVBuffer { }*)arg1 outFlow:(struct __CVBuffer { }*)arg2;
- (bool)use4xDownScale:(long long)arg1;
- (bool)useAdaptationLayer;

@end
