
@interface BSUIVibrancyView : UIView {
    BSUIVibrancyConfiguration * _configuration;
    struct { 
        bool resolvedEffectType; 
        bool effectFilterViews; 
    }  _needsUpdate;
}

@property (nonatomic, copy) BSUIVibrancyConfiguration *configuration;

+ (bool)isDisabled;

- (void).cxx_destruct;
- (void)_invalidateFilters;
- (void)_update;
- (void)_updateFilterViewsIfNeeded;
- (id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateSubviews;
- (void)layoutSubviews;
- (void)setConfiguration:(id)arg1;
- (void)updateFilters;

@end
