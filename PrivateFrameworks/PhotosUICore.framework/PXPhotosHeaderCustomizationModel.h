
@interface PXPhotosHeaderCustomizationModel : PXObservable <PXMutableHeaderCustomizationModel> {
    double  _alpha;
    bool  _shouldUseTextStyles;
    long long  _subtitleTextStyle;
    long long  _titleTextStyle;
    double  _verticalFloatingOffset;
    double  _verticalVisibilityOffset;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) bool shouldUseTextStyles;
@property (nonatomic, readonly) long long subtitleTextStyle;
@property (nonatomic, readonly) long long titleTextStyle;
@property (nonatomic, readonly) double verticalFloatingOffset;
@property (nonatomic, readonly) double verticalVisibilityOffset;

- (double)alpha;
- (id)init;
- (void)setAlpha:(double)arg1;
- (void)setShouldUseTextStyles:(bool)arg1;
- (void)setVerticalFloatingOffset:(double)arg1;
- (void)setVerticalVisibilityOffset:(double)arg1;
- (bool)shouldUseTextStyles;
- (long long)subtitleTextStyle;
- (long long)titleTextStyle;
- (double)verticalFloatingOffset;
- (double)verticalVisibilityOffset;

@end
