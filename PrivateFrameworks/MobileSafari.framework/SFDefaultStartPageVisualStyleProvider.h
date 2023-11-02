
@interface SFDefaultStartPageVisualStyleProvider : NSObject <SFStartPageVisualStyleProviding>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultRowSpacing;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double sectionHeaderBottomGap;
@property (nonatomic, readonly) UIFont *sectionHeaderLargeTitleFont;
@property (readonly) Class superclass;

+ (id)sharedProvider;

- (id)backgroundEffectForSupplementaryActions;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewContentInsetsWithNavigationBarPosition:(long long)arg1;
- (double)defaultRowSpacing;
- (long long)numberOfColumnsForSectionItemType:(long long)arg1 sectionWidth:(double)arg2 traitCollection:(id)arg3;
- (double)rowSpacingForSectionItemType:(long long)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInsetsWithViewLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)sectionHeaderBottomGap;
- (id)sectionHeaderLargeTitleFont;
- (double)siteIconSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColorForSupplementaryActions;

@end
