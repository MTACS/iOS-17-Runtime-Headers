
@interface CPLServerFeedbackMessage : PBCodable <NSCopying> {
    NSMutableArray * _keysAndValues;
}

@property (nonatomic, retain) NSMutableArray *keysAndValues;

- (void).cxx_destruct;
- (void)addKeysAndValues:(id)arg1;
- (void)clearKeysAndValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keysAndValues;
- (id)keysAndValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)keysAndValuesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKeysAndValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end
