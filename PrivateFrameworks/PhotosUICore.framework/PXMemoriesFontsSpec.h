
@interface PXMemoriesFontsSpec : NSObject {
    double  _baselineDistance;
    NSDictionary * _fallbackTitleTextAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    NSDictionary * _subtitleTextAttributes;
    NSDictionary * _titleTextAttributes;
}

@property (nonatomic, readonly) double baselineDistance;
@property (nonatomic, readonly) NSDictionary *fallbackTitleTextAttributes;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) NSDictionary *subtitleTextAttributes;
@property (nonatomic, readonly) NSDictionary *titleTextAttributes;

+ (id)_fontSetByTitleFontName;
+ (id)_fontSpecCache;
+ (void)_getSpecSet:(out long long*)arg1 variant:(out long long*)arg2 forDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg3 extendedTraitCollection:(id)arg4;
+ (long long)_memoryLabelKindForDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
+ (double)_playButtonPaddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 deviceMargin:(double)arg4 forHeaderTile:(bool)arg5;
+ (id)_titleFontNameByFontSet;
+ (double)baselineDistanceForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4 shouldScale:(bool)arg5;
+ (long long)capitalizationStyleForLabelKind:(long long)arg1;
+ (id)memoriesFontsSpecForDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1 extendedTraitCollection:(id)arg2;
+ (long long)numberOfLinesForLabelKind:(long long)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 width:(double)arg5 shouldScale:(bool)arg6 forHeaderTile:(bool)arg7;
+ (void)preloadFontsSpecsForExtendedTraitCollection:(id)arg1;
+ (id)supportedTitleFontNames;
+ (id)textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 shadow:(id)arg6 capitalizationStyle:(long long)arg7;
+ (id)textAttributesForFontSet:(long long)arg1 specSet:(long long)arg2 labelKind:(long long)arg3 variant:(long long)arg4 size:(struct CGSize { double x1; double x2; })arg5 shouldScale:(bool)arg6;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(struct PXMemoryFontsSpecIdentifier { long long x1; long long x2; long long x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; bool x6; })arg1;
- (double)baselineDistance;
- (id)fallbackTitleTextAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)subtitleTextAttributes;
- (id)titleTextAttributes;

@end
