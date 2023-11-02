
@interface UIListSeparatorConfiguration : NSObject <NSCopying, NSSecureCoding> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _bottomSeparatorInsets;
    long long  _bottomSeparatorVisibility;
    UIColor * _color;
    bool  _ignoreBottomSeparatorInsetsFromCell;
    bool  _ignoreTopSeparatorInsetsFromCell;
    UIColor * _multipleSelectionColor;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _topSeparatorInsets;
    long long  _topSeparatorVisibility;
    UIVisualEffect * _visualEffect;
}

@property (getter=_ignoreBottomSeparatorInsetsFromCell, setter=_setIgnoreBottomSeparatorInsetsFromCell:, nonatomic) bool _ignoreBottomSeparatorInsetsFromCell;
@property (getter=_ignoreTopSeparatorInsetsFromCell, setter=_setIgnoreTopSeparatorInsetsFromCell:, nonatomic) bool _ignoreTopSeparatorInsetsFromCell;
@property (getter=_visualEffect, setter=_setVisualEffect:, nonatomic, copy) UIVisualEffect *_visualEffect;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } bottomSeparatorInsets;
@property (nonatomic) long long bottomSeparatorVisibility;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIColor *multipleSelectionColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } topSeparatorInsets;
@property (nonatomic) long long topSeparatorVisibility;
@property (nonatomic, copy) UIVisualEffect *visualEffect;

+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceInsetGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearancePlain;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebar;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebarPlain;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__copyWithSubclass:(Class)arg1 inZone:(struct _NSZone { }*)arg2;
- (id)_color;
- (bool)_ignoreBottomSeparatorInsetsFromCell;
- (bool)_ignoreTopSeparatorInsetsFromCell;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_insets;
- (id)_multipleSelectionColor;
- (id)_multiselectSeparatorColorForListAppearance:(long long)arg1;
- (void)_replaceAutomaticValuesWithValuesFromConfiguration:(id)arg1;
- (void)_setColor:(id)arg1;
- (void)_setIgnoreBottomSeparatorInsetsFromCell:(bool)arg1;
- (void)_setIgnoreTopSeparatorInsetsFromCell:(bool)arg1;
- (void)_setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setMultipleSelectionColor:(id)arg1;
- (void)_setVisualEffect:(id)arg1;
- (id)_visualEffect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })bottomSeparatorInsets;
- (long long)bottomSeparatorVisibility;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithListAppearance:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)multipleSelectionColor;
- (void)setBottomSeparatorInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBottomSeparatorVisibility:(long long)arg1;
- (void)setColor:(id)arg1;
- (void)setMultipleSelectionColor:(id)arg1;
- (void)setTopSeparatorInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopSeparatorVisibility:(long long)arg1;
- (void)setVisualEffect:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })topSeparatorInsets;
- (long long)topSeparatorVisibility;
- (id)visualEffect;

@end
