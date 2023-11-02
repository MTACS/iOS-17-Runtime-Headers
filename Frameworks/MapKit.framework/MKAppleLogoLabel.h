
@interface MKAppleLogoLabel : UIView <MKAppleLogoView> {
    NSAttributedString * _innerText;
    NSAttributedString * _strokeText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initForMapType:(unsigned long long)arg1 forDarkMode:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForMapType:(unsigned long long)arg1 darkMode:(bool)arg2;

@end
