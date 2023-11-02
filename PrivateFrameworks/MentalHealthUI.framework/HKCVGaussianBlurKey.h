
@interface HKCVGaussianBlurKey : NSObject <NSCopying> {
    unsigned long long  _identifier;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _textureSize;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(unsigned long long)arg1 textureSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (bool)isEqual:(id)arg1;

@end
