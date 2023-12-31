
@interface CKTransientReplicaButtonContainer : UIView {
    UIView * _cancelButtonCircle;
    CALayer * _cancelButtonGlyphLayer;
    UIView * _sendButtonCircle;
    CALayer * _sendButtonGlyphLayer;
}

@property (nonatomic, readonly) UIView *cancelButtonCircle;
@property (nonatomic, readonly) CALayer *cancelButtonGlyphLayer;
@property (nonatomic, readonly) UIView *sendButtonCircle;
@property (nonatomic, readonly) CALayer *sendButtonGlyphLayer;

- (void).cxx_destruct;
- (id)_glyphLayerForButtonAnimationWithImage:(id)arg1;
- (id)_invertedCircularFillGlyph:(id)arg1;
- (id)cancelButtonCircle;
- (id)cancelButtonGlyphLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hasDarkVibrancy:(bool)arg2 isInDarkMode:(bool)arg3 color:(id)arg4 sendColor:(BOOL)arg5;
- (id)sendButtonCircle;
- (id)sendButtonGlyphLayer;

@end
