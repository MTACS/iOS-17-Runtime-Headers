
@interface GEOBusinessOptions : PBCodable <NSCopying> {
    NSMutableArray * _attributeKeys;
    struct { 
        unsigned int has_maxBusinessResults : 1; 
        unsigned int has_includeBusinessHours : 1; 
        unsigned int has_includeCenter : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_attributeKeys : 1; 
        unsigned int read_photoOptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _includeBusinessHours;
    bool  _includeCenter;
    int  _maxBusinessResults;
    NSMutableArray * _photoOptions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributeKeys;
@property (nonatomic) bool hasIncludeBusinessHours;
@property (nonatomic) bool hasIncludeCenter;
@property (nonatomic) bool hasMaxBusinessResults;
@property (nonatomic) bool includeBusinessHours;
@property (nonatomic) bool includeCenter;
@property (nonatomic) int maxBusinessResults;
@property (nonatomic, retain) NSMutableArray *photoOptions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeKeyType;
+ (bool)isValid:(id)arg1;
+ (Class)photoOptionsType;

- (void).cxx_destruct;
- (void)addAttributeKey:(id)arg1;
- (void)addPhotoOptions:(id)arg1;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (id)attributeKeys;
- (unsigned long long)attributeKeysCount;
- (void)clearAttributeKeys;
- (void)clearPhotoOptions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeBusinessHours;
- (bool)hasIncludeCenter;
- (bool)hasMaxBusinessResults;
- (unsigned long long)hash;
- (bool)includeBusinessHours;
- (bool)includeCenter;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)maxBusinessResults;
- (void)mergeFrom:(id)arg1;
- (id)photoOptions;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoOptionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributeKeys:(id)arg1;
- (void)setHasIncludeBusinessHours:(bool)arg1;
- (void)setHasIncludeCenter:(bool)arg1;
- (void)setHasMaxBusinessResults:(bool)arg1;
- (void)setIncludeBusinessHours:(bool)arg1;
- (void)setIncludeCenter:(bool)arg1;
- (void)setMaxBusinessResults:(int)arg1;
- (void)setPhotoOptions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
