
@interface CoreIDVUI.SelfSizingTableView : UITableView {
    void maxHeight;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (struct CGSize { double x1; double x2; })contentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
