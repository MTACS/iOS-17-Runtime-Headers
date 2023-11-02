
@interface GEOWaypointNameProperties : PBCodable <NSCopying> {
    struct { 
        unsigned int has_hasDisplayAddress : 1; 
        unsigned int has_hasDisplayName : 1; 
        unsigned int has_hasSpokenAddress : 1; 
        unsigned int has_hasSpokenName : 1; 
    }  _flags;
    bool  _hasDisplayAddress;
    bool  _hasDisplayName;
    bool  _hasSpokenAddress;
    bool  _hasSpokenName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasDisplayAddress;
@property (nonatomic) bool hasDisplayName;
@property (nonatomic) bool hasHasDisplayAddress;
@property (nonatomic) bool hasHasDisplayName;
@property (nonatomic) bool hasHasSpokenAddress;
@property (nonatomic) bool hasHasSpokenName;
@property (nonatomic) bool hasSpokenAddress;
@property (nonatomic) bool hasSpokenName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDisplayAddress;
- (bool)hasDisplayName;
- (bool)hasHasDisplayAddress;
- (bool)hasHasDisplayName;
- (bool)hasHasSpokenAddress;
- (bool)hasHasSpokenName;
- (bool)hasSpokenAddress;
- (bool)hasSpokenName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasDisplayAddress:(bool)arg1;
- (void)setHasDisplayName:(bool)arg1;
- (void)setHasHasDisplayAddress:(bool)arg1;
- (void)setHasHasDisplayName:(bool)arg1;
- (void)setHasHasSpokenAddress:(bool)arg1;
- (void)setHasHasSpokenName:(bool)arg1;
- (void)setHasSpokenAddress:(bool)arg1;
- (void)setHasSpokenName:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
