
@interface SUImageDataProvider : ISDataProvider <NSCopying> {
    UIColor * _fillColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _finalSize;
    double  _inputImageScale;
    SUImageModifier * _modifier;
}

@property (retain) UIColor *fillColor;
@property struct CGSize { double x1; double x2; } finalSize;
@property double inputImageScale;
@property (retain) SUImageModifier *modifier;

- (void)_getFinalSize:(struct CGSize { double x1; double x2; }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forImage:(id)arg3 withModifier:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fillColor;
- (struct CGSize { double x1; double x2; })finalSize;
- (unsigned long long)hash;
- (double)inputImageScale;
- (bool)isEqual:(id)arg1;
- (id)modifier;
- (id)newImageFromImage:(id)arg1;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFinalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInputImageScale:(double)arg1;
- (void)setModifier:(id)arg1;

@end