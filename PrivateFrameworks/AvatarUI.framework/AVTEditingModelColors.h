
@interface AVTEditingModelColors : NSObject <NSCopying> {
    NSDictionary * _storage;
    AVTAvatarColorVariationStore * _variationStore;
}

@property (nonatomic, readonly) NSDictionary *storage;
@property (nonatomic, retain) AVTAvatarColorVariationStore *variationStore;

+ (id)buildAllColors;
+ (void)createColorsForPaletteCategory:(long long)arg1 inCache:(id)arg2 withDerivedPaletteCategories:(id)arg3;

- (void).cxx_destruct;
- (id)colorForSettingKind:(struct { long long x1; long long x2; })arg1 identifier:(id)arg2;
- (bool)colorHasDerivedColorDependency:(id)arg1;
- (id)colorsForSettingKind:(struct { long long x1; long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStorage:(id)arg1 variationStore:(id)arg2;
- (void)setVariationStore:(id)arg1;
- (id)storage;
- (id)variationStore;

@end
