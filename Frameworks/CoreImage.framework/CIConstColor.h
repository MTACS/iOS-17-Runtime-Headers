
@interface CIConstColor : CIColor

+ (id)alloc;

- (double)alpha;
- (id)autorelease;
- (double)blue;
- (struct CGColor { }*)cgColor;
- (struct CGColorSpace { }*)colorSpace;
- (const double*)components;
- (void)dealloc;
- (double)green;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfComponents;
- (double)red;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (struct CGColor { }*)rgbColor;

@end
