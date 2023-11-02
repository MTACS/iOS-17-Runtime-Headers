
@interface HighlightManager : WBSHighlightManager {
    NSMutableDictionary * _highlightToBackForwardListItemsMap;
    NSMutableDictionary * _highlightToPresentersMap;
}

- (void).cxx_destruct;
- (void)_handleRemovalOfHighlights:(id)arg1;
- (void)loadLinkMetadataForMessageWithGUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPresenter:(id)arg1 forHighlightIdentifier:(id)arg2;

@end
