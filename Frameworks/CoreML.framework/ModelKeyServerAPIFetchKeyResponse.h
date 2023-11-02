
@interface ModelKeyServerAPIFetchKeyResponse : PBCodable <NSCopying> {
    ModelKeyServerAPIResultError * _error;
    struct { 
        unsigned int result : 1; 
    }  _has;
    int  _result;
    ModelKeyServerAPIFetchKeyResult * _success;
}

@property (nonatomic, retain) ModelKeyServerAPIResultError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasResult;
@property (nonatomic, readonly) bool hasSuccess;
@property (nonatomic) int result;
@property (nonatomic, retain) ModelKeyServerAPIFetchKeyResult *success;

- (void).cxx_destruct;
- (int)StringAsResult:(id)arg1;
- (void)clearOneofValuesForResult;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasResult;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)result;
- (id)resultAsString:(int)arg1;
- (void)setError:(id)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setResult:(int)arg1;
- (void)setSuccess:(id)arg1;
- (id)success;
- (void)writeTo:(id)arg1;

@end
