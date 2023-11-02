
@interface TPKBaseContentView : UIView {
    void content;
    void contentViewBackgroundColor;
    void directionalEdgeInsets;
    void hostingView;
    void viewDelegate;
    void viewModel;
}

@property (nonatomic, retain) TPKContent *content;
@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } defaultDirectionalEdgeInsets;
@property (nonatomic, retain) UIView *hostingView;
@property (nonatomic) <TPKContentViewDelegate> *viewDelegate;

- (void).cxx_destruct;
- (id)content;
- (id)contentBackgroundColor;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)createHostingView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })defaultDirectionalEdgeInsets;
- (void)deviceOrientationDidChange:(id)arg1;
- (id)hostingView;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 content:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReusableTipView:(id)arg1;
- (void)monitorContentSizeCategoryChanges;
- (void)resetHostingView;
- (void)setContent:(id)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setDefaultDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHostingView:(id)arg1;
- (void)setViewDelegate:(id)arg1;
- (void)setupHostingViewWithController:(id)arg1 content:(id)arg2;
- (void)updateContentBackgroundColor:(id)arg1;
- (void)updatePreferredDirectionEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)viewDelegate;
- (void)willMoveToWindow:(id)arg1;

@end
