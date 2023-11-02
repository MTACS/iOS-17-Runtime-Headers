
@interface UIKeyboardUISnapshotView : UIView {
    UIKeyboardUISnapshot * _snapshot;
}

@property (nonatomic) UIKeyboardUISnapshot *snapshot;

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
