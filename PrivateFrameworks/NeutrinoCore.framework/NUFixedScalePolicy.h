
@interface NUFixedScalePolicy : NSObject <NUScalePolicy> {
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct { long long x1; long long x2; } scale;
@property (readonly) Class superclass;

+ (id)oneToOneScalePolicy;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithScale:(struct { long long x1; long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; long long x2; })scale;
- (struct { long long x1; long long x2; })scaleForImageSize:(struct { long long x1; long long x2; })arg1;

@end
