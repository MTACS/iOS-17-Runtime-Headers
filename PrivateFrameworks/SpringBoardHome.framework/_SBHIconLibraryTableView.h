
@interface _SBHIconLibraryTableView : UITableView {
    SBFFeatherBlurView * _headerBlur;
}

@property (nonatomic, retain) SBFFeatherBlurView *headerBlur;

- (void).cxx_destruct;
- (id)headerBlur;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)setHeaderBlur:(id)arg1;

@end
