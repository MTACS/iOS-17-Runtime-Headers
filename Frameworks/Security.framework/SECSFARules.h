
@interface SECSFARules : PBCodable <NSCopying> {
    NSMutableArray * _rules;
}

@property (nonatomic, retain) NSMutableArray *rules;

+ (Class)rulesType;

- (void).cxx_destruct;
- (void)addRules:(id)arg1;
- (void)clearRules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rules;
- (id)rulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rulesCount;
- (void)setRules:(id)arg1;
- (void)writeTo:(id)arg1;

@end
