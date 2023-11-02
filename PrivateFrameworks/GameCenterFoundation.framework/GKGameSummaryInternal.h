
@interface GKGameSummaryInternal : GKInternalRepresentation {
    NSNumber * _adamID;
    NSString * _bundleID;
    NSSet * _compatiblePlatforms;
    bool  _isArcade;
    NSDate * _playedAt;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSSet *compatiblePlatforms;
@property (nonatomic) bool isArcade;
@property (nonatomic, retain) NSDate *playedAt;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)adamID;
- (id)bundleID;
- (id)compatiblePlatforms;
- (id)description;
- (bool)isArcade;
- (id)playedAt;
- (void)setAdamID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCompatiblePlatforms:(id)arg1;
- (void)setIsArcade:(bool)arg1;
- (void)setPlayedAt:(id)arg1;

@end
