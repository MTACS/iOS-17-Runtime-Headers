
@interface WFREPBRunRequestStop : PBCodable <NSCopying> {
    NSString * _runRequestIdentifier;
}

@property (nonatomic, retain) NSString *runRequestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)runRequestIdentifier;
- (void)setRunRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
