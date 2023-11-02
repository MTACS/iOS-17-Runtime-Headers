
@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGItemsGeometry, PXGViewSource> {
    NSIndexSet * _axSpriteIndexes;
    NSCalendar * _calendar;
    PXZoomableInlineHeadersDataSource * _dataSource;
    bool  _didHideSprites;
    <PXZoomableInlineHeadersLayoutGeometrySource> * _geometrySource;
    unsigned long long  _level;
    unsigned short  _mediaVersion;
    NSDateFormatter * _monthFormatter;
    PXZoomableInlineHeadersLayoutSpec * _spec;
    unsigned long long  _style;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    NSDateFormatter * _yearFormatter;
}

@property (nonatomic, retain) PXZoomableInlineHeadersDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXZoomableInlineHeadersLayoutGeometrySource> *geometrySource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, retain) PXZoomableInlineHeadersLayoutSpec *spec;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_bumpMediaVersion;
- (void)_currentLocaleChanged:(id)arg1;
- (void)_setupDateFormatters;
- (void)_updateSprites;
- (void)alphaDidChange;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (void)displayScaleDidChange;
- (id)geometrySource;
- (id)initWithLevel:(unsigned long long)arg1;
- (void)invalidateAnchorItemFrames;
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (id)itemsGeometry;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inLayout:(id)arg2;
- (unsigned long long)level;
- (void)setDataSource:(id)arg1;
- (void)setGeometrySource:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)spec;
- (unsigned long long)style;
- (void)update;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)visibleRectDidChange;

@end
