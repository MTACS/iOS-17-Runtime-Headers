
@interface GEOARGuidance : PBCodable <NSCopying> {
    NSString * _arrowLabel;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_arrowLabel : 1; 
        unsigned int read_gapRanges : 1; 
        unsigned int read_instruction : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _gapRanges;
    GEOFormattedString * _instruction;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *arrowLabel;
@property (nonatomic, retain) NSMutableArray *gapRanges;
@property (nonatomic, readonly) bool hasArrowLabel;
@property (nonatomic, readonly) bool hasInstruction;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEOFormattedString *instruction;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)gapRangeType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addGapRange:(id)arg1;
- (id)arrowLabel;
- (void)clearGapRanges;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gapRangeAtIndex:(unsigned long long)arg1;
- (id)gapRanges;
- (unsigned long long)gapRangesCount;
- (bool)hasArrowLabel;
- (bool)hasInstruction;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrowLabel:(id)arg1;
- (void)setGapRanges:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setInstruction:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
