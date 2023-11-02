
@interface PUOneUpSuggestionsController : NSObject <PUBrowsingViewModelChangeObserver> {
    PUBrowsingViewModel * _browsingViewModel;
    <PUOneUpSuggestionsControllerDelegate> * _delegate;
    struct { 
        bool suggestionAvailable; 
        bool canShowSuggestion; 
    }  _delegateRespondsTo;
    PUAssetReference * _focusedAssetReference;
    bool  _focusedLongEnough;
    bool  _inFocus;
    bool  _isPerformingUpdates;
    double  _lastFocusedAssetReferenceChangeTime;
    struct { 
        bool focusedAssetReference; 
        bool focusedLongEnough; 
        bool activeSuggestionsWindow; 
    }  _needsUpdateFlags;
    NSMutableDictionary * _suggestionInfos;
    PUOneUpSuggestionsProvider * _suggestionsProvider;
    bool  _viewVisible;
    bool  _willPerformUpdates;
}

@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpSuggestionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PUAssetReference *focusedAssetReference;
@property (getter=isFocusedLongEnough, nonatomic) bool focusedLongEnough;
@property (readonly) unsigned long long hash;
@property (getter=isInFocus, nonatomic) bool inFocus;
@property (nonatomic) double lastFocusedAssetReferenceChangeTime;
@property (nonatomic, readonly) NSMutableDictionary *suggestionInfos;
@property (nonatomic, readonly) PUOneUpSuggestionsProvider *suggestionsProvider;
@property (readonly) Class superclass;
@property (getter=isViewVisible, nonatomic) bool viewVisible;

- (void).cxx_destruct;
- (bool)_canBeginDisplayingSuggestionsForAssetReference:(id)arg1;
- (bool)_canKeepDisplayingSuggestionsForAssetReference:(id)arg1;
- (void)_dismissSuggestionInfo:(id)arg1;
- (void)_handleDataSourceChange:(id)arg1;
- (void)_handleSuggestionForAssetReference:(id)arg1;
- (void)_invalidateActiveSuggestionsWindow;
- (void)_invalidateFocusedAssetReference;
- (void)_invalidateFocusedLongEnough;
- (void)_invalidateInFocus;
- (void)_invalidateSuggestionsVisibility;
- (bool)_needsUpdate;
- (void)_removeSuggestionInfoForAssetReference:(id)arg1;
- (void)_requestSuggestionForAssetReference:(id)arg1;
- (void)_setNeedsUpdate;
- (id)_suggestionInfoForAssetReference:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_updateActiveSuggestionsWindowIfNeeded;
- (void)_updateFocusedAssetReferenceIfNeeded;
- (void)_updateFocusedLongEnoughIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateInFocus;
- (void)_updateSuggestions;
- (id)browsingViewModel;
- (id)delegate;
- (id)focusedAssetReference;
- (id)init;
- (id)initWithSuggestionsProvider:(id)arg1 browsingViewModel:(id)arg2;
- (void)invalidateLayout;
- (void)invalidateLayoutForAssetReference:(id)arg1;
- (void)invalidateSuggestions;
- (bool)isFocusedLongEnough;
- (bool)isInFocus;
- (bool)isViewVisible;
- (double)lastFocusedAssetReferenceChangeTime;
- (void)setDelegate:(id)arg1;
- (void)setFocusedAssetReference:(id)arg1;
- (void)setFocusedLongEnough:(bool)arg1;
- (void)setInFocus:(bool)arg1;
- (void)setLastFocusedAssetReferenceChangeTime:(double)arg1;
- (void)setViewVisible:(bool)arg1;
- (id)suggestionInfos;
- (id)suggestionsProvider;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
