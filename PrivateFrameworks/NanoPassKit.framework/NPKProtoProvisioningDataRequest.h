
@interface NPKProtoProvisioningDataRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int includeDeviceMetadata : 1; 
    }  _has;
    bool  _includeDeviceMetadata;
}

@property (nonatomic) bool hasIncludeDeviceMetadata;
@property (nonatomic) bool includeDeviceMetadata;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeDeviceMetadata;
- (unsigned long long)hash;
- (bool)includeDeviceMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeDeviceMetadata:(bool)arg1;
- (void)setIncludeDeviceMetadata:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
