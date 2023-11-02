
@interface HUBaseIconView : UIView {
    void configuration;
    void configurationWrapper;
    void delegate;
    void iconConstraints;
    void progressView;
    void roundButtonView;
    void textLabel;
}

@property (nonatomic, retain) HUBaseIconViewConfiguration *configuration;
@property (nonatomic) <HUBaseIconViewDelegate> *delegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)prepareForTransitionToTargetViewState:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startTransitionToTargetViewState:(long long)arg1;
- (void)updateConstraints;

@end
