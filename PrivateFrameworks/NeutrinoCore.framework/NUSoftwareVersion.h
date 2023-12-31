
@interface NUSoftwareVersion : NSObject <NSCopying> {
    NSString * _appVersion;
    NSString * _buildNumber;
    NSString * _platform;
    long long  _schemaRevision;
}

@property (copy) NSString *appVersion;
@property (copy) NSString *buildNumber;
@property (copy) NSString *platform;
@property long long schemaRevision;

+ (id)_frameworkVersion;
+ (id)currentSoftwareVersion;
+ (id)frameworkVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)arg1;
+ (id)systemBuildVersion;

- (void).cxx_destruct;
- (id)appVersion;
- (id)archivalRepresentation;
- (id)buildNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSoftwareVersion:(id)arg1;
- (id)platform;
- (long long)schemaRevision;
- (void)setAppVersion:(id)arg1;
- (void)setBuildNumber:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setSchemaRevision:(long long)arg1;

@end
