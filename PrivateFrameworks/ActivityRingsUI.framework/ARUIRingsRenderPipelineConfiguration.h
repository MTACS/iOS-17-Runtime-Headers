
@interface ARUIRingsRenderPipelineConfiguration : NSObject {
    bool  _hasEmptyRing;
    bool  _hasFilledRing;
    bool  _hasOverlappingRing;
    bool  _hasVisibleRings;
    bool  _needsAlphaReductionPass;
}

@property (nonatomic) bool hasEmptyRing;
@property (nonatomic) bool hasFilledRing;
@property (nonatomic) bool hasOverlappingRing;
@property (nonatomic) bool hasVisibleRings;
@property (nonatomic) bool needsAlphaReductionPass;

- (bool)hasEmptyRing;
- (bool)hasFilledRing;
- (bool)hasOverlappingRing;
- (bool)hasVisibleRings;
- (bool)needsAlphaReductionPass;
- (void)setHasEmptyRing:(bool)arg1;
- (void)setHasFilledRing:(bool)arg1;
- (void)setHasOverlappingRing:(bool)arg1;
- (void)setHasVisibleRings:(bool)arg1;
- (void)setNeedsAlphaReductionPass:(bool)arg1;

@end
