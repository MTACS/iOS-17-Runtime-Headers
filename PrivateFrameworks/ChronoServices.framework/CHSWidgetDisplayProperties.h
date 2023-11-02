
@interface CHSWidgetDisplayProperties : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _colorGamut;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) unsigned long long colorGamut;
@property (nonatomic, readonly) double scale;

+ (bool)supportsSecureCoding;

- (unsigned long long)colorGamut;
- (long long)comparedTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackDisplayProperties;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScale:(double)arg1 colorGamut:(unsigned long long)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 colorGamut:(unsigned long long)arg3;
- (id)initWithWidgetDisplayProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
