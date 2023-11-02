
@interface CHDPie2DType : CHDChartType {
    bool  mBarOfPieType;
    bool  mDoughnutType;
    int  mFirstSliceAngle;
    bool  mPieOfPieType;
}

- (id)contentFormat;
- (int)defaultLabelPosition;
- (int)firstSliceAngle;
- (bool)hasExplosion;
- (id)initWithChart:(id)arg1;
- (bool)isBarOfPieType;
- (bool)isDoughnutType;
- (bool)isPieOfPieType;
- (void)setBarOfPieType:(bool)arg1;
- (void)setDoughnutType:(bool)arg1;
- (void)setFirstSliceAngle:(int)arg1;
- (void)setPieOfPieType:(bool)arg1;

@end
