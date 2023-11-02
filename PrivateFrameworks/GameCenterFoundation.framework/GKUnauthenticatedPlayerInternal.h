
@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int  _encodingCount;
}

+ (bool)supportsSecureCoding;

- (id)alias;
- (void)encodeWithCoder:(id)arg1;
- (id)gamePlayerID;
- (bool)isEqual:(id)arg1;
- (id)playerID;
- (id)teamPlayerID;

@end
