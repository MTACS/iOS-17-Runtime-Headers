
@interface GEOCacheMissLoadError : PBCodable <NSCopying> {
    unsigned int  _count;
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int has_count : 1; 
        unsigned int has_errorCode : 1; 
    }  _flags;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasCount;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
