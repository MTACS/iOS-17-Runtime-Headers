
@interface GEOVLFInitializationFailureDetails : PBCodable <NSCopying> {
    int  _arkitErrorCode;
    int  _arkitUnderlyingErrorCode;
    NSString * _arkitUnderlyingErrorDomain;
    struct { 
        unsigned int has_arkitErrorCode : 1; 
        unsigned int has_arkitUnderlyingErrorCode : 1; 
    }  _flags;
}

@property (nonatomic) int arkitErrorCode;
@property (nonatomic) int arkitUnderlyingErrorCode;
@property (nonatomic, retain) NSString *arkitUnderlyingErrorDomain;
@property (nonatomic) bool hasArkitErrorCode;
@property (nonatomic) bool hasArkitUnderlyingErrorCode;
@property (nonatomic, readonly) bool hasArkitUnderlyingErrorDomain;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)arkitErrorCode;
- (int)arkitUnderlyingErrorCode;
- (id)arkitUnderlyingErrorDomain;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArkitErrorCode;
- (bool)hasArkitUnderlyingErrorCode;
- (bool)hasArkitUnderlyingErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArkitErrorCode:(int)arg1;
- (void)setArkitUnderlyingErrorCode:(int)arg1;
- (void)setArkitUnderlyingErrorDomain:(id)arg1;
- (void)setHasArkitErrorCode:(bool)arg1;
- (void)setHasArkitUnderlyingErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
