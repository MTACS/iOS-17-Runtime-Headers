
@interface NUVisionSegmentationRequest : NURenderRequest {
    bool  _produceConfidenceMap;
    <NUScalePolicy> * _scalePolicy;
    long long  _segmentationType;
    long long  _visionSegmentationPolicy;
}

@property (nonatomic) bool produceConfidenceMap;
@property (nonatomic, retain) <NUScalePolicy> *scalePolicy;
@property (nonatomic) long long segmentationType;
@property (nonatomic) long long visionSegmentationPolicy;

+ (void)warmUp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (bool)produceConfidenceMap;
- (id)scalePolicy;
- (long long)segmentationType;
- (void)setProduceConfidenceMap:(bool)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)setSegmentationType:(long long)arg1;
- (void)setVisionSegmentationPolicy:(long long)arg1;
- (void)submit:(id /* block */)arg1;
- (long long)visionSegmentationPolicy;

@end
