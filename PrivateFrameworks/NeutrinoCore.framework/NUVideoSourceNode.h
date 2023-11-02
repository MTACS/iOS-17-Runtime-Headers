
@interface NUVideoSourceNode : NUSourceNode {
    NSURL * _URL;
    AVAsset * _asset;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _cleanAperture;
    NSDictionary * _colorProperties;
    struct { 
        long long width; 
        long long height; 
    }  _disparitySize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoKeyFrameTime;
    bool  _loaded;
    NSArray * _metadata;
    long long  _orientation;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _originalExtent;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    NSArray * _trackGroups;
    NSData * _videoData;
}

@property (readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cleanAperture;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (readonly) bool isHDR;

- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluateTimedMetadataSampleWithIdentifier:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(out id*)arg3;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoAttributes:(out id*)arg1;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (void)_initializeQueue;
- (bool)_load:(out id*)arg1;
- (id)_settingsForPipelineState:(id)arg1 ownedFrame:(bool)arg2;
- (id)asset:(out id*)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanAperture;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 options:(id)arg3;
- (id)initWithVideoData:(id)arg1 identifier:(id)arg2 options:(id)arg3;
- (bool)isHDR;
- (bool)load:(out id*)arg1;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
