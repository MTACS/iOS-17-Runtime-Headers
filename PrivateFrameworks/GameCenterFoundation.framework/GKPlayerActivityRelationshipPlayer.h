
@interface GKPlayerActivityRelationshipPlayer : GKPlayerActivityRelationshipBase {
    GKPlayerInternal * _playerInternal;
}

@property (nonatomic, retain) GKPlayerInternal *playerInternal;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)playerInternal;
- (void)setPlayerInternal:(id)arg1;

@end
