
@interface GEOPDCategory : PBCodable <NSCopying> {
    NSString * _eventCategoryId;
    struct { 
        unsigned int has_level : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_eventCategoryId : 1; 
        unsigned int read_localizedNames : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _level;
    NSMutableArray * _localizedNames;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *eventCategoryId;
@property (nonatomic, readonly) bool hasEventCategoryId;
@property (nonatomic) bool hasLevel;
@property (nonatomic) int level;
@property (nonatomic, retain) NSMutableArray *localizedNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (bool)isValid:(id)arg1;
+ (Class)localizedNameType;

- (void).cxx_destruct;
- (void)addLocalizedName:(id)arg1;
- (id)bestLocalizedCategoryName;
- (void)clearLocalizedNames;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventCategoryId;
- (bool)hasEventCategoryId;
- (bool)hasLevel;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)level;
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (id)localizedNames;
- (unsigned long long)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventCategoryId:(id)arg1;
- (void)setHasLevel:(bool)arg1;
- (void)setLevel:(int)arg1;
- (void)setLocalizedNames:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
