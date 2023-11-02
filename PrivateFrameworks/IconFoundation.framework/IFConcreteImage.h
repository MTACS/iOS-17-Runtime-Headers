
@interface IFConcreteImage : IFImage {
    struct CGImage { } * _CGImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _validationFlags;
}

- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)_CGImage;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 placeholder:(bool)arg4;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 placeholder:(bool)arg4 iconSize:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 placeholder:(bool)arg3;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)placeholder;
- (double)scale;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setValidationFlags:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)validationFlags;

@end
