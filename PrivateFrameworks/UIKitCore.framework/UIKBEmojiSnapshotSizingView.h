
@interface UIKBEmojiSnapshotSizingView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _snapshotSize;
    UIView * _snapshotView;
}

@property (nonatomic, readonly) UIView *snapshotView;

- (void).cxx_destruct;
- (id)initWithSnapshotView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)snapshotView;

@end
