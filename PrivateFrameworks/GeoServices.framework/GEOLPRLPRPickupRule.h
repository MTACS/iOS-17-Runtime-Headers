
@interface GEOLPRLPRPickupRule : PBCodable <NSCopying> {
    struct { 
        unsigned int read_plateTypeIndexes : 1; 
        unsigned int read_pickupChars : 1; 
        unsigned int read_prLicensePlateStructure : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _pickupChars;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _plateTypeIndexes;
    GEOLPRLicensePlateStructure * _prLicensePlateStructure;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasPrLicensePlateStructure;
@property (nonatomic, retain) NSMutableArray *pickupChars;
@property (nonatomic, readonly) unsigned int*plateTypeIndexes;
@property (nonatomic, readonly) unsigned long long plateTypeIndexesCount;
@property (nonatomic, retain) GEOLPRLicensePlateStructure *prLicensePlateStructure;

+ (bool)isValid:(id)arg1;
+ (Class)pickupCharType;

- (void).cxx_destruct;
- (void)addPickupChar:(id)arg1;
- (void)addPlateTypeIndexes:(unsigned int)arg1;
- (void)clearPickupChars;
- (void)clearPlateTypeIndexes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrLicensePlateStructure;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)pickupCharAtIndex:(unsigned long long)arg1;
- (id)pickupChars;
- (unsigned long long)pickupCharsCount;
- (unsigned int*)plateTypeIndexes;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)arg1;
- (unsigned long long)plateTypeIndexesCount;
- (id)prLicensePlateStructure;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPickupChars:(id)arg1;
- (void)setPlateTypeIndexes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPrLicensePlateStructure:(id)arg1;
- (void)writeTo:(id)arg1;

@end
