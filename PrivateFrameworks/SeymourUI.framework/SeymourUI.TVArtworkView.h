
@interface SeymourUI.TVArtworkView : SMUTVStackedImageView {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  artwork;
    void completedIconView;
    void flipsContentForRightToLeftDirection;
    void iconConstraints;
    void layout;
    void layoutHandler;
    void recencyIconView;
    void shelfArtworkIconSafeAreaInsets;
    void stackIconView;
    void stackedOverlayView;
    void style;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;

@end
