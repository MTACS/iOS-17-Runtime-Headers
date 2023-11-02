
@interface HVPBContentStateEntry : PBCodable <NSCopying> {
    HVPBContentState * _state;
    NSMutableArray * _uniqueIds;
}

@property (nonatomic, readonly) bool hasState;
@property (nonatomic, retain) HVPBContentState *state;
@property (nonatomic, retain) NSMutableArray *uniqueIds;

+ (Class)uniqueIdsType;

- (void).cxx_destruct;
- (void)addUniqueIds:(id)arg1;
- (void)clearUniqueIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setState:(id)arg1;
- (void)setUniqueIds:(id)arg1;
- (id)state;
- (id)uniqueIds;
- (id)uniqueIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdsCount;
- (void)writeTo:(id)arg1;

@end
