
@interface MUPlaceActionRowSectionController : MUPlaceSectionController <MUPlaceCardActionsRowViewMenuProvider> {
    <MKPlaceActionManagerProtocol> * _actionManager;
    MUPlaceCardActionsRowViewController * _actionsRowViewController;
    <MUPlaceActionRowMenuProvider> * _menuProvider;
    MUPlaceholderGridCache * _placeholderGridCache;
    MUPlaceSectionView * _sectionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupButtons;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 actionManager:(id)arg2 menuProvider:(id)arg3;
- (bool)isImpressionable;
- (id)menuElementForActionItem:(id)arg1;
- (id)menuForActionItem:(id)arg1;
- (id)sectionView;
- (void)updateForActionRowInfoChange;

@end
