
@interface SBHLibraryCategoryStackView : UIView <BSDescriptionProviding, SBHIconImageCacheObserver> {
    NSString * _backdropGroupName;
    NSString * _backdropGroupNamespace;
    bool  _editing;
    bool  _highlighted;
    SBHIconImageCache * _iconImageCache;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    NSMutableArray * _iconImageViews;
    SBHLibraryIndicatorIconSettings * _iconSettings;
    bool  _innerIconImageInfoFrozen;
    NSArray * _innerIcons;
    unsigned long long  _numberOfCategories;
    bool  _overlapping;
    NSMutableArray * _podBackgroundViews;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, copy) NSString *backdropGroupNamespace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (getter=isInnerIconImageInfoFrozen, nonatomic) bool innerIconImageInfoFrozen;
@property (nonatomic, copy) NSArray *innerIcons;
@property (nonatomic) unsigned long long numberOfCategories;
@property (getter=isOverlapping, nonatomic) bool overlapping;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendConfiguredPodBackgroundView;
- (double)_innerIconEdgeSpacingFraction;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })_innerIconImageInfo;
- (double)_innerIconInterSpacingFraction;
- (void)_reconfigurePodBackgroundViews;
- (void)_removeLastPodBackgroundView;
- (id)_scalingAnimationSettingsForStackedViewAtIndex:(unsigned long long)arg1 scale:(out double*)arg2;
- (void)_updateIconImageViewAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updateIconImageViewsAnimated:(bool)arg1;
- (double)alphaForStackedViewAtIndex:(unsigned long long)arg1;
- (id)backdropGroupName;
- (id)backdropGroupNamespace;
- (id)backgroundViewForIndex:(unsigned long long)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForStackedViewAtIndex:(unsigned long long)arg1;
- (void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerIcons;
- (bool)isEditing;
- (bool)isHighlighted;
- (bool)isInnerIconImageInfoFrozen;
- (bool)isOverlapping;
- (void)layoutSubviews;
- (id)matchingCategoryStackView;
- (unsigned long long)numberOfCategories;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackdropGroupNamespace:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setInnerIconImageInfoFrozen:(bool)arg1;
- (void)setInnerIcons:(id)arg1;
- (void)setInnerIcons:(id)arg1 animated:(bool)arg2;
- (void)setNumberOfCategories:(unsigned long long)arg1;
- (void)setOverlapping:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentFrame;

@end
