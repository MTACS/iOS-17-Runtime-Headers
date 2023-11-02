
@interface SNKShotSegmentationResult : NSObject {
    void impl;
}

@property (nonatomic, retain) MLMultiArray *exemplarEmbedding;
@property (nonatomic, retain) NSNumber *exemplarIndex;
@property (nonatomic, copy) NSArray *segments;

- (void).cxx_destruct;
- (id)exemplarEmbedding;
- (id)exemplarIndex;
- (id)init;
- (id)segments;
- (void)setExemplarEmbedding:(id)arg1;
- (void)setExemplarIndex:(id)arg1;
- (void)setSegments:(id)arg1;

@end
