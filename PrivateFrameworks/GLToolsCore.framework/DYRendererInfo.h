
@interface DYRendererInfo : NSObject <NSSecureCoding> {
    NSDictionary * bitCounts;
    NSSet * extensions;
    NSString * glslVersion;
    NSDictionary * limits;
    NSString * renderer;
    NSDictionary * shaderPrecisionsFormats;
    NSString * vendor;
    NSString * version;
}

@property (nonatomic, retain) NSDictionary *bitCounts;
@property (nonatomic, retain) NSSet *extensions;
@property (nonatomic, retain) NSString *glslVersion;
@property (nonatomic, retain) NSDictionary *limits;
@property (nonatomic, retain) NSString *renderer;
@property (nonatomic, retain) NSDictionary *shaderPrecisionsFormats;
@property (nonatomic, retain) NSString *vendor;
@property (nonatomic, retain) NSString *version;

+ (bool)_dimensionsAreSupported:(id)arg1 supportedDimensions:(id)arg2;
+ (bool)_rangeIsSupported:(id)arg1 supportedRange:(id)arg2;
+ (id)rendererInfoWithGLIContext:(struct __GLIContextRec { }*)arg1 dispatch:(struct __GLIFunctionDispatchRec { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); int (*x29)(); int (*x30)(); int (*x31)(); int (*x32)(); int (*x33)(); int (*x34)(); int (*x35)(); int (*x36)(); int (*x37)(); int (*x38)(); int (*x39)(); int (*x40)(); int (*x41)(); int (*x42)(); int (*x43)(); int (*x44)(); int (*x45)(); int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); int (*x55)(); int (*x56)(); int (*x57)(); int (*x58)(); int (*x59)(); int (*x60)(); int (*x61)(); int (*x62)(); int (*x63)(); int (*x64)(); int (*x65)(); int (*x66)(); int (*x67)(); int (*x68)(); int (*x69)(); int (*x70)(); int (*x71)(); int (*x72)(); int (*x73)(); int (*x74)(); }*)arg2 api:(int)arg3;
+ (bool)supportsSecureCoding;

- (bool)_supportsGLSLVersion:(id)arg1;
- (bool)_supportsGLVersion:(id)arg1;
- (bool)_supportsLimits:(id)arg1;
- (id)bitCounts;
- (void)dealloc;
- (id)description;
- (id)descriptionForBugReport;
- (void)encodeWithCoder:(id)arg1;
- (id)extensions;
- (id)glslVersion;
- (id)initWithCoder:(id)arg1;
- (id)limits;
- (id)renderer;
- (void)setBitCounts:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setGlslVersion:(id)arg1;
- (void)setLimits:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)setShaderPrecisionsFormats:(id)arg1;
- (void)setVendor:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)shaderPrecisionsFormats;
- (bool)supportsCapabilitiesOfRenderer:(id)arg1;
- (id)vendor;
- (id)version;

@end
