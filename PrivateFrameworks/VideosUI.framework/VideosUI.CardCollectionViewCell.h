
@interface VideosUI.CardCollectionViewCell : VUIFloatingCollectionViewCell {
    void cardView;
    void cardViewLayout;
    void imageViewModel;
    void isLockupOutlined;
    void isLockupSelected;
    void isLockupSelectionHidden;
    void syndicationId;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)dragStateDidChange:(long long)arg1;
- (void)imageViewHandler:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;

@end
