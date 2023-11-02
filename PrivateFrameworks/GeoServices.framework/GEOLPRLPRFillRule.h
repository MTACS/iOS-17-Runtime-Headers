
@interface GEOLPRLPRFillRule : PBCodable <NSCopying> {
    int  _fillType;
    struct { 
        unsigned int has_fillType : 1; 
        unsigned int read_plateTypeIndexes : 1; 
        unsigned int read_frLicensePlateStructure : 1; 
        unsigned int read_fromChar : 1; 
        unsigned int read_toChar : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLPRLicensePlateStructure * _frLicensePlateStructure;
    GEOLPRTargetChar * _fromChar;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _plateTypeIndexes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLPRTargetChar * _toChar;
}

@property (nonatomic) int fillType;
@property (nonatomic, retain) GEOLPRLicensePlateStructure *frLicensePlateStructure;
@property (nonatomic, retain) GEOLPRTargetChar *fromChar;
@property (nonatomic) bool hasFillType;
@property (nonatomic, readonly) bool hasFrLicensePlateStructure;
@property (nonatomic, readonly) bool hasFromChar;
@property (nonatomic, readonly) bool hasToChar;
@property (nonatomic, readonly) unsigned int*plateTypeIndexes;
@property (nonatomic, readonly) unsigned long long plateTypeIndexesCount;
@property (nonatomic, retain) GEOLPRTargetChar *toChar;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFillType:(id)arg1;
- (void)addPlateTypeIndexes:(unsigned int)arg1;
- (void)clearPlateTypeIndexes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fillType;
- (id)fillTypeAsString:(int)arg1;
- (id)frLicensePlateStructure;
- (id)fromChar;
- (bool)hasFillType;
- (bool)hasFrLicensePlateStructure;
- (bool)hasFromChar;
- (bool)hasToChar;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int*)plateTypeIndexes;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)arg1;
- (unsigned long long)plateTypeIndexesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFillType:(int)arg1;
- (void)setFrLicensePlateStructure:(id)arg1;
- (void)setFromChar:(id)arg1;
- (void)setHasFillType:(bool)arg1;
- (void)setPlateTypeIndexes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setToChar:(id)arg1;
- (id)toChar;
- (void)writeTo:(id)arg1;

@end
