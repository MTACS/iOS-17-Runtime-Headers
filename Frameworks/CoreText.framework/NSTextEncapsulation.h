
@interface NSTextEncapsulation : NSObject <NSCopying, NSSecureCoding> {
    UIColor * color;
    double  lineWeight;
    double  minimumWidth;
    unsigned long long  platterSize;
    unsigned long long  scale;
    unsigned long long  shape;
    unsigned long long  style;
}

@property (copy) UIColor *color;
@property double lineWeight;
@property double minimumWidth;
@property unsigned long long platterSize;
@property unsigned long long scale;
@property unsigned long long shape;
@property unsigned long long style;

+ (bool)supportsSecureCoding;

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShape:(unsigned long long)arg1;
- (double)lineWeight;
- (double)minimumWidth;
- (unsigned long long)platterSize;
- (unsigned long long)scale;
- (void)setColor:(id)arg1;
- (void)setLineWeight:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setPlatterSize:(unsigned long long)arg1;
- (void)setScale:(unsigned long long)arg1;
- (void)setShape:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)shape;
- (unsigned long long)style;

@end
