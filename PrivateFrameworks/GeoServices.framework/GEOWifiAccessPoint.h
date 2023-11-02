
@interface GEOWifiAccessPoint : PBCodable <NSCopying> {
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

@property (nonatomic) unsigned int age;
@property (nonatomic) int channel;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasChannel;
@property (nonatomic, readonly) bool hasMacId;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasScanTimestamp;
@property (nonatomic, retain) NSString *macId;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned long long scanTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)age;
- (int)channel;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasChannel;
- (bool)hasMacId;
- (bool)hasRssi;
- (bool)hasScanTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)macId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (unsigned long long)scanTimestamp;
- (void)setAge:(unsigned int)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasScanTimestamp:(bool)arg1;
- (void)setMacId:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setScanTimestamp:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
