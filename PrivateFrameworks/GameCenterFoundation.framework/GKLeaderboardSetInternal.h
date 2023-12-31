
@interface GKLeaderboardSetInternal : GKInternalRepresentation {
    NSString * _groupIdentifier;
    NSDictionary * _icons;
    NSString * _identifier;
    NSDictionary * _leaderboardIdentifiers;
    NSString * _title;
}

@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDictionary *leaderboardIdentifiers;
@property (nonatomic, retain) NSString *setIdentifier;
@property (nonatomic, retain) NSString *title;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)leaderboardIdentifiers;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIcons:(id)arg1;
- (id)setIdentifier;
- (void)setIdentifier:(id)arg1;
- (void)setLeaderboardIdentifiers:(id)arg1;
- (void)setSetIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
