
@protocol TSAUIState <TSKUIState>

@required

- (bool)editingDisabled;
- (TSKSelectionPath *)selectionPath;
- (void)setEditingDisabled:(bool)arg1;
- (void)setSelectionPath:(TSKSelectionPath *)arg1;

@end
