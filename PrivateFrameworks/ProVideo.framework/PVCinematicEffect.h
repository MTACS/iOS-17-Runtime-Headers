
@interface PVCinematicEffect : PVHeliumEffect {
    AVAsset * _avasset;
    double  _clipOffset;
    double  _clipStart;
    NSDictionary * _currentCinemtography;
    bool  _isReady;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _postEffectTransform;
    PTGlobalRenderingMetadataVersion1 * _ptGlobalRenderingMetadata;
    unsigned long long  _quality;
    PTCinematographyScript * _script;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoTrackSize;
}

@property (nonatomic) double clipOffset;
@property (nonatomic) double clipStart;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } postEffectTransform;
@property (nonatomic) unsigned long long quality;

+ (bool)deviceSupportsRendering:(id)arg1;
+ (bool)deviceSupportsTracking:(id)arg1;
+ (bool)enoughMemoryForHDR;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (bool)hasAppleNeuralEngine;
+ (bool)hasMoreThan2GBOfMemory;
+ (bool)isCinematicSupported:(id)arg1;
+ (long long)memorySize;
+ (void)registerEffectWithID:(id)arg1 displayName:(id)arg2;

- (void).cxx_destruct;
- (double)clipOffset;
- (double)clipStart;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (id)init;
- (bool)isReady;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })postEffectTransform;
- (unsigned long long)quality;
- (bool)setAsset:(id)arg1;
- (void)setClipOffset:(double)arg1;
- (void)setClipStart:(double)arg1;
- (void)setPostEffectTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setQuality:(unsigned long long)arg1;
- (void)setupGlobalMetadata;
- (void)updateDictionary:(id)arg1 completion:(id /* block */)arg2;

@end
