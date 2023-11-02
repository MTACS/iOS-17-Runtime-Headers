
@interface WBSHighlightManager : NSObject <SLHighlightCenterDelegate> {
    NSMutableArray * _deferredAttributionPresenters;
    SLHighlightCenter * _highlightCenter;
    NSMutableDictionary * _highlightToAttributionViewMap;
    NSArray * _highlights;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isFetchingHighlights;
    NSCache * _linkDataCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setHighlights:, nonatomic, copy) NSArray *highlights;
@property (nonatomic, readonly) bool isFetchingHighlights;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFetchHighlights;
- (void)_enableNewSLAttributionViewAppereance;
- (void)_handleRemovalOfHighlights:(id)arg1;
- (void)_setHighlights:(id)arg1;
- (void)_showBannerIfNeededForPresenter:(id)arg1;
- (void)_updateAttributionViews;
- (void)_updateHighlights;
- (id)attributionViewForHighlight:(id)arg1;
- (void)fetchMetadataForHighlight:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)highlightCenter:(id)arg1 didRemoveHighlights:(id)arg2;
- (void)highlightCenterDidAddHighlights:(id)arg1;
- (id)highlights;
- (id)init;
- (bool)isFetchingHighlights;
- (void)loadLinkMetadataForMessageWithGUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendFeedbackForHighlight:(id)arg1 withType:(unsigned long long)arg2 inPrivateBrowsing:(bool)arg3;
- (void)updateHighlightForAttributionPresenter:(id)arg1;

@end
