
@interface _UIVectorTextLayoutParameters : NSObject <NSCopying, _UIVectorTextLayoutParameters> {
    NSAttributedString * _attributedText;
    long long  _lineBreakMode;
    unsigned long long  _numberOfLines;
    UITraitCollection * _traitCollection;
    struct CGSize { 
        double width; 
        double height; 
    }  _withinSize;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) unsigned long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize { double x1; double x2; } withinSize;

+ (id)parametersSuitableForView:(id)arg1;

- (void).cxx_destruct;
- (void)_copyFromParameters:(id)arg1;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithParameters:(id)arg1;
- (bool)isEqualToParameters:(id)arg1;
- (long long)lineBreakMode;
- (unsigned long long)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)traitCollection;
- (struct CGSize { double x1; double x2; })withinSize;

@end
