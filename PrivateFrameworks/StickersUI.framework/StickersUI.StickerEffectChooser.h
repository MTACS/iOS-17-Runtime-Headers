
@interface StickersUI.StickerEffectChooser : UIView {
    void animatesSelectionChanges;
    void delegate;
    void effectViews;
    void effects;
    void highlightView;
    void image;
    void isExpanded;
    void isPaused;
    void labels;
    void selectedEffectIndex;
    void tapGr;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;

@end
