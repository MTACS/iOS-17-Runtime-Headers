
@protocol PKPaletteViewStateObserving

@required

- (void)paletteViewStateDidChange:(id <PKPaletteViewStateSubject>)arg1;
- (void)paletteViewStateDidChange:(id <PKPaletteViewStateSubject>)arg1 updatePaletteAppearance:(bool)arg2;
- (void)paletteViewStateDidChangeAutoHide:(id <PKPaletteViewStateSubject>)arg1;
- (void)paletteViewStateDidChangeEnableKeyboardButtons:(id <PKPaletteViewStateSubject>)arg1;
- (void)paletteViewStateDidChangeInputAssistantItems:(id <PKPaletteViewStateSubject>)arg1;
- (void)paletteViewStateDidChangeIsVisible:(id <PKPaletteViewStateSubject>)arg1;
- (void)paletteViewStateDidChangeScaleFactor:(id <PKPaletteViewStateSubject>)arg1;
- (void)paletteViewStateDidChangeSelectedTool:(id <PKPaletteViewStateSubject>)arg1;

@optional

- (void)paletteViewStateDidChangeFloatingKeyboardType:(id <PKPaletteViewStateSubject>)arg1;

@end
