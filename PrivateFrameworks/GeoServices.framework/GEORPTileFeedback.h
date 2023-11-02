
@interface GEORPTileFeedback : PBCodable <NSCopying> {
    GEORPCorrectedCoordinate * _coordinate;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_label : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPCorrectedLabel * _label;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPCorrectedCoordinate *coordinate;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEORPCorrectedLabel *label;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLabel;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
