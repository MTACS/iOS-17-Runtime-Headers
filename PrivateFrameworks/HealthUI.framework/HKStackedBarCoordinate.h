
@interface HKStackedBarCoordinate : HKMinMaxCoordinate {
    NSArray * _stackPoints;
}

@property (nonatomic, copy) NSArray *stackPoints;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)initWithStackPoints:(id)arg1 userInfo:(id)arg2;
- (void)setStackPoints:(id)arg1;
- (id)stackPoints;

@end
