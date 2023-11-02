
@interface PUImportSectionedGridLayoutAttributes : PUSectionedGridLayoutAttributes {
    UIColor * _backgroundColor;
    UIColor * _bottomStrokeColor;
    double  _strokeWidth;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *bottomStrokeColor;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)bottomStrokeColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomStrokeColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (double)strokeWidth;

@end
