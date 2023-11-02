
@interface GEOWiFiAP : PBCodable <NSCopying> {
    unsigned int  _channel;
    struct { 
        unsigned int has_channel : 1; 
        unsigned int has_origin : 1; 
        unsigned int has_rssi : 1; 
    }  _flags;
    int  _origin;
    int  _rssi;
    NSString * _uniqueID;
}

@property (nonatomic) unsigned int channel;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasOrigin;
@property (nonatomic) bool hasRssi;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic) int origin;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *uniqueID;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsOrigin:(id)arg1;
- (unsigned int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannel;
- (bool)hasOrigin;
- (bool)hasRssi;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (void)setChannel:(unsigned int)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
