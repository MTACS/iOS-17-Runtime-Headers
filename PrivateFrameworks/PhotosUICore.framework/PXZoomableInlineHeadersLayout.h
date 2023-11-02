
@interface PXZoomableInlineHeadersLayout : PXGSplitLayout <PXSectionedDataSourceManagerObserver> {
    PXZoomableInlineHeadersDataSourceManager * _dataSourceManager;
    <PXZoomableInlineHeadersLayoutGeometrySource> * _geometrySource;
    PXInlineHeadersSpriteLayout * _monthsLayout;
    PXZoomableInlineHeadersLayoutSpec * _spec;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXInlineHeadersSpriteLayout * _yearsLayout;
}

@property (nonatomic, readonly) PXZoomableInlineHeadersDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXZoomableInlineHeadersLayoutGeometrySource> *geometrySource;
@property (readonly) unsigned long long hash;
@property (nonatomic) double monthsAlpha;
@property (nonatomic, retain) PXZoomableInlineHeadersLayoutSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic) double yearsAlpha;

- (void).cxx_destruct;
- (void)_updateSublayouts;
- (id)dataSourceManager;
- (id)geometrySource;
- (id)initWithDataSourceManager:(id)arg1;
- (void)invalidateAnchorItemFrames;
- (void)invalidateGeometry;
- (double)monthsAlpha;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setGeometrySource:(id)arg1;
- (void)setMonthsAlpha:(double)arg1;
- (void)setSpec:(id)arg1;
- (void)setYearsAlpha:(double)arg1;
- (id)spec;
- (void)update;
- (double)yearsAlpha;

@end
