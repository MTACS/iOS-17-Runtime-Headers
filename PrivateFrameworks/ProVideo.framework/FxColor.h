
@interface FxColor : NSObject <NSCoding> {
    void * _pad;
    void * _priv;
}

+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithString:(id)arg1;

- (struct CGColor { }*)_cgColor;
- (double)alpha;
- (double)blue;
- (id)ciColor;
- (struct CGColorSpace { }*)colorSpace;
- (const double*)components;
- (void)convertToRGBA:(double*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)green;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithString:(id)arg1;
- (unsigned long long)numberOfComponents;
- (double)red;
- (id)stringRepresentation;

@end
