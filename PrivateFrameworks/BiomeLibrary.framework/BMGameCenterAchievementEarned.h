
@interface BMGameCenterAchievementEarned : BMEventBase <BMStoreData> {
    NSString * _achievementID;
    double  _achievementRarityPercent;
    bool  _hasAchievementRarityPercent;
}

@property (nonatomic, readonly) NSString *achievementID;
@property (nonatomic, readonly) double achievementRarityPercent;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAchievementRarityPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)achievementID;
- (double)achievementRarityPercent;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAchievementRarityPercent;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAchievementID:(id)arg1 achievementRarityPercent:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasAchievementRarityPercent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
