
@interface GKRecentMatchInternal : GKInternalRepresentation {
    NSDate * _date;
    GKGameRecordInternal * _game;
    GKPlayerInternal * _player;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) GKGameRecordInternal *game;
@property (nonatomic, retain) GKPlayerInternal *player;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)date;
- (id)game;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)player;
- (void)setDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
