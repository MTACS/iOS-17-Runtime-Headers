
@interface PhotosUICore.ValueDrivingScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    void numberOfPages;
    void scrollContentLayout;
    void scrollHandler;
    void targetPosition;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentLayout:(id)arg1;
- (void)isScrollingDidChange;
- (void)scrollLayoutDidScroll:(id)arg1;
- (void)scrollLayoutWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;

@end
