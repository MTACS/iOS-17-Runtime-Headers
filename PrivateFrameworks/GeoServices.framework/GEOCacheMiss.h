
@interface GEOCacheMiss : PBCodable <NSCopying> {
    unsigned int  _bytes;
    unsigned int  _count;
    NSMutableArray * _errors;
    struct { 
        unsigned int has_bytes : 1; 
        unsigned int has_count : 1; 
        unsigned int has_httpStatus : 1; 
        unsigned int has_missType : 1; 
        unsigned int has_requestorType : 1; 
    }  _flags;
    unsigned int  _httpStatus;
    int  _missType;
    int  _requestorType;
}

@property (nonatomic) unsigned int bytes;
@property (nonatomic) unsigned int count;
@property (nonatomic, retain) NSMutableArray *errors;
@property (nonatomic) bool hasBytes;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasHttpStatus;
@property (nonatomic) bool hasMissType;
@property (nonatomic) bool hasRequestorType;
@property (nonatomic) unsigned int httpStatus;
@property (nonatomic) int missType;
@property (nonatomic) int requestorType;

+ (Class)errorsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMissType:(id)arg1;
- (int)StringAsRequestorType:(id)arg1;
- (void)addErrors:(id)arg1;
- (unsigned int)bytes;
- (void)clearErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errors;
- (id)errorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsCount;
- (bool)hasBytes;
- (bool)hasCount;
- (bool)hasHttpStatus;
- (bool)hasMissType;
- (bool)hasRequestorType;
- (unsigned long long)hash;
- (unsigned int)httpStatus;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)missType;
- (id)missTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestorType;
- (id)requestorTypeAsString:(int)arg1;
- (void)setBytes:(unsigned int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setErrors:(id)arg1;
- (void)setHasBytes:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasHttpStatus:(bool)arg1;
- (void)setHasMissType:(bool)arg1;
- (void)setHasRequestorType:(bool)arg1;
- (void)setHttpStatus:(unsigned int)arg1;
- (void)setMissType:(int)arg1;
- (void)setRequestorType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
