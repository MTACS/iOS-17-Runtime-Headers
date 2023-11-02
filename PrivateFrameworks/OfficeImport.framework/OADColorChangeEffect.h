
@interface OADColorChangeEffect : OADBlipEffect {
    OADColor * mFromColor;
    OADColor * mToColor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fromColor;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setFromColor:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setToColor:(id)arg1;
- (id)toColor;

@end
