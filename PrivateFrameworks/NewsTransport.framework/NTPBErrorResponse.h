
@interface NTPBErrorResponse : PBCodable <NSCopying> {
    NSMutableArray * _errors;
}

@property (nonatomic, retain) NSMutableArray *errors;

+ (Class)errorsType;

- (void).cxx_destruct;
- (void)addErrors:(id)arg1;
- (void)clearErrors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errors;
- (id)errorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)writeTo:(id)arg1;

@end
