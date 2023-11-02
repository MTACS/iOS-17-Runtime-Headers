
@interface OADGradientFillStop : NSObject <NSCopying> {
    OADColor * mColor;
    float  mPosition;
}

+ (void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithColor:(id)arg1 position:(float)arg2;
- (bool)isEqual:(id)arg1;
- (float)position;
- (void)setStyleColor:(id)arg1;
- (bool)usesPlaceholderColor;

@end
