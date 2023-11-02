
@interface WKSelectPicker : NSObject <UIContextMenuInteractionDelegate, WKFormControl> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    struct RetainPtr<UIContextMenuInteraction> { 
        void *m_ptr; 
    }  _selectContextMenuInteraction;
    struct RetainPtr<UIMenu> { 
        void *m_ptr; 
    }  _selectMenu;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)actionForOptionIndex:(long long)arg1;
- (id)actionForOptionItem:(const void*)arg1 withIndex:(long long)arg2;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (id)createMenu;
- (void)dealloc;
- (void)didSelectOptionIndex:(long long)arg1;
- (void)ensureContextMenuInteraction;
- (id)initWithView:(id)arg1;
- (id)menuItemTitles;
- (void)removeContextMenuInteraction;
- (bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;
- (void)showSelectPicker;

@end
