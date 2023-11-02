
@interface ABCarouselView : ABTransformView {
    NSNumber * _alphaBlend;
    double  _buttonPressProgress;
    NSNumber * _decelerationOffset;
    <ABCarouselViewDelegate> * _delegate;
    NSNumber * _dragInitialOffset;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    NSIndexSet * _indexesToApplyAlphaBlend;
    NSMutableArray * _itemViews;
    NSArray * _items;
    ABFloatSpringProperty * _offsetSpring;
    UIGestureRecognizer * _scrollGestureRecognizer;
    long long  _selectedIndex;
}

- (void).cxx_destruct;
- (void)_beginTracking;
- (id)_carouselItemViewForItem:(id)arg1 index:(long long)arg2;
- (double)_contentWidth;
- (void)_endTracking;
- (void)_handleScrollGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_itemImageViewFrameForIndex:(long long)arg1;
- (double)_itemPageWidth;
- (double)_minOffset;
- (void)_setupSubviews;
- (void)_trackDelta:(double)arg1;
- (void)layoutSubviews;

@end
