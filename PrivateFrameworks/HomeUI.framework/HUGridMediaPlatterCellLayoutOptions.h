
@interface HUGridMediaPlatterCellLayoutOptions : HUGridCellLayoutOptions {
    double  _cellHeight;
    double  _interPlatterSpacing;
}

@property (nonatomic) double cellHeight;
@property (nonatomic) double interPlatterSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (double)cellHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)interPlatterSpacing;
- (void)setCellHeight:(double)arg1;
- (void)setInterPlatterSpacing:(double)arg1;

@end
