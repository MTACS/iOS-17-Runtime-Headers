
@interface GEORPRapInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_rapDisplayMenu : 1; 
        unsigned int has_isReviewed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_rapId : 1; 
        unsigned int read_rapResponse : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isReviewed;
    int  _rapDisplayMenu;
    NSString * _rapId;
    GEORPRapResponse * _rapResponse;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsReviewed;
@property (nonatomic) bool hasRapDisplayMenu;
@property (nonatomic, readonly) bool hasRapId;
@property (nonatomic, readonly) bool hasRapResponse;
@property (nonatomic) bool isReviewed;
@property (nonatomic) int rapDisplayMenu;
@property (nonatomic, retain) NSString *rapId;
@property (nonatomic, retain) GEORPRapResponse *rapResponse;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRapDisplayMenu:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsReviewed;
- (bool)hasRapDisplayMenu;
- (bool)hasRapId;
- (bool)hasRapResponse;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReviewed;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)rapDisplayMenu;
- (id)rapDisplayMenuAsString:(int)arg1;
- (id)rapId;
- (id)rapResponse;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsReviewed:(bool)arg1;
- (void)setHasRapDisplayMenu:(bool)arg1;
- (void)setIsReviewed:(bool)arg1;
- (void)setRapDisplayMenu:(int)arg1;
- (void)setRapId:(id)arg1;
- (void)setRapResponse:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
