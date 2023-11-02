
@interface DRSProtoTaskingConfigMetadata : PBCodable <NSCopying> {
    DRSProtoTaskingDeviceMetadata * _taskingDeviceMetadata;
    NSString * _teamId;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool hasTaskingDeviceMetadata;
@property (nonatomic, readonly) bool hasTeamId;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata;
@property (nonatomic, retain) NSString *teamId;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTaskingDeviceMetadata;
- (bool)hasTeamId;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTaskingDeviceMetadata:(id)arg1;
- (void)setTeamId:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)taskingDeviceMetadata;
- (id)teamId;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
