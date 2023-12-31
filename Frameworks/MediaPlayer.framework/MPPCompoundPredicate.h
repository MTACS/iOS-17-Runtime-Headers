
@interface MPPCompoundPredicate : PBCodable <NSCopying> {
    NSMutableArray * _predicates;
}

@property (nonatomic, retain) NSMutableArray *predicates;

- (void).cxx_destruct;
- (void)addPredicates:(id)arg1;
- (void)clearPredicates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)predicates;
- (id)predicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)predicatesCount;
- (bool)readFrom:(id)arg1;
- (void)setPredicates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
