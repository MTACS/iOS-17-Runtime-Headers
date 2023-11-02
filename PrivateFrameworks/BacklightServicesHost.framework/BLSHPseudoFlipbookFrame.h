
@interface BLSHPseudoFlipbookFrame : NSObject <BLSHRenderedFlipbookFrame> {
    BLSHPresentationDateSpecifier * _bls_specifier;
    unsigned long long  _frameId;
    unsigned long long  _memoryUsage;
    unsigned long long  _presentationTime;
}

@property (nonatomic, readonly) float apl;
@property (nonatomic, readonly) float aplDimming;
@property (nonatomic, readonly) BLSHPresentationDateSpecifier *bls_specifier;
@property (nonatomic, readonly) NSUUID *bls_uuid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long frameId;
@property (readonly) unsigned long long hash;
@property (getter=isInverted, nonatomic, readonly) bool inverted;
@property (nonatomic, readonly) unsigned long long memoryUsage;
@property (nonatomic, readonly) unsigned long long presentationTime;
@property (nonatomic, readonly) struct __IOSurface { }*rawSurface;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rawSurfaceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __IOSurface { }*surface;

- (void).cxx_destruct;
- (float)apl;
- (float)aplDimming;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)bls_specifier;
- (id)bls_uuid;
- (id)description;
- (unsigned long long)frameId;
- (id)initWithPresentationTime:(unsigned long long)arg1 frameId:(unsigned long long)arg2 specifier:(id)arg3 memoryUsage:(unsigned long long)arg4;
- (bool)isInverted;
- (unsigned long long)memoryUsage;
- (unsigned long long)presentationTime;
- (struct __IOSurface { }*)rawSurface;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rawSurfaceFrame;
- (struct __IOSurface { }*)surface;

@end
