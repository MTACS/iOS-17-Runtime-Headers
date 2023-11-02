
@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider, PXPresentedGridLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _buildingBlockSize;
    long long  _capacity;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct _PXCornerSpriteIndexes { 
        unsigned int topLeft; 
        unsigned int topRight; 
        unsigned int bottomLeft; 
        unsigned int bottomRight; 
    }  _cornerSpriteIndexes;
    long long  _count;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerItemSize;
    struct { long long x1; long long x2; unsigned long long x3; double x4; double x5; } * _inputItemInfos;
    struct CGSize { 
        double width; 
        double height; 
    }  _intercellSpacing;
    bool  _isPrepared;
    long long  _localNumberOfColumns;
    long long  _localNumberOfRows;
    PXExploreParsingState * _localState;
    struct CGSize { 
        double width; 
        double height; 
    }  _minHeroItemsSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumItemSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _outputGeometries;
    long long * _outputItemIndexToParseLocation;
    struct { long long x1; long long x2; long long x3; long long x4; } * _outputItemLocations;
    long long * _outputNumberOfColumnsAtRow;
    long long  _row;
    long long  _rowCapacity;
    long long  _rowCount;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } buildingBlockSize;
@property (nonatomic, readonly) bool canReorderItemsAcrossRows;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } headerItemSize;
@property (nonatomic, readonly) PXExploreParsingState *localState;
@property (nonatomic, copy) PXExploreLayoutMetrics *metrics;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minHeroItemsSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumItemSize;
@property (nonatomic, readonly) long long numberOfRemainingItems;
@property (nonatomic, readonly) long long presentedNumberOfRows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addThreeItemsToSixColumnRowWithHeroItemType:(long long)arg1 options:(unsigned long long)arg2 rowType:(long long*)arg3;
- (void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(bool)arg1;
- (double)_buildingBlockAspectRatioForNumberOfColumns:(long long)arg1 options:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_cellSizeForNumberOfColumns:(long long)arg1;
- (struct CGSize { double x1; double x2; })_estimatedSizeForColumns:(long long)arg1 headerRows:(long long)arg2 averageItemsPerBlock:(double)arg3 averageRowsPerBlock:(double)arg4 withOptions:(unsigned long long)arg5;
- (struct CGSize { double x1; double x2; })_estimatedSizeForFourColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_estimatedSizeForSixColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_estimatedSizeForThreeColumnLayoutWithOptions:(unsigned long long)arg1;
- (bool)_isShortRowNextFollowedByLargeHero;
- (void)_parseFourColumnHeroRowWithType:(long long)arg1 heroItemType:(long long)arg2 numberOfItems:(long long)arg3;
- (bool)_parseFourColumnLayoutWithOptions:(unsigned long long)arg1;
- (void)_parseFourColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_parseSixColumnHeroRowWithNumberOfItems:(long long)arg1 heroItemType:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4;
- (bool)_parseSixColumnLayoutWithOptions:(unsigned long long)arg1;
- (void)_parseSixColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnHeaderRowWithNumberOfItems:(long long)arg1;
- (bool)_parseThreeColumnLayoutWithOptions:(unsigned long long)arg1;
- (void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_prepareIfNeeded;
- (void)addFullWidthItemWithType:(long long)arg1 atRow:(long long)arg2 aspectRatio:(double)arg3;
- (void)addLocalItemWithType:(long long)arg1 atColumn:(long long)arg2 row:(long long)arg3 columnSpan:(long long)arg4 rowSpan:(long long)arg5;
- (unsigned long long)attributesForNextItemAtIndex:(long long)arg1;
- (void)beginRowWithNumberOfColumns:(long long)arg1;
- (struct CGSize { double x1; double x2; })buildingBlockSize;
- (bool)canReorderItemsAcrossRows;
- (struct _PXCornerSpriteIndexes { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cornerSpriteIndexes;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)endFullWidthRowWithType:(long long)arg1 aspectRatio:(double)arg2;
- (void)endRowWithType:(long long)arg1;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (struct CGSize { double x1; double x2; })estimatedSizeForPadLandscape;
- (struct CGSize { double x1; double x2; })estimatedSizeForPadPortrait;
- (struct CGSize { double x1; double x2; })estimatedSizeForPhoneLandscape;
- (struct CGSize { double x1; double x2; })estimatedSizeForPhonePortrait;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (void)getLowestAspectRatio:(double*)arg1 highestAspectRatio:(double*)arg2 forNextItems:(long long)arg3;
- (struct CGSize { double x1; double x2; })headerItemSize;
- (long long)indexWithinNextItems:(long long)arg1 having:(long long)arg2 keyIndex:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (bool)isAcceptableLargeHeroNextItemAtIndex:(long long)arg1;
- (long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (long long)itemIndexForPresentedItemIndex:(long long)arg1;
- (id)localState;
- (struct CGSize { double x1; double x2; })minHeroItemsSize;
- (struct CGSize { double x1; double x2; })minimumItemSize;
- (void)moveNextItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (bool)nextInputItems:(unsigned long long)arg1;
- (bool)nextItems:(long long)arg1 areAll:(unsigned long long)arg2;
- (bool)nextItems:(long long)arg1 isAny:(unsigned long long)arg2;
- (long long)numberOf:(unsigned long long)arg1 withinNextItems:(long long)arg2;
- (long long)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(long long)arg1;
- (long long)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(long long)arg1 rowOptions:(unsigned long long*)arg2;
- (long long)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(long long)arg1;
- (long long)numberOfRemainingItems;
- (bool)parseFourColumnGroupWithShortRowFollowedByLargeHero;
- (bool)parseFourColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;
- (bool)parseMacLayout;
- (bool)parsePadLandscapeLayout;
- (bool)parsePadPortraitLayout;
- (bool)parsePhoneLandscapeLayout;
- (bool)parsePhonePortraitLayout;
- (bool)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 options:(unsigned long long)arg3;
- (bool)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4;
- (bool)parseThreeColumnGroupWithFiveItems;
- (bool)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
- (bool)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(bool)arg1;
- (bool)parseThreeColumnMediumHeroRowWithPano;
- (bool)parseThreeColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;
- (bool)parseThreeColumnShortRowWithPano;
- (long long)preferredRowTypeAfterRowWithType:(long long)arg1;
- (bool)prepareNextItems:(long long)arg1 withLargeHeroIndex:(long long)arg2;
- (struct { long long x1; long long x2; long long x3; long long x4; })presentedItemLocationForItemAtIndex:(long long)arg1;
- (id)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (id)presentedItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)presentedNumberOfColumnsAtRow:(long long)arg1;
- (long long)presentedNumberOfRows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedRectForItemAtIndex:(long long)arg1;
- (void)reorderNextItems:(long long)arg1 usingMapping:(id /* block */)arg2;
- (double)score:(long long)arg1 forNextItemAtIndex:(long long)arg2;
- (void)setBuildingBlockColumnSpan:(long long)arg1 rowSpan:(long long)arg2 withNumberOfColumns:(long long)arg3;
- (struct CGSize { double x1; double x2; })size;
- (void)sortNextItems:(long long)arg1 withItemAtIndex:(long long)arg2 having:(long long)arg3;

@end
