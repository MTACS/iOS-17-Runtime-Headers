
@interface PXStoryTVWatchNextCellConfiguration : PXGFocusEffectViewConfiguration {
    long long  _countdownValue;
    long long  _maximumCountdownValue;
    PXStoryTVCellSpec * _spec;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) long long countdownValue;
@property (nonatomic) long long maximumCountdownValue;
@property (nonatomic, retain) PXStoryTVCellSpec *spec;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countdownValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maximumCountdownValue;
- (void)setCountdownValue:(long long)arg1;
- (void)setMaximumCountdownValue:(long long)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)spec;
- (id)subtitle;
- (id)title;

@end
