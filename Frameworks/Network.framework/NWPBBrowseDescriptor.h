
@interface NWPBBrowseDescriptor : PBCodable <NSCopying> {
    NWPBServiceBrowse * _service;
}

@property (nonatomic, readonly) bool hasService;
@property (nonatomic, retain) NWPBServiceBrowse *service;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasService;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void)writeTo:(id)arg1;

@end
