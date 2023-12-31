
@interface PKPerformActionPassView : PKPerformActionBackdropView {
    PKPass * _pass;
    UIImageView * _passView;
    PKPassSnapshotter * _snapshotter;
}

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_loadSnapshotView;
- (struct CGSize { double x1; double x2; })_passImageSize;
- (void)configureWithPass:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)init;
- (id)initWithPass:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutSubviews;
- (void)shakeImage;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)smallShakeImage;

@end
