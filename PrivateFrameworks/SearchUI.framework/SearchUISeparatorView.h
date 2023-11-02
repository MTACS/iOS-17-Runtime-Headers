
@interface SearchUISeparatorView : TLKProminenceView {
    double  _separatorHeight;
}

@property (nonatomic) double separatorHeight;

+ (id)separatorColorForAppearance:(id)arg1;
+ (unsigned long long)separatorProminenceForAppearance:(id)arg1;

- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)separatorHeight;
- (void)setSeparatorHeight:(double)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
