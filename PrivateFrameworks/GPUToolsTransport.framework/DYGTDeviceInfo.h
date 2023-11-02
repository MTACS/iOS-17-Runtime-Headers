
@interface DYGTDeviceInfo : NSObject <NSSecureCoding> {
    NSString * _build;
    DYGTGPUToolsVersionInfo * _gputoolsVersionInfo;
    struct { 
        double orientation; 
        unsigned int width; 
        unsigned int height; 
        unsigned int scale; 
        unsigned int type; 
    }  _mainScreenDescriptor;
    NSString * _metalVersion;
    NSString * _name;
    unsigned int  _nativePointerSize;
    NSString * _permanentIdentifier;
    int  _platform;
    NSString * _productType;
    NSArray * _profiles;
    unsigned long long  _runtimeIdentifier;
    NSString * _version;
}

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) DYGTGPUToolsVersionInfo *gputoolsVersionInfo;
@property (nonatomic) struct { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } mainScreenDescriptor;
@property (nonatomic, copy) NSString *metalVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int nativePointerSize;
@property (nonatomic, copy) NSString *permanentIdentifier;
@property (nonatomic) int platform;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSArray *profiles;
@property (nonatomic) unsigned long long runtimeIdentifier;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)build;
- (void)encodeWithCoder:(id)arg1;
- (id)gputoolsVersionInfo;
- (id)initWithCoder:(id)arg1;
- (struct { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })mainScreenDescriptor;
- (id)metalVersion;
- (id)name;
- (unsigned int)nativePointerSize;
- (id)permanentIdentifier;
- (int)platform;
- (id)productType;
- (id)profiles;
- (unsigned long long)runtimeIdentifier;
- (void)setBuild:(id)arg1;
- (void)setGputoolsVersionInfo:(id)arg1;
- (void)setMainScreenDescriptor:(struct { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setMetalVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNativePointerSize:(unsigned int)arg1;
- (void)setPermanentIdentifier:(id)arg1;
- (void)setPlatform:(int)arg1;
- (void)setProductType:(id)arg1;
- (void)setProfiles:(id)arg1;
- (void)setRuntimeIdentifier:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
