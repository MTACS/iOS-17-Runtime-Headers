
@interface FCCKPResponseOperationResult : PBCodable <NSCopying> {
    int  _code;
    FCCKPResponseOperationResultError * _error;
    struct { 
        unsigned int code : 1; 
    }  _has;
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
