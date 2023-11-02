
@interface HMDAppleMediaDeviceAssociationInfoDeviceAssociationInfo : PBCodable <NSCopying> {
    NSString * _accessoryUUID;
    NSString * _idsDestination;
    NSString * _idsIdentifier;
}

@property (nonatomic, retain) NSString *accessoryUUID;
@property (nonatomic, readonly) bool hasAccessoryUUID;
@property (nonatomic, readonly) bool hasIdsDestination;
@property (nonatomic, readonly) bool hasIdsIdentifier;
@property (nonatomic, retain) NSString *idsDestination;
@property (nonatomic, retain) NSString *idsIdentifier;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryUUID;
- (bool)hasIdsDestination;
- (bool)hasIdsIdentifier;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)idsIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setIdsDestination:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
