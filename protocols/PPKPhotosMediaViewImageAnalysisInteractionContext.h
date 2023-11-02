
@protocol PPKPhotosMediaViewImageAnalysisInteractionContext

@required

- (bool)actionInfoViewHidden;
- (unsigned long long)activeInteractionTypes;
- (void)addAnalysisObserver:(id <PPKPhotosMediaViewImageAnalysisInteractionContextObserver>)arg1;
- (VKCImageAnalysis *)analysis;
- (bool)analysisInteractionHidden;
- (unsigned long long)automaticallyInvokedInteraction;
- (<PPKPhotosMediaViewImageAnalysisInteractionContextDelegate> *)delegate;
- (NSError *)error;
- (NSString *)filledInfoButtonGlyphName;
- (bool)hasResultsForAnalysisTypes:(unsigned long long)arg1;
- (bool)highlightSelectableItemsEnabled;
- (NSString *)infoButtonGlyphName;
- (void)removeAnalysisObserver:(id <PPKPhotosMediaViewImageAnalysisInteractionContextObserver>)arg1;
- (void)setActionInfoViewHidden:(bool)arg1 animated:(bool)arg2;
- (void)setActiveInteractionTypes:(unsigned long long)arg1;
- (void)setAnalysisInteractionHidden:(bool)arg1 animated:(bool)arg2;
- (void)setAutomaticallyInvokedInteraction:(unsigned long long)arg1;
- (void)setDelegate:(id <PPKPhotosMediaViewImageAnalysisInteractionContextDelegate>)arg1;
- (void)setHighlightSelectableItemsEnabled:(bool)arg1;
- (void)toggleInteractionTypes:(unsigned long long)arg1;

@end
