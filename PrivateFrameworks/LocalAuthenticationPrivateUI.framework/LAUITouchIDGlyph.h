
@interface LAUITouchIDGlyph : NSObject {
    LAUIPKGlyphWrapper * _glyph;
    UIImpactFeedbackGenerator * _hapticGenerator;
    long long  _state;
}

@property (nonatomic) long long state;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)shake;
- (long long)state;
- (id)view;

@end
