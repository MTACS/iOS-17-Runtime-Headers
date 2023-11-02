
@interface UIStackView : UIView {
    _UIAlignedLayoutArrangement * _alignmentArrangement;
    bool  _didRequestTallestBaselineViewForFirst;
    bool  _didRequestTallestBaselineViewForLast;
    _UIOrderedLayoutArrangement * _distributionArrangement;
    bool  _layoutMarginsRelativeArrangement;
    NSMutableArray * _mutableLayoutArrangements;
    bool  _viewForFirstBaselineLayoutDidChange;
    bool  _viewForLastBaselineLayoutDidChange;
}

@property (nonatomic) long long _mapsui_alignment;
@property (nonatomic) long long _mapsui_axis;
@property (nonatomic) long long _mapsui_distribution;
@property (nonatomic) long long _mk_axis;
@property (nonatomic) long long alignment;
@property (nonatomic, readonly, copy) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) bool layoutMarginsRelativeArrangement;
@property (nonatomic) double spacing;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_baselineViewForFirst:(bool)arg1;
- (double)_calculatedIntrinsicHeight;
- (void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1;
- (bool)_hasLayoutArrangements;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)_mutableLayoutArrangements;
- (bool)_ola_isCandidateForMultilineTextWidthDisambiguationWhenArranged;
- (double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2;
- (bool)_recordBaselineLoweringInfo;
- (bool)_shouldRequestTallestBaselineViewForFirst:(bool)arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(bool*)arg4;
- (void)_vendedBaselineViewDidMoveForFirst:(bool)arg1;
- (void)_vendedBaselineViewParametersDidChange;
- (void)addArrangedSubview:(id)arg1;
- (long long)alignment;
- (id)arrangedSubviews;
- (long long)axis;
- (double)customSpacingAfterView:(id)arg1;
- (id)description;
- (long long)distribution;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isBaselineRelativeArrangement;
- (bool)isLayoutMarginsRelativeArrangement;
- (void)removeArrangedSubview:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setLayoutMarginsRelativeArrangement:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSpacing:(double)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (double)spacing;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (void)_addSpacerView;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (id)_inui_stackViewWithArrangedSubviews:(id)arg1 userInteractionEnabled:(bool)arg2;

- (void)_inui_setAxis:(long long)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_removeArrangedSubview:(id)arg1;
- (void)_mapkit_setArrangedSubviews:(id)arg1;
- (long long)_mk_axis;
- (void)set_mk_axis:(long long)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_baselineAlignedHorizontalStackView;
+ (id)mf_baselineAlignedVerticalStackView;
+ (id)mf_equalSpacingHorizontalStackView;
+ (id)mf_equallyFilledHorizontalStackView;
+ (id)mf_equallyFilledVerticalStackView;

- (void)mf_addArrangedSubviews:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

- (void)cps_addArrangedSpacerWithHeight:(double)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (void)doc_addFlexiblySpacedArrangedSubviews:(id)arg1 minSpacing:(double)arg2 maxSpacing:(double)arg3;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (long long)_mapsui_alignment;
- (long long)_mapsui_axis;
- (long long)_mapsui_distribution;
- (void)_mapsui_removeArrangedSubview:(id)arg1;
- (void)_mapsui_setArrangedSubviews:(id)arg1;
- (void)_mapsui_setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_mapsui_alignment:(long long)arg1;
- (void)set_mapsui_axis:(long long)arg1;
- (void)set_mapsui_distribution:(long long)arg1;

@end
