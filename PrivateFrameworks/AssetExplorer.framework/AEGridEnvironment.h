
@interface AEGridEnvironment : NSObject {
    double  _compactExtensionHeight;
    double  _headerHeight;
    double  _minimumTileHeight;
    double  _scale;
    double  _targetBottomMargin;
}

@property (nonatomic) double compactExtensionHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) double minimumTileHeight;
@property (nonatomic) double scale;
@property (nonatomic) double targetBottomMargin;

- (double)compactExtensionHeight;
- (unsigned long long)hash;
- (double)headerHeight;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)minimumTileHeight;
- (double)scale;
- (void)setCompactExtensionHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setMinimumTileHeight:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setTargetBottomMargin:(double)arg1;
- (double)targetBottomMargin;

@end
