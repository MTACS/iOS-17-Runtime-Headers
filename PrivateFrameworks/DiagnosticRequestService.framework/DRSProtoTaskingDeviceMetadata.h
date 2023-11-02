
@interface DRSProtoTaskingDeviceMetadata : PBCodable <NSCopying> {
    NSString * _build;
    DRSProtoClientDeviceMetadata * _deviceMetadata;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) DRSProtoClientDeviceMetadata *deviceMetadata;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasDeviceMetadata;

- (void).cxx_destruct;
- (id)build;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceMetadata;
- (id)dictionaryRepresentation;
- (bool)hasBuild;
- (bool)hasDeviceMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
