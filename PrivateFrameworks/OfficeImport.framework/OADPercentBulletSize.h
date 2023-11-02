
@interface OADPercentBulletSize : OADBulletSize {
    float  mPercent;
}

- (unsigned long long)hash;
- (id)initWithPercent:(float)arg1;
- (bool)isEqual:(id)arg1;
- (float)percent;

@end
