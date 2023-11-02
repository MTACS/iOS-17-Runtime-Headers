
@interface HUSceneSuggestionsViewController : HUItemTableViewController <HUPresentationDelegateHost> {
    <HUPresentationDelegate> * _presentationDelegate;
    <HUSceneEditorDelegate> * _sceneEditorDelegate;
    HUSceneSuggestionsItemManager * _suggestionsItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) <HUSceneEditorDelegate> *sceneEditorDelegate;
@property (nonatomic) HUSceneSuggestionsItemManager *suggestionsItemManager;
@property (readonly) Class superclass;

+ (id)computeNumberOfSuggestionsInHome:(id)arg1;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_showActionEditorForActionSetSuggestionItem:(id)arg1;
- (void)_showActionEditorForNewCustomScene;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)init;
- (id)presentationDelegate;
- (id)sceneEditorDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSceneEditorDelegate:(id)arg1;
- (void)setSuggestionsItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)suggestionsItemManager;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
