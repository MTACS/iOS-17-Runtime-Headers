
@interface MIOImageSizeConstraint : NSObject {
    NSArray * _enumeratedImageSizes;
    struct _MIORange { 
        long long lowerBound; 
        long long upperBound; 
    }  _pixelsHighRange;
    struct _MIORange { 
        long long lowerBound; 
        long long upperBound; 
    }  _pixelsWideRange;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *enumeratedImageSizes;
@property (nonatomic, readonly) struct _MIORange { long long x1; long long x2; } pixelsHighRange;
@property (nonatomic, readonly) struct _MIORange { long long x1; long long x2; } pixelsWideRange;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)allowsImageSize:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enumeratedImageSizes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEnumeratedImageSizes:(id)arg1;
- (id)initWithPixelsWideRange:(struct _MIORange { long long x1; long long x2; })arg1 pixelsHighRange:(struct _MIORange { long long x1; long long x2; })arg2;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (struct _MIORange { long long x1; long long x2; })pixelsHighRange;
- (struct _MIORange { long long x1; long long x2; })pixelsWideRange;
- (long long)type;

@end
