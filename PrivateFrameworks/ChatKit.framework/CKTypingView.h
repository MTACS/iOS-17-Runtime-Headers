
@interface CKTypingView : UIView {
    CKBaseLayer * _baseLayer;
    CALayer<CKTypingIndicatorLayerProtocol> * _indicatorLayer;
}

@property (nonatomic, retain) CKBaseLayer *baseLayer;
@property (nonatomic, retain) CALayer<CKTypingIndicatorLayerProtocol> *indicatorLayer;

- (void).cxx_destruct;
- (id)baseLayer;
- (id)indicatorLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBaseLayer:(id)arg1;
- (void)setIndicatorLayer:(id)arg1;

@end
