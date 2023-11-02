
@interface DYDeviceInfo : NSObject <NSSecureCoding> {
    NSString * _build;
    DYGPUToolsVersionInfo * _gputoolsVersionInfo;
    NSString * _hostProductType;
    NSString * _hostVersion;
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
    unsigned long long  _runtimeIdentifier;
    NSArray * _supportedGraphicsAPIInfos;
    NSString * _version;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, readonly, retain) NSString *descriptionForBugReport;
@property (nonatomic, retain) DYGPUToolsVersionInfo *gputoolsVersionInfo;
@property (nonatomic, retain) NSString *hostProductType;
@property (nonatomic, retain) NSString *hostVersion;
@property (nonatomic, readonly) bool isEmbeddedPlatform;
@property (nonatomic) struct { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } mainScreenDescriptor;
@property (nonatomic, retain) NSString *metalVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int nativePointerSize;
@property (nonatomic, retain) NSString *permanentIdentifier;
@property (nonatomic) int platform;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic) unsigned long long runtimeIdentifier;
@property (nonatomic, readonly, retain) NSString *summaryForBugReport;
@property (nonatomic, retain) NSArray *supportedGraphicsAPIInfos;
@property (nonatomic, retain) NSString *version;

+ (unsigned int)defaultNativePointerSize;
+ (bool)isSimulatorPlatform:(int)arg1;
+ (bool)supportsSecureCoding;

- (id)build;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionForBugReport;
- (id)descriptionWithProfileName:(id)arg1 showingProductType:(bool)arg2 showingPermanentIdentifier:(bool)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)gputoolsVersionInfo;
- (id)hostProductType;
- (id)hostVersion;
- (id)initWithCoder:(id)arg1;
- (bool)isEmbeddedPlatform;
- (struct { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })mainScreenDescriptor;
- (id)metalVersion;
- (id)name;
- (unsigned int)nativePointerSize;
- (id)permanentIdentifier;
- (int)platform;
- (id)productType;
- (unsigned long long)runtimeIdentifier;
- (void)setBuild:(id)arg1;
- (void)setGputoolsVersionInfo:(id)arg1;
- (void)setHostProductType:(id)arg1;
- (void)setHostVersion:(id)arg1;
- (void)setMainScreenDescriptor:(struct { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setMetalVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNativePointerSize:(unsigned int)arg1;
- (void)setPermanentIdentifier:(id)arg1;
- (void)setPlatform:(int)arg1;
- (void)setProductType:(id)arg1;
- (void)setRuntimeIdentifier:(unsigned long long)arg1;
- (void)setSupportedGraphicsAPIInfos:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)summaryForBugReport;
- (id)supportedGraphicsAPIInfos;
- (bool)supportsCapabilitiesOfGraphicsAPI:(id)arg1 allowedClass:(Class)arg2;
- (id)version;
- (bool)versionIsOlderThan:(id)arg1;

@end
