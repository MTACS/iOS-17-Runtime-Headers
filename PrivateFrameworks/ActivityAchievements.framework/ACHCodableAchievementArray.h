
@interface ACHCodableAchievementArray : PBCodable <NSCopying> {
    NSMutableArray * _achievements;
}

@property (nonatomic, retain) NSMutableArray *achievements;

+ (Class)achievementsType;

- (void).cxx_destruct;
- (id)achievements;
- (id)achievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)achievementsCount;
- (void)addAchievements:(id)arg1;
- (void)clearAchievements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithCodableAchievements:(id)arg1;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievements:(id)arg1;
- (void)writeTo:(id)arg1;

@end
