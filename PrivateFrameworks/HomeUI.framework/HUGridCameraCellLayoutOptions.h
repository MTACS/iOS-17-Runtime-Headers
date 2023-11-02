
@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions {
    double  _cameraViewAspectRatio;
    double  _cellHeight;
    double  _headerHorizontalInnerMargins;
    double  _headerViewHeight;
}

@property (nonatomic) double cameraViewAspectRatio;
@property (nonatomic) double cellHeight;
@property (nonatomic) double headerHorizontalInnerMargins;
@property (nonatomic) double headerViewHeight;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (double)cameraViewAspectRatio;
- (double)cellHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)headerHorizontalInnerMargins;
- (double)headerViewHeight;
- (void)setCameraViewAspectRatio:(double)arg1;
- (void)setCellHeight:(double)arg1;
- (void)setHeaderHorizontalInnerMargins:(double)arg1;
- (void)setHeaderViewHeight:(double)arg1;

@end
