
@interface ICAttributionLayoutManager : NSObject {
    double  _appliedHorizontalAdjustment;
    double  _appliedHorizontalAdjustmentRatio;
    double  _currentTextViewOffset;
    ICTTTextEditGrouper * _editGrouper;
    ICTTTextEditFilter * _filter;
    NSManagedObjectContext * _managedObjectContext;
    NSDate * _noteLastOpenedDate;
    NSNumber * _overrideZoomFactor;
    double  _panelWidth;
    double  _preferredHighlightValue;
    double  _previewPanelWidth;
    ICBaseTextView * _textView;
    id /* block */  _updatedConfigurationHandler;
    NSArray * _viewConfigurations;
    double  _visiblePanelWidth;
}

@property (nonatomic) double appliedHorizontalAdjustment;
@property (nonatomic, readonly) double appliedHorizontalAdjustmentRatio;
@property (nonatomic) double currentTextViewOffset;
@property (nonatomic, retain) ICTTTextEditGrouper *editGrouper;
@property (nonatomic, copy) ICTTTextEditFilter *filter;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSDate *noteLastOpenedDate;
@property (nonatomic, copy) NSNumber *overrideZoomFactor;
@property (nonatomic) double panelWidth;
@property (nonatomic, readonly) double preferredHighlightValue;
@property (nonatomic) double previewPanelWidth;
@property (nonatomic, readonly) ICBaseTextView *textView;
@property (nonatomic, copy) id /* block */ updatedConfigurationHandler;
@property (nonatomic, copy) NSArray *viewConfigurations;
@property (nonatomic, readonly) NSArray *visibleConfigurations;
@property (nonatomic) double visiblePanelWidth;

+ (id)reloadQueue;

- (void).cxx_destruct;
- (void)addObservers;
- (double)appliedHorizontalAdjustment;
- (double)appliedHorizontalAdjustmentRatio;
- (double)currentTextViewOffset;
- (void)dealloc;
- (id)editGrouper;
- (id)filter;
- (id)initWithTextView:(id)arg1 managedObjectContext:(id)arg2 panelWidth:(double)arg3 previewPanelWidth:(double)arg4;
- (id)managedObjectContext;
- (id)noteLastOpenedDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overrideZoomFactor;
- (double)panelWidth;
- (double)preferredHighlightValue;
- (double)previewPanelWidth;
- (void)reloadConfigurationsWithCompletion:(id /* block */)arg1;
- (void)reloadViewConfigurationsSynchronously;
- (void)removeObservers;
- (void)setAppliedHorizontalAdjustment:(double)arg1;
- (void)setCurrentTextViewOffset:(double)arg1;
- (void)setEditGrouper:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setOverrideZoomFactor:(id)arg1;
- (void)setPanelWidth:(double)arg1;
- (void)setPreviewPanelWidth:(double)arg1;
- (void)setUpdatedConfigurationHandler:(id /* block */)arg1;
- (void)setViewConfigurations:(id)arg1;
- (void)setVisiblePanelWidth:(double)arg1;
- (id)textView;
- (void)updateViewConfigurationsForTextViewOffset;
- (id /* block */)updatedConfigurationHandler;
- (id)viewConfigurations;
- (id)visibleConfigurations;
- (double)visiblePanelWidth;

@end
