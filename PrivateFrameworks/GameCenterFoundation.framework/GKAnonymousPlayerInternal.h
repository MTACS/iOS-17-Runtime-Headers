
@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal

+ (bool)supportsSecureCoding;

- (id)alias;
- (id)gamePlayerID;
- (bool)isAnonymousPlayer;
- (bool)isEqual:(id)arg1;
- (id)playerID;
- (id)teamPlayerID;

@end
