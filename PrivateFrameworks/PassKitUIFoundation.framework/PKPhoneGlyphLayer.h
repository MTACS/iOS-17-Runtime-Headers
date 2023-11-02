
@interface PKPhoneGlyphLayer : PKMicaLayer {
    CAFilter * _QRCodeColorFilter;
    CALayer * _QRCodeLayer;
    CALayer * _highlightLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightOffscreenPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _highlightOnscreenPosition;
    NSString * _phoneWiggleAnimationKey;
    struct CGColor { } * _primaryColor;
    bool  _showQRCode;
}

@property (nonatomic) bool showQRCode;

- (void).cxx_destruct;
- (void)_applyEffectivePrimaryColorToQRCodeAnimated:(bool)arg1;
- (void)_endPhoneWiggle;
- (void)_restartPhoneWiggleIfNecessary;
- (void)_startPhoneWiggle;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 package:(id)arg2;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPrimaryColor:(struct CGColor { }*)arg1 animated:(bool)arg2;
- (void)setShowQRCode:(bool)arg1;
- (bool)showQRCode;

@end
