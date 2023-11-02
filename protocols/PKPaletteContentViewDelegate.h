
@protocol PKPaletteContentViewDelegate <NSObject>

@required

- (void)contentViewDidDismissInputAssistantView:(PKPaletteContentView *)arg1;
- (void)contentViewDidResize:(PKPaletteContentView *)arg1;
- (void)contentViewDidSelectInputAssistantKeyboardItem:(PKPaletteContentView *)arg1;
- (void)contentViewDidSelectInputAssistantReturnKeyItem:(PKPaletteContentView *)arg1;
- (UIMenu *)keyboardSelectionMenuForContentView:(PKPaletteContentView *)arg1;

@end
