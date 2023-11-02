
@interface FRCLivePhotoMetadata : NSObject {
    long long  _frameIndex;
    bool  _interpolated;
    bool  _isIDR;
    bool  _noRecipeGap;
    unsigned long long  _originalPTSInNanos;
    unsigned long long  _ptsInNanos;
    long long  _sequenceAdjusterDisplacement;
    long long  _sequenceAdjusterRecipe;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) long long frameIndex;
@property (nonatomic) bool interpolated;
@property (nonatomic) bool isIDR;
@property (nonatomic) bool noRecipeGap;
@property (nonatomic) unsigned long long originalPTSInNanos;
@property (nonatomic) unsigned long long ptsInNanos;
@property (nonatomic) long long sequenceAdjusterDisplacement;
@property (nonatomic) long long sequenceAdjusterRecipe;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (long long)frameIndex;
- (bool)interpolated;
- (bool)isIDR;
- (bool)noRecipeGap;
- (unsigned long long)originalPTSInNanos;
- (unsigned long long)ptsInNanos;
- (long long)sequenceAdjusterDisplacement;
- (long long)sequenceAdjusterRecipe;
- (void)setFrameIndex:(long long)arg1;
- (void)setInterpolated:(bool)arg1;
- (void)setIsIDR:(bool)arg1;
- (void)setNoRecipeGap:(bool)arg1;
- (void)setOriginalPTSInNanos:(unsigned long long)arg1;
- (void)setPtsInNanos:(unsigned long long)arg1;
- (void)setSequenceAdjusterDisplacement:(long long)arg1;
- (void)setSequenceAdjusterRecipe:(long long)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
