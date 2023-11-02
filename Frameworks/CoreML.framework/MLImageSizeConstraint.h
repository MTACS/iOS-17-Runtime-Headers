
@interface MLImageSizeConstraint : NSObject <NSSecureCoding> {
    NSOrderedSet * _imageSizeSet;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pixelsHighRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pixelsWideRange;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *enumeratedImageSizes;
@property (nonatomic, readonly) NSOrderedSet *imageSizeSet;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } pixelsHighRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } pixelsWideRange;
@property (nonatomic, readonly) long long type;

+ (id)closestImageSizeInArray:(id)arg1 toImageSize:(id)arg2 preferDownScaling:(bool)arg3;
+ (id)closestImageSizeInPixelsWideRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 pixelsHighRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toImageSize:(id)arg3 preferInputAspectRatio:(bool)arg4;
+ (unsigned long long)locationClosestTo:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedImageSizeClosestToPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 preferDownScaling:(bool)arg3 preferInputAspectRatio:(bool)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratedImageSizes;
- (id)imageSizeSet;
- (id)initUnspecified;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnumeratedImageSizes:(id)arg1;
- (id)initWithPixelsWideRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 pixelsHighRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isAllowedImageSize:(id)arg1 error:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pixelsHighRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pixelsWideRange;
- (long long)type;

@end
