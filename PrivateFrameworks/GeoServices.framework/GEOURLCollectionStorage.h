
@interface GEOURLCollectionStorage : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_name : 1; 
        unsigned int read_places : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _name;
    NSMutableArray * _places;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *places;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)placeType;

- (void).cxx_destruct;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)placeAtIndex:(unsigned long long)arg1;
- (id)places;
- (unsigned long long)placesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPlaces:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
