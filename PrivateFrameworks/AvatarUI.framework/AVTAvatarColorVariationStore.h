
@interface AVTAvatarColorVariationStore : NSObject {
    NSMutableDictionary * _colorPresets;
}

@property (nonatomic, readonly) NSMutableDictionary *colorPresets;

- (void).cxx_destruct;
- (id)colorPresetFromColor:(id)arg1;
- (id)colorPresets;
- (id)colorVariationFromColor:(id)arg1;
- (id)init;
- (id)keyForColor:(id)arg1;
- (void)resetValues;
- (void)saveColorPreset:(id)arg1 forColor:(id)arg2;

@end
