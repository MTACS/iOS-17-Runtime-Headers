
@interface WebDeviceOrientation : NSObject {
    WebDeviceOrientationInternal * m_internal;
}

- (void)dealloc;
- (id)initWithCanProvideAlpha:(bool)arg1 alpha:(double)arg2 canProvideBeta:(bool)arg3 beta:(double)arg4 canProvideGamma:(bool)arg5 gamma:(double)arg6;
- (id)initWithCoreDeviceOrientation:(void*)arg1;

@end
