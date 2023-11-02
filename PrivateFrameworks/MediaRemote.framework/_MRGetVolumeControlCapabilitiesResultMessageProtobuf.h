
@interface _MRGetVolumeControlCapabilitiesResultMessageProtobuf : PBCodable <NSCopying> {
    _MRVolumeControlAvailabilityProtobuf * _capabilities;
}

@property (nonatomic, retain) _MRVolumeControlAvailabilityProtobuf *capabilities;
@property (nonatomic, readonly) bool hasCapabilities;

- (void).cxx_destruct;
- (id)capabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCapabilities;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)writeTo:(id)arg1;

@end
