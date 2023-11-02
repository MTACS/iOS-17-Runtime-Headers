
@interface RemoteUI.ImageElement : RUIElement {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _image;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _imageSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tintColor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  baseURL;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (id)sourceURL;

@end
