
@interface MFPBlurEffect : MFPEffect {
    bool  mExpandEdge;
    float  mRadius;
}

+ (id)GUID;

- (id)initWithRadius:(float)arg1 expandEdge:(bool)arg2;

@end
