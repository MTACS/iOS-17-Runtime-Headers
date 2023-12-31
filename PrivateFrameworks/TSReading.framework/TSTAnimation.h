
@interface TSTAnimation : NSObject <NSCopying> {
    bool  mByCell;
    bool  mByCellRange;
    bool  mByColumn;
    bool  mByContent;
    bool  mByMissingCellRange;
    bool  mByRow;
    unsigned long long  mCellRangeCount;
    struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } * mCellRanges;
    bool  mDrawsBlackAndWhite;
    bool  mExpandBackgroundFill;
    bool  mFinal;
    int  mKind;
    TSTLayout * mLayout;
    bool  mReverse;
    bool  mShowsOverlayLayers;
    bool  mShowsTableChrome;
    unsigned long long  mStage;
    unsigned long long  mStageCount;
}

@property (readonly) unsigned long long cellRangeCount;
@property (readonly) bool clipStrokes;
@property (readonly) bool drawCellBackground;
@property (readonly) bool drawCellContent;
@property (readonly) bool drawStrokes;
@property (readonly) bool drawTableBackground;
@property (readonly) bool drawTableName;
@property bool drawsBlackAndWhite;
@property (readonly) bool enabled;
@property bool expandBackgroundFill;
@property (readonly) bool final;
@property bool showsOverlayLayers;
@property bool showsTableChrome;
@property (readonly) unsigned long long stage;
@property (readonly) unsigned long long stageCount;

+ (bool)deliveryStyleSupportedForExport:(unsigned long long)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
+ (id)textureDeliveryStylesLocalized:(bool)arg1;

- (void)addCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellRangeCount;
- (void)clearCellRanges;
- (bool)clipStrokes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)drawCellBackground;
- (bool)drawCellContent;
- (bool)drawStrokes;
- (bool)drawTableBackground;
- (bool)drawTableName;
- (bool)drawsBlackAndWhite;
- (bool)enabled;
- (bool)expandBackgroundFill;
- (bool)final;
- (void)setDrawsBlackAndWhite:(bool)arg1;
- (void)setExpandBackgroundFill:(bool)arg1;
- (void)setShowsOverlayLayers:(bool)arg1;
- (void)setShowsTableChrome:(bool)arg1;
- (void)setStage:(unsigned long long)arg1 andFinal:(bool)arg2;
- (bool)showsOverlayLayers;
- (bool)showsTableChrome;
- (unsigned long long)stage;
- (unsigned long long)stageCount;

@end
