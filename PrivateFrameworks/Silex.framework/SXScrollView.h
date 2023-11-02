
@interface SXScrollView : TSDScrollView <SXAXElementOccluder> {
    SXAXCustomRotorProvider * _customRotorProvider;
    <SXScrollViewDelegate> * _scrollViewDelegate;
}

@property (nonatomic, retain) SXAXCustomRotorProvider *customRotorProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBouncing;
@property (nonatomic) <SXScrollViewDelegate> *scrollViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_accessibilityScrollingEnabled;
- (id)accessibilityCustomRotors;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (id)customRotorProvider;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBouncing;
- (id)scrollViewDelegate;
- (void)setCustomRotorProvider:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (bool)shouldOccludeAccessibilityElement:(id)arg1;

@end
