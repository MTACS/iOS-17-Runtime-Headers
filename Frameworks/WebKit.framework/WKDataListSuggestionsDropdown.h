
@interface WKDataListSuggestionsDropdown : WKDataListSuggestionsControl <UIContextMenuInteractionDelegate> {
    struct RetainPtr<UIContextMenuInteraction> { 
        void *m_ptr; 
    }  _suggestionsContextMenuInteraction;
    struct RetainPtr<NSArray<UIMenuElement *>> { 
        void *m_ptr; 
    }  _suggestionsMenuElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_displayWithActivationType:(unsigned char)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredEdgeInsetsForSuggestionsMenu;
- (void)_removeContextMenuInteraction;
- (void)_showSuggestions;
- (void)_suggestionsMenuDidDismiss;
- (void)_suggestionsMenuDidPresent;
- (void)_updateSuggestionsMenuElements;
- (void)_updateTextSuggestions;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)didSelectOptionAtIndex:(long long)arg1;
- (id)initWithInformation:(void*)arg1 inView:(id)arg2;
- (void)invalidate;
- (void)showSuggestionsDropdown:(void*)arg1 activationType:(unsigned char)arg2;
- (void)updateWithInformation:(void*)arg1;

@end
