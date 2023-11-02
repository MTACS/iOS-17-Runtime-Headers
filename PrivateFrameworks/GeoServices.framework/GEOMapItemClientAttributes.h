
@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {
    GEOMapItemAddressBookAttributes * _addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes * _correctedLocationAttributes;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addressBookAttributes : 1; 
        unsigned int read_correctedLocationAttributes : 1; 
        unsigned int read_routineAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOMapItemRoutineAttributes * _routineAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (nonatomic, retain) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property (nonatomic, readonly) bool hasAddressBookAttributes;
@property (nonatomic, readonly) bool hasCorrectedLocationAttributes;
@property (nonatomic, readonly) bool hasRoutineAttributes;
@property (nonatomic, retain) GEOMapItemRoutineAttributes *routineAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)addressBookAttributes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedLocationAttributes;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressBookAttributes;
- (bool)hasCorrectedLocationAttributes;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRoutineAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routineAttributes;
- (void)setAddressBookAttributes:(id)arg1;
- (void)setCorrectedLocationAttributes:(id)arg1;
- (void)setRoutineAttributes:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
