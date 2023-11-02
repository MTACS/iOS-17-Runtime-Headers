
@interface HDCodableCompanionUserNotificationResponse : PBCodable <NSCopying> {
    HDCodableError * _error;
    struct { 
        unsigned int success : 1; 
    }  _has;
    NSString * _requestIdentifier;
    bool  _success;
}

@property (nonatomic, retain) HDCodableError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasRequestIdentifier;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setError:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
