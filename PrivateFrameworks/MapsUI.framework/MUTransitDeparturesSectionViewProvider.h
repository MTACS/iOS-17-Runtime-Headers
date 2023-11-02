
@interface MUTransitDeparturesSectionViewProvider : NSObject <MKTransitSystemFilterViewDelegate, NSObject> {
    void $__lazy_storage_$_overallIncidentsView;
    void $__lazy_storage_$_systemFilterView;
    void cachedViews;
    void dataSource;
    void footerAttributionViewModel;
    void needsRebuild;
    void userInteractionDelegate;
}

@property (nonatomic) bool needsRebuild;

- (void).cxx_destruct;
- (void)filterView:(id)arg1 didChangeSystemSelection:(id)arg2;
- (id)init;
- (id)initWithDataSource:(id)arg1 userInteractionDelegate:(id)arg2;
- (bool)needsRebuild;
- (id)sectionViewsForCurrentState;
- (void)setNeedsRebuild:(bool)arg1;

@end
