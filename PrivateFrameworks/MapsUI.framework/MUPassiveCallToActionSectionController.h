
@interface MUPassiveCallToActionSectionController : MUCallToActionSectionController {
    MUPlaceSectionView * _sectionView;
    UIView * _suggestionView;
}

- (void).cxx_destruct;
- (void)_instrumentUserAction:(int)arg1;
- (void)_loadContentIfNeeded;
- (void)_unloadContent;
- (int)analyticsModuleType;
- (bool)hasContent;
- (bool)isImpressionable;
- (id)sectionView;
- (void)updateSuggestionView;

@end
