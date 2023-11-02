
@interface GEOWiFiPasspointInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_networkType : 1; 
        unsigned int has_venueGroup : 1; 
        unsigned int has_venueType : 1; 
    }  _flags;
    int  _networkType;
    int  _venueGroup;
    NSString * _venueName;
    unsigned int  _venueType;
}

@property (nonatomic) bool hasNetworkType;
@property (nonatomic) bool hasVenueGroup;
@property (nonatomic, readonly) bool hasVenueName;
@property (nonatomic) bool hasVenueType;
@property (nonatomic) int networkType;
@property (nonatomic) int venueGroup;
@property (nonatomic, retain) NSString *venueName;
@property (nonatomic) unsigned int venueType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsNetworkType:(id)arg1;
- (int)StringAsVenueGroup:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNetworkType;
- (bool)hasVenueGroup;
- (bool)hasVenueName;
- (bool)hasVenueType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)networkType;
- (id)networkTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNetworkType:(bool)arg1;
- (void)setHasVenueGroup:(bool)arg1;
- (void)setHasVenueType:(bool)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setVenueGroup:(int)arg1;
- (void)setVenueName:(id)arg1;
- (void)setVenueType:(unsigned int)arg1;
- (int)venueGroup;
- (id)venueGroupAsString:(int)arg1;
- (id)venueName;
- (unsigned int)venueType;
- (void)writeTo:(id)arg1;

@end
