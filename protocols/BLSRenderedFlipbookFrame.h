
@protocol BLSRenderedFlipbookFrame <NSObject>

@required

- (float)apl;
- (float)aplDimming;
- (NSString *)bls_loggingString;
- (NSString *)bls_shortLoggingString;
- (<BLSPresentationDateSpecifying> *)bls_specifier;
- (NSUUID *)bls_uuid;
- (unsigned long long)frameId;
- (bool)isInverted;
- (unsigned long long)memoryUsage;
- (unsigned long long)presentationTime;
- (struct __IOSurface { }*)rawSurface;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rawSurfaceFrame;
- (struct __IOSurface { }*)surface;

@end
