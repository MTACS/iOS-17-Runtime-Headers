
@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying> {
    NSMutableArray * _ands;
    TPPBDictionaryMatchingRuleFieldExists * _exists;
    struct { 
        unsigned int type : 1; 
    }  _has;
    TPPBDictionaryMatchingRuleFieldRegexMatch * _match;
    TPPBDictionaryMatchingRule * _not;
    NSMutableArray * _ors;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *ands;
@property (nonatomic, retain) TPPBDictionaryMatchingRuleFieldExists *exists;
@property (nonatomic, readonly) bool hasExists;
@property (nonatomic, readonly) bool hasMatch;
@property (nonatomic, readonly) bool hasNot;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) TPPBDictionaryMatchingRuleFieldRegexMatch *match;
@property (nonatomic, retain) TPPBDictionaryMatchingRule *not;
@property (nonatomic, retain) NSMutableArray *ors;
@property (nonatomic) int type;

+ (Class)andType;
+ (Class)orType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addAnd:(id)arg1;
- (void)addOr:(id)arg1;
- (id)andAtIndex:(unsigned long long)arg1;
- (id)ands;
- (unsigned long long)andsCount;
- (void)clearAnds;
- (void)clearOrs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exists;
- (bool)hasExists;
- (bool)hasMatch;
- (bool)hasNot;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)invertMatch:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)match;
- (bool)matches:(id)arg1 error:(id*)arg2;
- (void)mergeFrom:(id)arg1;
- (id)not;
- (id)orAtIndex:(unsigned long long)arg1;
- (id)ors;
- (unsigned long long)orsCount;
- (bool)performAndMatch:(id)arg1 error:(id*)arg2;
- (bool)performOrMatch:(id)arg1 error:(id*)arg2;
- (bool)readFrom:(id)arg1;
- (void)setAnds:(id)arg1;
- (void)setExists:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMatch:(id)arg1;
- (void)setNot:(id)arg1;
- (void)setOrs:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
