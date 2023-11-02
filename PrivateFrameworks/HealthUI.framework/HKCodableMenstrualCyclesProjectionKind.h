
@interface HKCodableMenstrualCyclesProjectionKind : PBCodable <NSCopying> {
    NSString * _kind;
}

@property (nonatomic, readonly) bool hasKind;
@property (nonatomic, retain) NSString *kind;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKind;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKind:(id)arg1;
- (void)writeTo:(id)arg1;

@end
