
@interface TPKTipContentAnnotationView : TPKContentView {
    void $__lazy_storage_$_arrowDirection;
    void $__lazy_storage_$_bubbleView;
    void $__lazy_storage_$_hostingRect;
    void $__lazy_storage_$_hostingViewNeedsReset;
    void $__lazy_storage_$_sourceCenter;
    void sourceType;
    void sourceView;
}

@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, retain) TPKTipContentAnnotationBubbleView *bubbleView;

- (void).cxx_destruct;
- (void)annotationViewNeedsLayout;
- (unsigned long long)arrowDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)bubbleView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2 sourceBarButtonItem:(id)arg3;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2 sourceView:(id)arg3;
- (id)initWithController:(id)arg1 content:(id)arg2;
- (id)initWithReusableTipView:(id)arg1;
- (void)layoutSubviews;
- (void)resetHostingView;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBubbleView:(id)arg1;
- (void)updateContentBackgroundColor:(id)arg1;

@end
