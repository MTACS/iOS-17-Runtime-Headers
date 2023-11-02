
@interface GEOTransitExitPlanInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numberOfCars : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_selectedCarIndexs : 1; 
        unsigned int read_label : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _label;
    unsigned int  _numberOfCars;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _selectedCarIndexs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasNumberOfCars;
@property (nonatomic, retain) GEOFormattedString *label;
@property (nonatomic) unsigned int numberOfCars;
@property (nonatomic, readonly) unsigned int*selectedCarIndexs;
@property (nonatomic, readonly) unsigned long long selectedCarIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addSelectedCarIndex:(unsigned int)arg1;
- (void)clearSelectedCarIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasNumberOfCars;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfCars;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)selectedCarIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)selectedCarIndexs;
- (unsigned long long)selectedCarIndexsCount;
- (void)setHasNumberOfCars:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setNumberOfCars:(unsigned int)arg1;
- (void)setSelectedCarIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
