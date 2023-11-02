
@interface CSCoverSheetDismissGestureSettings : PTSettings {
    double  _edgeRegionSize;
    bool  _extendSwipeUpRegion;
    double  _extendedEdgeRegionSize;
    double  _extendedRegionInsetX;
    double  _recognizeAlongEdge;
    bool  _usesGrapeFlags;
}

@property (nonatomic) double edgeRegionSize;
@property (nonatomic) bool extendSwipeUpRegion;
@property (nonatomic) double extendedEdgeRegionSize;
@property (nonatomic) double extendedRegionInsetX;
@property (nonatomic) double recognizeAlongEdge;
@property (nonatomic) bool usesGrapeFlags;

+ (id)settingsControllerModule;

- (double)edgeRegionSize;
- (bool)extendSwipeUpRegion;
- (double)extendedEdgeRegionSize;
- (double)extendedRegionInsetX;
- (double)recognizeAlongEdge;
- (void)setDefaultValues;
- (void)setEdgeRegionSize:(double)arg1;
- (void)setExtendSwipeUpRegion:(bool)arg1;
- (void)setExtendedEdgeRegionSize:(double)arg1;
- (void)setExtendedRegionInsetX:(double)arg1;
- (void)setRecognizeAlongEdge:(double)arg1;
- (void)setUsesGrapeFlags:(bool)arg1;
- (bool)usesGrapeFlags;

@end
