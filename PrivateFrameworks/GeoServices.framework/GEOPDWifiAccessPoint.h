
@interface GEOPDWifiAccessPoint : PBCodable <NSCopying> {
    unsigned int  _age;
    int  _channel;
    struct { 
        unsigned int has_scanTimestamp : 1; 
        unsigned int has_age : 1; 
        unsigned int has_channel : 1; 
        unsigned int has_rssi : 1; 
    }  _flags;
    NSString * _macId;
    int  _rssi;
    unsigned long long  _scanTimestamp;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithGEOWifiAccessPoint:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
