
@interface FRCFrameMetadata : NSObject {
    unsigned long long  _originalPTSInNanos;
    unsigned long long  _ptsInNanos;
    long long  _sequenceAdjusterDisplacement;
    unsigned long long  _sequenceAdjusterRecipe;
}

@property (nonatomic) unsigned long long originalPTSInNanos;
@property (nonatomic) unsigned long long ptsInNanos;
@property (nonatomic) long long sequenceAdjusterDisplacement;
@property (nonatomic) unsigned long long sequenceAdjusterRecipe;

- (unsigned long long)originalPTSInNanos;
- (unsigned long long)ptsInNanos;
- (long long)sequenceAdjusterDisplacement;
- (unsigned long long)sequenceAdjusterRecipe;
- (void)setOriginalPTSInNanos:(unsigned long long)arg1;
- (void)setPtsInNanos:(unsigned long long)arg1;
- (void)setSequenceAdjusterDisplacement:(long long)arg1;
- (void)setSequenceAdjusterRecipe:(unsigned long long)arg1;

@end
