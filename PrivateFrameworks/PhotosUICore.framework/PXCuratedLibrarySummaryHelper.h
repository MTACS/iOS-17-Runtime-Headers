
@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {
    <PXLibrarySummaryDataSource> * _dataSource;
    struct { 
        bool visibleContentSnapshot; 
        bool topMostAssetCollection; 
        bool shouldUpdateImmediately; 
    }  _dataSourceRespondsTo;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool title; 
        bool subtitle; 
        bool topMostAssetCollection; 
    }  _needsUpdateFlags;
    <PXLibrarySummaryOutputPresenter> * _outputPresenter;
    struct { 
        bool setTitle; 
        bool setSubtitle; 
        bool setAttributedTitle; 
        bool defaultAttributes; 
        bool emphasizedAttributes; 
    }  _outputPresenterRespondsTo;
    bool  _shouldUseAbbreviatedDates;
    PXBrowserSummaryController * _summaryController;
    <PXDisplayAssetCollection> * _topMostAssetCollection;
}

@property (nonatomic) <PXLibrarySummaryDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXLibrarySummaryOutputPresenter> *outputPresenter;
@property (nonatomic, readonly) bool shouldShowImportDates;
@property (nonatomic) bool shouldUseAbbreviatedDates;
@property (nonatomic, readonly) PXBrowserSummaryController *summaryController;
@property (readonly) Class superclass;
@property (setter=_setTopMostAssetCollection:, nonatomic, retain) <PXDisplayAssetCollection> *topMostAssetCollection;

- (void).cxx_destruct;
- (void)_invalidateSubtitle;
- (void)_invalidateTitle;
- (void)_invalidateTopMostAssetCollection;
- (bool)_needsUpdate;
- (void)_performChanges:(id /* block */)arg1;
- (void)_setNeedsUpdate;
- (void)_setTopMostAssetCollection:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateSubtitle;
- (void)_updateSubtitleFromSummaryController;
- (void)_updateTitle;
- (void)_updateTitleFromSummaryController;
- (void)_updateTopMostAssetCollection;
- (bool)browserSummaryControllerShouldUpdateImmediately:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)outputPresenter;
- (void)setDataSource:(id)arg1;
- (void)setOutputPresenter:(id)arg1;
- (void)setShouldUseAbbreviatedDates:(bool)arg1;
- (bool)shouldUseAbbreviatedDates;
- (id)summaryController;
- (id)topMostAssetCollection;
- (void)visibleContentDidChange;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)arg1;

@end
