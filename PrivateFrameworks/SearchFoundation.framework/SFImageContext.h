
@interface SFImageContext : NSObject {
    bool  _hasDarkAppearance;
    bool  _ignoreImageDataCache;
    double  _uiScale;
}

@property bool hasDarkAppearance;
@property (nonatomic) bool ignoreImageDataCache;
@property double uiScale;

- (bool)hasDarkAppearance;
- (bool)ignoreImageDataCache;
- (void)setHasDarkAppearance:(bool)arg1;
- (void)setIgnoreImageDataCache:(bool)arg1;
- (void)setUiScale:(double)arg1;
- (double)uiScale;

@end
