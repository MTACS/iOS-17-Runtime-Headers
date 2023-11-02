
@interface TeaUI.SectionSelectorView : UIView <UIScrollViewDelegate> {
    void buttons;
    void dataSource;
    void defaultInset;
    void delegate;
    void height;
    void highlightedTextAlpha;
    void maxWidth;
    void minWidth;
    void scrollView;
    void selectedButtonFont;
    void selectedIndex;
    void selectedTextAlpha;
    void spacing;
    void textAlpha;
    void textColor;
    void unselectedButtonFont;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;

@end
