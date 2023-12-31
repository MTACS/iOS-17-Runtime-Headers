
@interface CRKKeyline : UIView {
    long long  _direction;
    UIView * _keylineView;
    long long  _type;
    unsigned long long  _visualEffectStyle;
}

@property (readonly) long long direction;
@property (readonly) long long type;
@property (readonly) unsigned long long visualEffectStyle;

- (void).cxx_destruct;
- (id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1;
- (double)_roundedKeylineThickness;
- (double)defaultKeylineInsetForCurrentDevice;
- (long long)direction;
- (id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)type;
- (unsigned long long)visualEffectStyle;

@end
