
@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal

+ (bool)supportsSecureCoding;

- (id)gamePlayerID;
- (bool)isUnknownPlayer;
- (id)playerID;
- (id)teamPlayerID;

@end
