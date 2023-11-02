
@interface PKMetalView : UIView {
    CABackdropLayer * _backdropLayer;
    bool  _doubleBuffered;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedPixelSize;
    bool  _isFixedPixelSize;
    CAMetalLayer * _metalLayer;
    unsigned long long  _pixelFormat;
    bool  _useLuminanceColorFilter;
}

- (void).cxx_destruct;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;

@end
