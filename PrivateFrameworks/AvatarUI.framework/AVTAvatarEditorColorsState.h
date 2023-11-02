
@interface AVTAvatarEditorColorsState : NSObject {
    NSMutableDictionary * _colorStorage;
    AVTAvatarColorVariationStore * _variationStore;
}

@property (nonatomic, retain) NSMutableDictionary *colorStorage;
@property (nonatomic, readonly) AVTAvatarColorVariationStore *variationStore;

- (void).cxx_destruct;
- (id)colorStorage;
- (id)initWithVariationStore:(id)arg1;
- (id)selectedColorForCategory:(long long)arg1 destinationIndex:(long long)arg2;
- (id)selectedColorPresetForCategory:(long long)arg1 destinationIndex:(long long)arg2;
- (void)setColorStorage:(id)arg1;
- (void)setSelectedColorPreset:(id)arg1 forCoreModelColor:(id)arg2;
- (id)storageForCategory:(long long)arg1;
- (id)variationStore;

@end
