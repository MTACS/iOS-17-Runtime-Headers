
@interface TSTTableStrokePresetList : NSObject {
    unsigned long long  mCount;
    TSTTableStrokePresetData * mPresets;
}

+ (id)init;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetIndex:(unsigned long long)arg1 colors:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg1 andThinStroke:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3;

- (unsigned long long)count;
- (void)dealloc;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (id)presetAtIndex:(unsigned long long)arg1;
- (void)setStroke:(id)arg1 forPresetIndex:(unsigned long long)arg2;
- (void)setStrokePreset:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;

@end
