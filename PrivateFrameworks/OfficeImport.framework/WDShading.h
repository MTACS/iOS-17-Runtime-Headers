
@interface WDShading : NSObject <NSCopying> {
    OITSUColor * mBackgroundColor;
    OITSUColor * mForegroundColor;
    int  mStyle;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (void).cxx_destruct;
- (id)background;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)foreground;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShading:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setForeground:(id)arg1;
- (void)setShading:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
