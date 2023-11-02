
@protocol VFXRERenderTargetInfo <NSObject>

@required

- (unsigned long long)colorPixelFormatAtIndex:(long long)arg1;
- (unsigned long long)depthStencilPixelFormat;
- (long long)sampleCount;
- (bool)vrrEnabled;

@optional

- (unsigned long long)depthPixelFormat;
- (unsigned long long)stencilPixelFormat;

@end
