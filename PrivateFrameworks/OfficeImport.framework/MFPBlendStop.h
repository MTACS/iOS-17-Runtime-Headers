
@interface MFPBlendStop : NSObject {
    float  mFactor;
    float  mPosition;
}

- (float)factor;
- (id)initWithFactor:(float)arg1 position:(float)arg2;
- (float)position;

@end
