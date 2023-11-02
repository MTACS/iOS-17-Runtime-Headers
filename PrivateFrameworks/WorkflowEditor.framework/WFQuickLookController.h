
@interface WFQuickLookController : QLPreviewController <WFQuickLookRefreshing> {
    bool  _embedded;
    NSTimer * _indexTimer;
    NSMutableIndexSet * _indexesPendingRefresh;
    long long  _lastIndex;
}

@property (getter=isEmbedded, nonatomic) bool embedded;
@property (nonatomic, retain) NSTimer *indexTimer;
@property (nonatomic, retain) NSMutableIndexSet *indexesPendingRefresh;
@property (nonatomic) long long lastIndex;

- (void).cxx_destruct;
- (void)_updateAppearance:(bool)arg1;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (id)indexTimer;
- (id)indexesPendingRefresh;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEmbedded;
- (long long)lastIndex;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setEmbedded:(bool)arg1;
- (void)setIndexTimer:(id)arg1;
- (void)setIndexesPendingRefresh:(id)arg1;
- (void)setLastIndex:(long long)arg1;
- (void)updateCurrentIndex;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)wf_refreshPreviewItemAtIndex:(long long)arg1;

@end
