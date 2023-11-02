
@interface DRSProtoClientDeviceMetadata : PBCodable <NSCopying> {
    NSString * _buildVariant;
    NSString * _deviceCategory;
    NSString * _deviceModel;
    NSString * _platform;
}

@property (nonatomic, retain) NSString *buildVariant;
@property (nonatomic, retain) NSString *deviceCategory;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, readonly) bool hasBuildVariant;
@property (nonatomic, readonly) bool hasDeviceCategory;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic, readonly) bool hasPlatform;
@property (nonatomic, retain) NSString *platform;

- (void).cxx_destruct;
- (id)buildVariant;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCategory;
- (id)deviceModel;
- (id)dictionaryRepresentation;
- (bool)hasBuildVariant;
- (bool)hasDeviceCategory;
- (bool)hasDeviceModel;
- (bool)hasPlatform;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)platform;
- (bool)readFrom:(id)arg1;
- (void)setBuildVariant:(id)arg1;
- (void)setDeviceCategory:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)writeTo:(id)arg1;

@end
