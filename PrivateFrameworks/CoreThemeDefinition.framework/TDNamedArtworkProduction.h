
@interface TDNamedArtworkProduction : TDSimpleArtworkElementProduction {
    bool  _hasCustomDateOfLastChange;
}

@property (nonatomic) bool hasCustomDateOfLastChange;

- (bool)hasCustomDateOfLastChange;
- (void)processRendition:(id)arg1 withBackstop:(id)arg2;
- (void)setDateOfLastChange:(id)arg1;
- (void)setHasCustomDateOfLastChange:(bool)arg1;

@end
