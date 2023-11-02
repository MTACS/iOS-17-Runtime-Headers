
@interface _PXStoryScrubberClipViewConfiguration : PXGFocusEffectViewConfiguration {
    bool  _isCurrent;
    long long  _segmentIdentifier;
    bool  _shouldAdjustContent;
}

@property (nonatomic) bool isCurrent;
@property (nonatomic) long long segmentIdentifier;
@property (nonatomic) bool shouldAdjustContent;

- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1;
- (bool)isCurrent;
- (bool)isEqual:(id)arg1;
- (long long)segmentIdentifier;
- (void)setIsCurrent:(bool)arg1;
- (void)setSegmentIdentifier:(long long)arg1;
- (void)setShouldAdjustContent:(bool)arg1;
- (bool)shouldAdjustContent;

@end
