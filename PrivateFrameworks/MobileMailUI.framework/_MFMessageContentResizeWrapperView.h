
@interface _MFMessageContentResizeWrapperView : UIView {
    UIView * _snapshotView;
    double  _snapshotViewYOrigin;
}

@property (nonatomic, retain) UIView *snapshotView;
@property (nonatomic) double snapshotViewYOrigin;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 snapshotView:(id)arg2;
- (void)layoutSubviews;
- (void)setSnapshotView:(id)arg1;
- (void)setSnapshotViewYOrigin:(double)arg1;
- (id)snapshotView;
- (double)snapshotViewYOrigin;

@end
