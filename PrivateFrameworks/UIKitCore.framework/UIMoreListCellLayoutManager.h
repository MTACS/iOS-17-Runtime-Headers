
@interface UIMoreListCellLayoutManager : UITableViewCellLayoutManager {
    double  _widestImageWidth;
}

- (void)layoutSubviewsOfCell:(id)arg1;
- (double)setWidestImageWidthFromViewControllers:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })standardLayoutImageViewFrameForCell:(id)arg1 forSizing:(bool)arg2;

@end
