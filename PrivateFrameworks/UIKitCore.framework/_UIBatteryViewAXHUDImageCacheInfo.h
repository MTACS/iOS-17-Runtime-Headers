
@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject {
    UIImage * _cachedImage;
    double  _capacity;
    NSString * _contentSizeCategory;
    UIColor * _fillColor;
    bool  _reverseLayoutDirection;
    double  _scale;
    bool  _showBolt;
    bool  _showsPercentage;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIImage *cachedImage;
@property (nonatomic) double capacity;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) bool reverseLayoutDirection;
@property (nonatomic) double scale;
@property (nonatomic) bool showBolt;
@property (nonatomic) bool showsPercentage;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (bool)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 tintColor:(id)arg3 showingBolt:(bool)arg4 reverseLayout:(bool)arg5 scale:(double)arg6 showsPercentage:(bool)arg7 contentSizeCategory:(id)arg8;
- (id)cachedImage;
- (double)capacity;
- (id)contentSizeCategory;
- (id)fillColor;
- (bool)reverseLayoutDirection;
- (double)scale;
- (void)setCachedImage:(id)arg1;
- (void)setCapacity:(double)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setReverseLayoutDirection:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setShowBolt:(bool)arg1;
- (void)setShowsPercentage:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)showBolt;
- (bool)showsPercentage;
- (id)tintColor;

@end
