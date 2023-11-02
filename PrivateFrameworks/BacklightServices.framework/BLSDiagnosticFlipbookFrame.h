
@interface BLSDiagnosticFlipbookFrame : NSObject <BLSRenderedFlipbookFrame, BSXPCCoding, NSSecureCoding> {
    float  _apl;
    float  _aplDimming;
    unsigned long long  _frameId;
    bool  _inverted;
    unsigned long long  _memoryUsage;
    unsigned long long  _presentationTime;
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
    BLSDiagnosticPresentationDateSpecifier * _specifier;
    <BLSDiagnosticFlipbookFrameSurfaceProvider> * _surfaceProvider;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) float apl;
@property (nonatomic, readonly) float aplDimming;
@property (nonatomic, readonly) <BLSPresentationDateSpecifying> *bls_specifier;
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
@property <BLSDiagnosticFlipbookFrameSurfaceProvider> *surfaceProvider;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)createWithFrame:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)apl;
- (float)aplDimming;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)bls_specifier;
- (id)bls_uuid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)frameId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(id)arg1;
- (id)initWithPresentationTime:(unsigned long long)arg1 frameId:(unsigned long long)arg2 apl:(float)arg3 aplDimming:(float)arg4 memoryUsage:(unsigned long long)arg5 rawSurfaceFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 inverted:(bool)arg7 specifier:(id)arg8 uuid:(id)arg9;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInverted;
- (unsigned long long)memoryUsage;
- (unsigned long long)presentationTime;
- (struct __IOSurface { }*)rawSurface;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rawSurfaceFrame;
- (void)setSurfaceProvider:(id)arg1;
- (struct __IOSurface { }*)surface;
- (id)surfaceProvider;
- (id)uuid;

@end
