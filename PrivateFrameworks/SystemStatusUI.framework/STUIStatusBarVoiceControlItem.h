
@interface STUIStatusBarVoiceControlItem : STUIStatusBarIndicatorItem

+ (id)pillCombinedDisplayIdentifier;

- (id)_overriddenStyleAttributesForVoiceControlType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)imageNameForUpdate:(id)arg1;
- (double)imageOpacityForVoiceControlType:(long long)arg1;
- (id)indicatorEntryKey;
- (id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2;

@end
