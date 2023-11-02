
@interface LPCaptionBarButtonView : LPComponentView {
    UIButton * _button;
    bool  _collapsed;
    UIButton * _collapsedButton;
    LPCircularProgressIndicator * _progressIndicator;
    LPCaptionButtonPresentationProperties * _properties;
    UISegmentedControl * _segmentedControl;
    LPButtonStyle * _style;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;

- (void).cxx_destruct;
- (bool)_menuButtonShowsChevron;
- (bool)_menuButtonShowsImages;
- (bool)_menuButtonShowsIndicator;
- (bool)_menuButtonShowsSingleImage;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { double x1; double x2; })collapsedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)configureMenuButton:(id)arg1;
- (void)configurePillButton:(id)arg1;
- (void)configureSegmentedControl:(id)arg1;
- (id)createButton;
- (id)createCollapsedButton;
- (id)createMenu;
- (void)createProgressIndicator;
- (id)createSegmentedControl;
- (id)createUIActionsFromLPActionsWithHandler:(id /* block */)arg1;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 properties:(id)arg2 style:(id)arg3;
- (bool)isCollapsed;
- (void)layoutComponentView;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)selectAndPerformAction:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (bool)shouldShowDownloadingIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateProgressIndicator;

@end
