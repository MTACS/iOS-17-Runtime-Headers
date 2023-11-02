
@interface MLCompilerOptions : NSObject {
    bool  _allowMultipleInputsWithEnumeratedShapes;
    bool  _allowsPixelBufferDirectBinding;
    bool  _containerIsCloud;
    bool  _dryRun;
    bool  _encryptModel;
    NSData * _iv;
    NSData * _key;
    NSString * _keyID;
    NSNumber * _keyInfoVersion;
    int  _mlProgramAddDuringCompilationMode;
    NSData * _mlsinf;
    NSString * _platform;
    NSString * _platformVersion;
    NSData * _sinf;
    NSURL * _specURL;
    bool  _trainWithMLCompute;
    bool  _usesCodeSigningIdentityForEncryption;
    NSMutableArray * _warnings;
}

@property bool allowMultipleInputsWithEnumeratedShapes;
@property bool allowsPixelBufferDirectBinding;
@property bool containerIsCloud;
@property bool dryRun;
@property bool encryptModel;
@property (copy) NSData *iv;
@property (copy) NSData *key;
@property (copy) NSString *keyID;
@property (copy) NSNumber *keyInfoVersion;
@property int mlProgramAddDuringCompilationMode;
@property (copy) NSData *mlsinf;
@property (retain) NSString *platform;
@property (retain) NSString *platformVersion;
@property (copy) NSData *sinf;
@property (copy) NSURL *specURL;
@property bool trainWithMLCompute;
@property bool usesCodeSigningIdentityForEncryption;
@property (nonatomic, retain) NSMutableArray *warnings;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (bool)allowMultipleInputsWithEnumeratedShapes;
- (bool)allowsPixelBufferDirectBinding;
- (bool)containerIsCloud;
- (bool)dryRun;
- (bool)encryptModel;
- (id)init;
- (id)iv;
- (id)key;
- (id)keyID;
- (id)keyInfoVersion;
- (int)mlProgramAddDuringCompilationMode;
- (id)mlsinf;
- (id)platform;
- (id)platformVersion;
- (void)setAllowMultipleInputsWithEnumeratedShapes:(bool)arg1;
- (void)setAllowsPixelBufferDirectBinding:(bool)arg1;
- (void)setContainerIsCloud:(bool)arg1;
- (void)setDryRun:(bool)arg1;
- (void)setEncryptModel:(bool)arg1;
- (void)setIv:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setKeyID:(id)arg1;
- (void)setKeyInfoVersion:(id)arg1;
- (void)setMlProgramAddDuringCompilationMode:(int)arg1;
- (void)setMlsinf:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setPlatformVersion:(id)arg1;
- (void)setSinf:(id)arg1;
- (void)setSpecURL:(id)arg1;
- (void)setTrainWithMLCompute:(bool)arg1;
- (void)setUsesCodeSigningIdentityForEncryption:(bool)arg1;
- (void)setWarnings:(id)arg1;
- (id)sinf;
- (id)specURL;
- (bool)trainWithMLCompute;
- (bool)usesCodeSigningIdentityForEncryption;
- (id)warnings;

@end
