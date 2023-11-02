
@interface FCCKPResponseOperationResultError : PBCodable <NSCopying> {
    FCCKPResponseOperationResultErrorClient * _clientError;
    NSString * _errorDescription;
    NSString * _errorKey;
    FCCKPResponseOperationResultErrorExtension * _extensionError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    }  _has;
    int  _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer * _serverError;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
