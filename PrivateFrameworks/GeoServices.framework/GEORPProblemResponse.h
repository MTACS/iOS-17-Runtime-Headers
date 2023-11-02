
@interface GEORPProblemResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_statusCode : 1; 
        unsigned int has_isNotificationSupported : 1; 
    }  _flags;
    bool  _isNotificationSupported;
    NSString * _problemId;
    int  _statusCode;
}

@property (nonatomic) bool hasIsNotificationSupported;
@property (nonatomic, readonly) bool hasProblemId;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) bool isNotificationSupported;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic) int statusCode;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNotificationSupported;
- (bool)hasProblemId;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationSupported;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsNotificationSupported:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setIsNotificationSupported:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
