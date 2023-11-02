
@interface SBFolderContainerView : SBFTouchPassThroughView {
    UIView * _backgroundView;
    SBFolderContainerView * _childFolderContainerView;
    SBFolderView * _folderView;
    double  _statusBarHeight;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) SBFolderContainerView *childFolderContainerView;
@property (nonatomic, readonly) SBFolderView *folderView;
@property (nonatomic) double statusBarHeight;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFolderView:(id)arg1;
- (id)backgroundView;
- (id)childFolderContainerView;
- (id)folderView;
- (id)initWithFolderView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setChildFolderContainerView:(id)arg1;
- (void)setStatusBarHeight:(double)arg1;
- (double)statusBarHeight;

@end
