
@interface DYGPUToolsVersionInfo : NSObject <NSSecureCoding> {
    NSDictionary * _infoPlist;
    unsigned int  _interposeVersionGL;
    unsigned int  _interposeVersionMetal;
    NSDictionary * _versionPlist;
}

@property (nonatomic, copy) NSDictionary *infoPlist;
@property (nonatomic) unsigned int interposeVersionGL;
@property (nonatomic) unsigned int interposeVersionMetal;
@property (nonatomic, readonly, retain) NSString *shortVersion;
@property (nonatomic, readonly, retain) NSString *sourceVersion;
@property (nonatomic, readonly, retain) NSString *version;
@property (nonatomic, copy) NSDictionary *versionPlist;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (unsigned int)interposeVersionGL;
- (unsigned int)interposeVersionMetal;
- (id)objectForInfoPlistKey:(id)arg1;
- (id)objectForVersionPlistKey:(id)arg1;
- (void)setInfoPlist:(id)arg1;
- (void)setInterposeVersionGL:(unsigned int)arg1;
- (void)setInterposeVersionMetal:(unsigned int)arg1;
- (void)setVersionPlist:(id)arg1;
- (id)shortVersion;
- (id)sourceVersion;
- (id)version;
- (id)versionPlist;

@end
