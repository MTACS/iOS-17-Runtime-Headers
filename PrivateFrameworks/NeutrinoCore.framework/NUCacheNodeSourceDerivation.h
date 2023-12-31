
@interface NUCacheNodeSourceDerivation : NSObject <NUSourceDerivation> {
    long long  _subsampleFactor;
}

- (id)init;
- (id)initWithSubsampleFactor:(long long)arg1;
- (long long)orientationFromOriginal:(long long)arg1 derivativeOrientation:(long long)arg2;
- (struct { long long x1; long long x2; })scaleFromOriginalSize:(struct { long long x1; long long x2; })arg1 derivativeSize:(struct { long long x1; long long x2; })arg2;

@end
