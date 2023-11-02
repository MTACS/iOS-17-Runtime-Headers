
@interface ICDocCamZoomablePageContentImageView : UIImageView {
    <ICDocCamZoomablePageContentViewDelegate> * _pageContentViewDelegate;
}

@property (nonatomic) <ICDocCamZoomablePageContentViewDelegate> *pageContentViewDelegate;

- (void).cxx_destruct;
- (bool)_accessibilityRespondsToUserInteraction;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pageContentViewDelegate;
- (void)setPageContentViewDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
