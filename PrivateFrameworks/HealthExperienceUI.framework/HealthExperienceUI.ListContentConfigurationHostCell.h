
@interface HealthExperienceUI.ListContentConfigurationHostCell : UICollectionViewListCell {
    void baseIdentifier;
    void configurationProvider;
    void currentViewModel;
    void item;
    void parentViewController;
    void providedViewContext;
}

@property (nonatomic) long long tintAdjustmentMode;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTintAdjustmentMode:(long long)arg1;
- (long long)tintAdjustmentMode;

@end
