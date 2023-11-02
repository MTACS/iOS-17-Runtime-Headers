
@protocol RBParticleStroke <RBStroke>

@required

- (int)blendMode;
- (struct CGImage { }*)image;
- (unsigned long long)imageCount;
- (float)imageScale;
- (bool)rotatesImage;
- (long long)seed;

@end
