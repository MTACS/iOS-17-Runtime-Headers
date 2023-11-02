
@interface CAFlipBookFrame : NSObject <BLSHRenderedFlipbookFrame> {
    float  _apl;
    float  _aplDimming;
    unsigned long long  _frameId;
    unsigned int  _generation;
    bool  _inverted;
    unsigned long long  _memoryUsage;
    unsigned long long  _presentationTime;
    struct __IOSurface { } * _rawSurface;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rawSurfaceFrame;
    struct __IOSurface { } * _surface;
    id  _userInfo;
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
@property (nonatomic) struct __IOSurface { }*rawSurface;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rawSurfaceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __IOSurface { }*surface;
@property (nonatomic) struct __IOSurface { }*surface;
@property (nonatomic, readonly) id userInfo;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)_initWithPresentationTime:(unsigned long long)arg1 frameId:(unsigned long long)arg2 generation:(unsigned int)arg3 apl:(float)arg4 aplDimming:(float)arg5 memoryUsage:(unsigned long long)arg6 inverted:(bool)arg7 userInfo:(id)arg8;
- (float)apl;
- (float)aplDimming;
- (void)dealloc;
- (id)description;
- (unsigned long long)frameId;
- (unsigned int)generation;
- (bool)isInverted;
- (unsigned long long)memoryUsage;
- (unsigned long long)presentationTime;
- (struct __IOSurface { }*)rawSurface;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rawSurfaceFrame;
- (void)releaseSurface;
- (void)setRawSurface:(struct __IOSurface { }*)arg1;
- (void)setRawSurfaceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSurface:(struct __IOSurface { }*)arg1;
- (struct __IOSurface { }*)surface;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)bls_specifier;
- (id)bls_uuid;

@end
