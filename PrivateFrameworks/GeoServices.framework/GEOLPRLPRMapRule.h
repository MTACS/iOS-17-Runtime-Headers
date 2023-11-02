
@interface GEOLPRLPRMapRule : PBCodable <NSCopying> {
    struct { 
        unsigned int read_plateTypeIndexes : 1; 
        unsigned int read_mrLicensePlateStructure : 1; 
        unsigned int read_targetChars : 1; 
        unsigned int read_valueMappings : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLPRLicensePlateStructure * _mrLicensePlateStructure;
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
    NSMutableArray * _targetChars;
    NSMutableArray * _valueMappings;
}

@property (nonatomic, readonly) bool hasMrLicensePlateStructure;
@property (nonatomic, retain) GEOLPRLicensePlateStructure *mrLicensePlateStructure;
@property (nonatomic, readonly) unsigned int*plateTypeIndexes;
@property (nonatomic, readonly) unsigned long long plateTypeIndexesCount;
@property (nonatomic, retain) NSMutableArray *targetChars;
@property (nonatomic, retain) NSMutableArray *valueMappings;

+ (bool)isValid:(id)arg1;
+ (Class)targetCharType;
+ (Class)valueMappingType;

- (void).cxx_destruct;
- (void)addPlateTypeIndexes:(unsigned int)arg1;
- (void)addTargetChar:(id)arg1;
- (void)addValueMapping:(id)arg1;
- (void)clearPlateTypeIndexes;
- (void)clearTargetChars;
- (void)clearValueMappings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMrLicensePlateStructure;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)mrLicensePlateStructure;
- (unsigned int*)plateTypeIndexes;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)arg1;
- (unsigned long long)plateTypeIndexesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMrLicensePlateStructure:(id)arg1;
- (void)setPlateTypeIndexes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTargetChars:(id)arg1;
- (void)setValueMappings:(id)arg1;
- (id)targetCharAtIndex:(unsigned long long)arg1;
- (id)targetChars;
- (unsigned long long)targetCharsCount;
- (id)valueMappingAtIndex:(unsigned long long)arg1;
- (id)valueMappings;
- (unsigned long long)valueMappingsCount;
- (void)writeTo:(id)arg1;

@end
