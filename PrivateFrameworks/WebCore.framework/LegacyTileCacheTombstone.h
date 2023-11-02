
@interface LegacyTileCacheTombstone : NSObject {
    bool  dead;
}

@property (getter=isDead) bool dead;

- (bool)isDead;
- (void)setDead:(bool)arg1;

@end
