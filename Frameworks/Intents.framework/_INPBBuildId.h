
@interface _INPBBuildId : PBCodable <NSCopying, NSSecureCoding, _INPBBuildId> {
    NSString * _buildNumber;
    struct { }  _has;
    NSString * _versionNumber;
}

@property (nonatomic, copy) NSString *buildNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBuildNumber;
@property (nonatomic, readonly) bool hasVersionNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *versionNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBuildNumber;
- (bool)hasVersionNumber;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuildNumber:(id)arg1;
- (void)setVersionNumber:(id)arg1;
- (id)versionNumber;
- (void)writeTo:(id)arg1;

@end
