
@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int  mChartSubElementType;
    int  mLevel;
}

- (int)chartSubElementType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (int)level;
- (void)setChartSubElementType:(int)arg1;
- (void)setLevel:(int)arg1;

@end
