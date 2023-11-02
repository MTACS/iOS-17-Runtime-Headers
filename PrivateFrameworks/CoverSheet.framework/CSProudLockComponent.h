
@interface CSProudLockComponent : CSComponent

@property (nonatomic) long long optOutOfAlphaFadesForPageScroll;
@property (nonatomic) bool prefersInlineCoaching;
@property (nonatomic) bool shouldResideInALowerSubview;

- (id)init;
- (long long)optOutOfAlphaFadesForPageScroll;
- (id)optOutOfAlphaFadesForPageScroll:(long long)arg1;
- (bool)prefersInlineCoaching;
- (id)prefersInlineCoaching:(bool)arg1;
- (void)setOptOutOfAlphaFadesForPageScroll:(long long)arg1;
- (void)setPrefersInlineCoaching:(bool)arg1;
- (void)setShouldResideInALowerSubview:(bool)arg1;
- (bool)shouldResideInALowerSubview;
- (id)shouldResideInALowerSubview:(bool)arg1;

@end
