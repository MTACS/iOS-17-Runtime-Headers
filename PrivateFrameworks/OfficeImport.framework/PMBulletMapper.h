
@interface PMBulletMapper : CMMapper {
    int  mFontSize;
    OADParagraphProperties * mProperties;
    CMStyle * mStyle;
}

+ (id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2;

- (void).cxx_destruct;
- (id)bulletFontName;
- (int)bulletSize;
- (id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3;
- (id)makeBulletWithListState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBulletColorWithState:(id)arg1;

@end
