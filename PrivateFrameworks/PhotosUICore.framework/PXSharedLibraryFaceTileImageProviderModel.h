
@interface PXSharedLibraryFaceTileImageProviderModel : PXObservable {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _displayScale;
    NSArray * _faceTileCombinerItems;
    double  _imageDiameter;
    double  _imageOffset;
    bool  _includeMeContact;
    bool  _isAscending;
    bool  _isRTL;
}

@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (nonatomic, readonly, copy) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly, copy) NSArray *faceTileCombinerItems;
@property (nonatomic, readonly) double imageDiameter;
@property (nonatomic, readonly) double imageOffset;
@property (nonatomic, readonly) bool includeMeContact;
@property (nonatomic, readonly) bool isAscending;
@property (nonatomic, readonly) bool isRTL;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (double)displayScale;
- (id)faceTileCombinerItems;
- (double)imageDiameter;
- (double)imageOffset;
- (bool)includeMeContact;
- (id)init;
- (bool)isAscending;
- (bool)isRTL;
- (void)performChanges:(id /* block */)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setFaceTileCombinerItems:(id)arg1;
- (void)setImageDiameter:(double)arg1;
- (void)setImageOffset:(double)arg1;
- (void)setIncludeMeContact:(bool)arg1;
- (void)setIsAscending:(bool)arg1;
- (void)setIsRTL:(bool)arg1;

@end
