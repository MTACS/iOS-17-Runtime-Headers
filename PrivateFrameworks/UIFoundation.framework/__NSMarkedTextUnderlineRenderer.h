
@interface __NSMarkedTextUnderlineRenderer : NSObject {
    <NSTextGraphicsContext> * _graphicsContext;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    NSTextRange * _selectedTextRange;
    NSTextLineFragment * _textLineFragment;
    NSTextRange * _textRange;
    UIColor * _underlineColor;
    unsigned long long  _underlineStyle;
    double  _underlineThickness;
}

- (void)_renderUnderlineInTextRange:(id)arg1 alphaValue:(double)arg2;
- (void)dealloc;

@end
