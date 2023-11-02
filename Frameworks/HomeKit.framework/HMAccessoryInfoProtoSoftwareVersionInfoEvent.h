
@interface HMAccessoryInfoProtoSoftwareVersionInfoEvent : PBCodable <NSCopying> {
    NSString * _buildVersion;
    struct { 
        unsigned int majorVersion : 1; 
        unsigned int minorVersion : 1; 
        unsigned int updateVersion : 1; 
    }  _has;
    long long  _majorVersion;
    long long  _minorVersion;
    long long  _updateVersion;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, readonly) bool hasBuildVersion;
@property (nonatomic) bool hasMajorVersion;
@property (nonatomic) bool hasMinorVersion;
@property (nonatomic) bool hasUpdateVersion;
@property (nonatomic) long long majorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic) long long updateVersion;

- (void).cxx_destruct;
- (id)buildVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildVersion;
- (bool)hasMajorVersion;
- (bool)hasMinorVersion;
- (bool)hasUpdateVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)majorVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minorVersion;
- (bool)readFrom:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setHasMajorVersion:(bool)arg1;
- (void)setHasMinorVersion:(bool)arg1;
- (void)setHasUpdateVersion:(bool)arg1;
- (void)setMajorVersion:(long long)arg1;
- (void)setMinorVersion:(long long)arg1;
- (void)setUpdateVersion:(long long)arg1;
- (long long)updateVersion;
- (void)writeTo:(id)arg1;

@end
