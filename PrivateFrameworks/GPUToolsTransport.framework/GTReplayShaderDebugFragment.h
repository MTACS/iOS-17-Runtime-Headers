
@interface GTReplayShaderDebugFragment : GTReplayShaderDebugRequest <NSSecureCoding> {
    struct GTPoint2D { 
        unsigned long long x; 
        unsigned long long y; 
    }  _maxPixelPosition;
    unsigned int  _maxSampleID;
    struct GTPoint2D { 
        unsigned long long x; 
        unsigned long long y; 
    }  _minPixelPosition;
    unsigned int  _minSampleID;
    unsigned int  _renderTargetArrayIndex;
}

@property (nonatomic) struct GTPoint2D { unsigned long long x1; unsigned long long x2; } maxPixelPosition;
@property (nonatomic) unsigned int maxSampleID;
@property (nonatomic) struct GTPoint2D { unsigned long long x1; unsigned long long x2; } minPixelPosition;
@property (nonatomic) unsigned int minSampleID;
@property (nonatomic) unsigned int renderTargetArrayIndex;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct GTPoint2D { unsigned long long x1; unsigned long long x2; })maxPixelPosition;
- (unsigned int)maxSampleID;
- (struct GTPoint2D { unsigned long long x1; unsigned long long x2; })minPixelPosition;
- (unsigned int)minSampleID;
- (unsigned int)renderTargetArrayIndex;
- (void)setMaxPixelPosition:(struct GTPoint2D { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMaxSampleID:(unsigned int)arg1;
- (void)setMinPixelPosition:(struct GTPoint2D { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMinSampleID:(unsigned int)arg1;
- (void)setRenderTargetArrayIndex:(unsigned int)arg1;

@end
