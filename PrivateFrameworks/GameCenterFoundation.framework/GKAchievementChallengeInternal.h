
@interface GKAchievementChallengeInternal : GKChallengeInternal {
    GKAchievementInternal * _achievement;
}

@property (nonatomic, copy) GKAchievementInternal *achievement;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)achievement;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setAchievement:(id)arg1;
- (id)titleText;
- (unsigned long long)type;

@end
