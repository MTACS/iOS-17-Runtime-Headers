
@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView {
    <HUDashboardNavigationTitleViewDelegate> * _delegate;
    double  _previousLargeTitleHeight;
}

@property (nonatomic) <HUDashboardNavigationTitleViewDelegate> *delegate;
@property (nonatomic) double previousLargeTitleHeight;

- (void).cxx_destruct;
- (void)contentDidChange;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (double)previousLargeTitleHeight;
- (void)setDelegate:(id)arg1;
- (void)setPreviousLargeTitleHeight:(double)arg1;

@end
