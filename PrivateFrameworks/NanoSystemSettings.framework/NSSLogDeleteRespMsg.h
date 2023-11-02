
@interface NSSLogDeleteRespMsg : PBCodable <NSCopying> {
    NSData * _error;
}

@property (nonatomic, retain) NSData *error;
@property (nonatomic, readonly) bool hasError;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)writeTo:(id)arg1;

@end
