
@interface SFDomainLabel : UIView {
    bool  _attributedStringNeedsUpdate;
    UILabel * _label;
    bool  _secure;
    NSString * _text;
}

@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_makeAttributedString;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithText:(id)arg1 isSecure:(bool)arg2;
- (bool)isSecure;
- (void)setText:(id)arg1 isSecure:(bool)arg2;
- (id)text;

@end
