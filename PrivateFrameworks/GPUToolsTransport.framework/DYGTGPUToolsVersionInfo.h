
@interface DYGTGPUToolsVersionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _infoPlist;
    unsigned int  _interposeVersionGL;
    unsigned int  _interposeVersionMetal;
    NSDictionary * _versionPlist;
}

@property (nonatomic, copy) NSDictionary *infoPlist;
@property (nonatomic) unsigned int interposeVersionGL;
@property (nonatomic) unsigned int interposeVersionMetal;
@property (nonatomic, copy) NSDictionary *versionPlist;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (unsigned int)interposeVersionGL;
- (unsigned int)interposeVersionMetal;
- (void)setInfoPlist:(id)arg1;
- (void)setInterposeVersionGL:(unsigned int)arg1;
- (void)setInterposeVersionMetal:(unsigned int)arg1;
- (void)setVersionPlist:(id)arg1;
- (id)versionPlist;

@end
