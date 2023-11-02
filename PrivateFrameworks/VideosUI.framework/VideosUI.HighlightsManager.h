
@interface VideosUI.HighlightsManager : NSObject <SLHighlightCenterDelegate> {
    void $__lazy_storage_$_syndicationIdToHighlightMap;
    void cachedDSID;
    void highlightCenter;
    void internalHighlightsVersion;
    void pendingHighlightsUpdate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAccountStoreDidChange:(id)arg1;
- (void)highlightCenter:(id)arg1 didRemoveHighlights:(id)arg2;
- (void)highlightCenterDidAddHighlights:(id)arg1;
- (void)highlightCenterSettingsEnablementHasChanged:(id)arg1;
- (id)init;

@end
