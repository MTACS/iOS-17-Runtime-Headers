
@protocol CAMFullscreenViewfinderDelegate <NSObject>

@required

- (void)fullscreenViewFinder:(CAMFullscreenViewfinder *)arg1 willDismissControlDrawerModallyForControlType:(long long)arg2 reason:(long long)arg3;
- (void)fullscreenViewFinder:(CAMFullscreenViewfinder *)arg1 willPresentControlDrawerModallyForControlType:(long long)arg2 reason:(long long)arg3;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeControlDrawerVisibility:(bool)arg2 forReason:(long long)arg3;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeExpanded:(bool)arg2 forDrawerControlOfType:(long long)arg3 animated:(bool)arg4;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didCreateInstructionLabel:(long long)arg2;
- (bool)fullscreenViewfinderCanUpdatePreviewSemanticStyles:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidChangeSemanticStyle:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateAutoMacroButton:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateControlDrawer:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateDepthEffectSuggestionButton:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateExternalStorageButton:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreatePortraitControls:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateSemanticStyleControls:(CAMFullscreenViewfinder *)arg1;
- (CAMSemanticStyle *)fullscreenViewfinderSelectedSemanticStyle:(CAMFullscreenViewfinder *)arg1;
- (NSArray *)fullscreenViewfinderSemanticStyleList:(CAMFullscreenViewfinder *)arg1;

@end
