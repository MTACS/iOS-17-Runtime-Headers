
@interface HKElectrocardiogramTableViewCell : UITableViewCell {
    NSLayoutConstraint * _bottomPaddingConstraint;
    bool  _bottomPaddingDisabled;
    HKElectrocardiogramCardView * _cardView;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomPaddingConstraint;
@property (nonatomic) bool bottomPaddingDisabled;
@property (nonatomic, retain) HKElectrocardiogramCardView *cardView;
@property (nonatomic, retain) HKElectrocardiogram *sample;

+ (id)defaultReuseIdentifier;
+ (double)estimatedHeight;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupUIWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(bool)arg3 activeAlgorithmVersion:(long long)arg4;
- (id)bottomPaddingConstraint;
- (bool)bottomPaddingDisabled;
- (id)cardView;
- (id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(bool)arg3 activeAlgorithmVersion:(long long)arg4;
- (void)prepareForReuse;
- (id)sample;
- (void)setActiveAlgorithmVersion:(long long)arg1;
- (void)setBottomPaddingConstraint:(id)arg1;
- (void)setBottomPaddingDisabled:(bool)arg1;
- (void)setCardView:(id)arg1;
- (void)setSample:(id)arg1;

@end
