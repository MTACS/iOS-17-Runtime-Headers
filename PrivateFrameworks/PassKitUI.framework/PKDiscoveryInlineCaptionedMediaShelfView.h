
@interface PKDiscoveryInlineCaptionedMediaShelfView : PKDiscoveryShelfView {
    PKDiscoveryInlineMediaCaptionView * _captionView;
    bool  _isInline;
    double  _leadingSpace;
    PKDiscoveryMedia * _media;
    UIView * _mediaContainerView;
    UIView * _mediaView;
    PKDiscoveryInlineMediaShelf * _shelf;
}

- (void).cxx_destruct;
- (id)initWithShelf:(id)arg1 mediaView:(id)arg2;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
