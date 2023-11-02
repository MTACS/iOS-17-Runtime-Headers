
@interface IPAAdjustmentVersionInfo : NSObject <NSCopying> {
    NSString * _appVersion;
    NSString * _buildNumber;
    NSString * _platform;
    long long  _schemaRevision;
}

@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *buildNumber;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic) long long schemaRevision;

+ (id)_frameworkVersion;
+ (id)currentVersionInfo;
+ (id)frameworkVersion;
+ (id)systemBuildVersion;
+ (id)versionInfoFromArchivalRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)appVersion;
- (id)archivalRepresentation;
- (id)buildNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVersionInfo:(id)arg1;
- (id)platform;
- (long long)schemaRevision;
- (void)setAppVersion:(id)arg1;
- (void)setBuildNumber:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setSchemaRevision:(long long)arg1;

@end
