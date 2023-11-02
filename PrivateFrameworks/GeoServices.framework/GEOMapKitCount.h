
@interface GEOMapKitCount : PBCodable <NSCopying> {
    unsigned int  _appCount;
    int  _appType;
    int  _countType;
    struct { 
        unsigned int has_appCount : 1; 
        unsigned int has_appType : 1; 
        unsigned int has_countType : 1; 
        unsigned int has_useCount : 1; 
    }  _flags;
    unsigned int  _useCount;
}

@property (nonatomic) unsigned int appCount;
@property (nonatomic) int appType;
@property (nonatomic) int countType;
@property (nonatomic) bool hasAppCount;
@property (nonatomic) bool hasAppType;
@property (nonatomic) bool hasCountType;
@property (nonatomic) bool hasUseCount;
@property (nonatomic) unsigned int useCount;

+ (bool)isValid:(id)arg1;

- (int)StringAsAppType:(id)arg1;
- (int)StringAsCountType:(id)arg1;
- (unsigned int)appCount;
- (int)appType;
- (id)appTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countType;
- (id)countTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppCount;
- (bool)hasAppType;
- (bool)hasCountType;
- (bool)hasUseCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppCount:(unsigned int)arg1;
- (void)setAppType:(int)arg1;
- (void)setCountType:(int)arg1;
- (void)setHasAppCount:(bool)arg1;
- (void)setHasAppType:(bool)arg1;
- (void)setHasCountType:(bool)arg1;
- (void)setHasUseCount:(bool)arg1;
- (void)setUseCount:(unsigned int)arg1;
- (unsigned int)useCount;
- (void)writeTo:(id)arg1;

@end
