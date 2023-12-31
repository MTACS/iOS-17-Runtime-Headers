
@interface OADAutoNumberBulletProperties : OADBulletProperties {
    int  mSchemeType;
    unsigned long long  mStartIndex;
}

- (int)autoNumberSchemeType;
- (unsigned long long)hash;
- (id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)startIndex;

@end
