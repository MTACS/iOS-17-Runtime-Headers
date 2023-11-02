
@interface CHDPieDataValueProperties : CHDDataValueProperties {
    int  mExplosion;
    bool  mIsExplosionSet;
}

- (int)explosion;
- (id)init;
- (bool)isExplosionSet;
- (void)setExplosion:(int)arg1;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;

@end
