
@interface NPKProtoDeviceMetadataWithFieldsRequest : PBRequest <NSCopying> {
    unsigned int  _metadataFields;
}

@property (nonatomic) unsigned int metadataFields;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)metadataFields;
- (bool)readFrom:(id)arg1;
- (void)setMetadataFields:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end