
@interface OADSchemeColor : OADColor {
    int  mIndex;
}

+ (id)schemeColorWithIndex:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSchemeColorIndex:(int)arg1;
- (bool)isEqual:(id)arg1;
- (int)schemeColorIndex;

@end
