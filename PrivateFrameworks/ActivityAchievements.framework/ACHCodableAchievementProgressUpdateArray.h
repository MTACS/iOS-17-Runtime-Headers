
@interface ACHCodableAchievementProgressUpdateArray : PBCodable <NSCopying> {
    NSMutableArray * _achievementProgressUpdates;
}

@property (nonatomic, retain) NSMutableArray *achievementProgressUpdates;

+ (Class)achievementProgressUpdateType;

- (void).cxx_destruct;
- (id)achievementProgressUpdateAtIndex:(unsigned long long)arg1;
- (id)achievementProgressUpdates;
- (unsigned long long)achievementProgressUpdatesCount;
- (void)addAchievementProgressUpdate:(id)arg1;
- (void)clearAchievementProgressUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievementProgressUpdates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
