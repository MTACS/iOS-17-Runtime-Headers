
@interface PXNewMagazineLayoutTileMaker : NSObject {
    NSMutableArray * _allFrames;
    PXNewMagazineRectArray * _cachedTileRects;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultTileSize;
    double  _height;
    double  _interTileSpacing;
    bool  _isPerfectEnding;
    double  _lastTileWidthPadding;
    bool  _layoutFromRightToLeft;
    double  _maxFrameAspectRatio;
    unsigned long long  _maxTilesInFrame;
    double  _minFrameAspectRatio;
    double * _normalizedWeights;
    unsigned long long  _numberOfColumns;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    NSMutableArray * _sharedTempArray;
    bool  _startLastPadding;
    double  _tileAspectRatio;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultTileSize;
@property (nonatomic, readonly) double height;
@property (nonatomic) double interTileSpacing;
@property (nonatomic) bool layoutFromRightToLeft;
@property (nonatomic) unsigned long long maxTilesInFrame;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) double tileAspectRatio;

+ (void)printInputs:(id)arg1;
+ (void)printLayout:(id)arg1 numOfColumns:(unsigned long long)arg2;
+ (void)printPossibleFrames:(unsigned long long)arg1 cellAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 minAspectRato:(double)arg4;

- (void).cxx_destruct;
- (long long)_availableFrames:(id*)arg1 maxReturnCount:(unsigned long long)arg2 forAspectRatio:(double)arg3 weight:(double)arg4 maxWidth:(unsigned long long)arg5;
- (void)_findNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 context:(id)arg3;
- (bool)_findNextTileWithInputs:(id)arg1 atIndex:(unsigned long long)arg2 baseIndex:(unsigned long long)arg3 coordinator:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameFromTileFrame:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)_generateLastTilesWithInputs:(id)arg1 baseIndex:(unsigned long long)arg2 returnFallback:(bool)arg3;
- (bool)_generateNextChunkWithInputs:(id)arg1 fromIndex:(unsigned long long)arg2 maxY:(unsigned long long)arg3 reserveNumberForPadding:(unsigned long long)arg4 context:(id)arg5;
- (id)_generateTilesWithInputs:(id)arg1;
- (id)_getAllFramesInOrder;
- (void)_getFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 magazineRects:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg2 withInputs:(id)arg3;
- (bool)_isSameRectsArray:(id)arg1 otherArray:(id)arg2;
- (double*)_normalizeWeightsByInputs:(id)arg1;
- (unsigned long long)_numberOfInputsForLastPadding;
- (void)_resetWithNumberOfAssets:(unsigned long long)arg1;
- (void)_setRandomSeedWithInputs:(id)arg1;
- (void)_updateDimensionInfos;
- (bool)checkAndPrintResults:(bool)arg1;
- (bool)convertRects:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg1 outFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 count:(unsigned long long)arg3 forReferenceSize:(struct CGSize { double x1; double x2; })arg4;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultTileSize;
- (id)description;
- (void)getFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 withInputs:(id)arg2;
- (unsigned long long)getMagazineRects:(struct PXMagazineRect { struct PXMagazineOrigin { long long x_1_1_1; long long x_1_1_2; } x1; struct PXMagazineSize { long long x_2_1_1; long long x_2_1_2; } x2; }*)arg1 withInputs:(id)arg2;
- (double)height;
- (id)initWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 numberOfColumns:(unsigned long long)arg2;
- (double)interTileSpacing;
- (bool)layoutFromRightToLeft;
- (unsigned long long)maxTilesInFrame;
- (unsigned long long)numberOfColumns;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setInterTileSpacing:(double)arg1;
- (void)setLayoutFromRightToLeft:(bool)arg1;
- (void)setMaxTilesInFrame:(unsigned long long)arg1;
- (double)tileAspectRatio;

@end
