
@interface CKConversationListTypingIndicatorView : UIView {
    bool  _flipForRTLLayout;
    bool  _highlightedState;
    bool  _isDarkAqua;
    double  _typingIndicatorScale;
    CKConversationListTypingIndicatorLayer * _typingLayer;
}

@property (nonatomic) bool flipForRTLLayout;
@property (getter=isHighlighted, nonatomic) bool highlightedState;
@property (nonatomic) bool isDarkAqua;
@property (nonatomic) double typingIndicatorScale;
@property (nonatomic, retain) CKConversationListTypingIndicatorLayer *typingLayer;

- (void).cxx_destruct;
- (void)_updateTypingLayerTransform;
- (void)destroyTypingLayer;
- (bool)flipForRTLLayout;
- (id)init;
- (bool)isDarkAqua;
- (bool)isHighlighted;
- (void)resetTypingLayer;
- (void)setFlipForRTLLayout:(bool)arg1;
- (void)setHighlightedState:(bool)arg1;
- (void)setIsDarkAqua:(bool)arg1;
- (void)setTypingIndicatorScale:(double)arg1;
- (void)setTypingLayer:(id)arg1;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)stopAnimation;
- (double)typingIndicatorScale;
- (id)typingLayer;

@end
