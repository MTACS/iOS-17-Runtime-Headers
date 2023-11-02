
@interface __NSTextAppearanceEffectContext : NSObject {
    CUICatalog * _catalog;
    UIColor * _color;
    CUIStyleEffectConfiguration * _effectConfiguration;
    NSString * _effectName;
    UIFont * _font;
}

- (void)dealloc;
- (void)drawGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(long long)arg3 context:(struct CGContext { }*)arg4;
- (id)initWithTextEffectName:(id)arg1 catalog:(id)arg2 styleEffectConfiguration:(id)arg3 font:(id)arg4 color:(id)arg5 applicationFrameworkContext:(long long)arg6 useSimplifiedEffect:(bool)arg7;

@end
