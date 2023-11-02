
@interface IFPlaceholderImage : IFImage {
    IFImage * _image;
    unsigned long long  _validationFlags;
}

@property (readonly) IFImage *image;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)image;
- (id)initWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)placeholder;
- (double)scale;
- (void)setPlaceholder:(bool)arg1;
- (void)setValidationFlags:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)validationFlags;
- (id)validationToken;

@end
