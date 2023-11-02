
@interface HUMosaicCameraCellLayoutOptions : HUGridCellLayoutOptions {
    double  _descriptionInset;
    double  _expandedFormatAspectRatio;
    double  _interItemSpacing;
    bool  _isMosaicCell;
    double  _maxWidth;
    double  _minimumCameraCellWidth;
    double  _mosaicInterItemSpacing;
    UIFont * _secondaryLabelFont;
    UIFont * _timingLabelFont;
    long long  _viewSizeSubclass;
}

@property (nonatomic, readonly) double cameraCellHeight;
@property (nonatomic, readonly) double cameraCellWidth;
@property (nonatomic) double descriptionInset;
@property (nonatomic) double expandedFormatAspectRatio;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) bool isMosaicCell;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) double minimumCameraCellWidth;
@property (nonatomic) double mosaicInterItemSpacing;
@property (nonatomic, retain) UIFont *secondaryLabelFont;
@property (nonatomic, retain) UIFont *timingLabelFont;
@property (nonatomic) long long viewSizeSubclass;

+ (double)columnWidthForContainerWidth:(double)arg1 numberOfColumns:(unsigned long long)arg2 padding:(double)arg3;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2;
+ (double)heightForWidth:(double)arg1;
+ (double)widthForHeight:(double)arg1;

- (void).cxx_destruct;
- (double)cameraCellHeight;
- (double)cameraCellWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadiusForCellSize:(struct CGSize { double x1; double x2; })arg1;
- (double)descriptionInset;
- (double)expandedFormatAspectRatio;
- (double)interItemSpacing;
- (bool)isMosaicCell;
- (bool)isSingleCell;
- (double)maxWidth;
- (double)minimumCameraCellWidth;
- (double)mosaicInterItemSpacing;
- (unsigned long long)numColumnsForContainerWidth:(double)arg1 minimumCameraCellWidth:(double)arg2 padding:(double)arg3;
- (id)secondaryLabelFont;
- (void)setDescriptionInset:(double)arg1;
- (void)setExpandedFormatAspectRatio:(double)arg1;
- (void)setInterItemSpacing:(double)arg1;
- (void)setIsMosaicCell:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setMosaicInterItemSpacing:(double)arg1;
- (void)setSecondaryLabelFont:(id)arg1;
- (void)setTimingLabelFont:(id)arg1;
- (void)setViewSizeSubclass:(long long)arg1;
- (id)timingLabelFont;
- (long long)viewSizeSubclass;

@end
