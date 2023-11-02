
@interface NTPBError : PBCodable <NSCopying> {
    int  _errorCode;
    NSString * _errorMessage;
}

@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, readonly) bool hasErrorMessage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorMessage;
- (bool)hasErrorMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
