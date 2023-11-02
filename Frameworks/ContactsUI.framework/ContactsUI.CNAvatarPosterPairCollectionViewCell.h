
@interface ContactsUI.CNAvatarPosterPairCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate> {
    void defaultScrollAnimationDuration;
    void delegate;
    void maximumRevealProgressWhenRevealingDisallowed;
    void maximumVerticalRevealFraction;
    void scrollView;
    void scrollableContentView;
    void showShadow;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;

@end
