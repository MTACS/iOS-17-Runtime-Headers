
@interface BKUIIndicatorWindow : UIWindow {
    BKUIIndicatorViewController * _indicatorController;
    bool  _shouldShow;
}

@property (nonatomic, retain) BKUIIndicatorViewController *indicatorController;
@property (nonatomic) bool shouldShow;

+ (id)instanceWithWindowScene:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)indicatorController;
- (void)setIndicatorController:(id)arg1;
- (void)setShouldShow:(bool)arg1;
- (bool)shouldShow;

@end
