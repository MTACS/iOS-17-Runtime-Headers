
@interface PBUIColorBoxes : NSObject <NSSecureCoding> {
    struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } * _colorBoxesRowMajor;
    unsigned long long  _columnCount;
    unsigned long long  _downsampledBoxSize;
    unsigned long long  _effectiveDownsampleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    unsigned long long  _rowCount;
    unsigned long long  _size;
    unsigned char  _totalContrast8;
}

+ (id)colorBoxesForImage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
