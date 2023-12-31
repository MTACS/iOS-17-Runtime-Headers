
@interface NWPBAddressEndpoint : PBCodable <NSCopying> {
    NSData * _address;
}

@property (nonatomic, retain) NSData *address;
@property (nonatomic, readonly) bool hasAddress;

- (void).cxx_destruct;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end
