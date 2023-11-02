
@protocol PLExpandedPlatter <PLPlatter>

@required

- (struct CGSize { double x1; double x2; })actionsSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)clipsVisibleContentToBounds;
- (double)contentBottomInset;
- (struct CGSize { double x1; double x2; })contentSizeExcludingActions;
- (struct CGSize { double x1; double x2; })customContentSize;
- (UIControl *)dismissControl;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dismissControlInsets;
- (long long)dismissControlPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPlatterFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSArray *)interfaceActions;
- (bool)isActionsHidden;
- (bool)isDismissControlEnabled;
- (bool)isHeaderEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumScrollViewContentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })platterFrameForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UIScrollView *)scrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewFrame;
- (void)setActionsHidden:(bool)arg1;
- (void)setClipsVisibleContentToBounds:(bool)arg1;
- (void)setContentBottomInset:(double)arg1;
- (void)setCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDismissControlEnabled:(bool)arg1;
- (void)setDismissControlPosition:(long long)arg1;
- (void)setHeaderEnabled:(bool)arg1;
- (void)setInterfaceActions:(NSArray *)arg1;
- (struct CGSize { double x1; double x2; })sizeExcludingActions;

@end
