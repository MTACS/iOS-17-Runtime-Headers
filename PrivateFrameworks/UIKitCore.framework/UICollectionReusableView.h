
@interface UICollectionReusableView : UIView <UIEditable> {
    UICollectionView * _collectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultLayoutMargins;
    NSString * _elementKind;
    UICollectionViewLayoutAttributes * _layoutAttributes;
    bool  _preferredAttributesValid;
    struct { 
        unsigned int wasDequeued : 1; 
        unsigned int hasBeenReused : 1; 
        unsigned int preferredAttributesValid : 1; 
        unsigned int generatingPreferredAttributes : 1; 
        unsigned int didSetMasksToBounds : 1; 
        unsigned int didSetMaskedCorners : 1; 
        unsigned int didSetCornerRadius : 1; 
        unsigned int didSetMaskView : 1; 
        unsigned int hasBlocksToPerformWhenReused : 1; 
        unsigned int isBeingReused : 1; 
        unsigned int isDisplayed : 1; 
        unsigned int collectionViewHasBeenExplicitlySet : 1; 
        unsigned int shouldConstrainWidth : 1; 
        unsigned int shouldConstrainHeight : 1; 
        unsigned int hasDefaultLayoutMargins : 1; 
        unsigned int automaticIntrinsicContentSizeInvalidationEnabled : 1; 
    }  _reusableViewFlags;
    NSString * _reuseIdentifier;
    long long  _updateAnimationCount;
}

@property (setter=_setAutomaticIntrinsicContentSizeInvalidationEnabled:, nonatomic) bool _automaticIntrinsicContentSizeInvalidationEnabled;
@property (nonatomic, readonly) bool canBeEdited;
@property (getter=_collectionView, setter=_setCollectionView:, nonatomic) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (getter=_elementKind, setter=_setElementKind:, nonatomic, copy) NSString *elementKind;
@property (getter=_hasBeenReused, nonatomic, readonly) bool hasBeenReused;
@property (readonly) unsigned long long hash;
@property (getter=_isInUpdateAnimation, nonatomic, readonly) bool inUpdateAnimation;
@property (getter=_isBeingReused, setter=_setIsBeingReused:, nonatomic) bool isBeingReused;
@property (getter=_layoutAttributes, setter=_setLayoutAttributes:, nonatomic, copy) UICollectionViewLayoutAttributes *layoutAttributes;
@property (getter=_arePreferredAttributesValid, nonatomic) bool preferredAttributesValid;
@property (setter=_setReuseIdentifier:, nonatomic, copy) NSString *reuseIdentifier;
@property (getter=_shouldConstrainHeight, setter=_setShouldConstrainHeight:, nonatomic) bool shouldConstrainHeight;
@property (getter=_shouldConstrainWidth, setter=_setShouldConstrainWidth:, nonatomic) bool shouldConstrainWidth;
@property (readonly) Class superclass;
@property (setter=tv_setBelongsToOldIndexPath:, nonatomic) bool tv_belongsToOldIndexPath;
@property (getter=tv_isDisplayed, setter=tv_setDisplayed:, nonatomic) bool tv_displayed;
@property (getter=tv_isFocused, setter=tv_setFocused:, nonatomic) bool tv_focused;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_addBackdropViewForMaskingIfNeeded;
- (void)_addUpdateAnimation;
- (bool)_appliesLayoutAttributesMaskingToReusableView;
- (bool)_arePreferredAttributesValid;
- (bool)_automaticIntrinsicContentSizeInvalidationEnabled;
- (void)_clearUpdateAnimation;
- (id)_collectionView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_concreteDefaultLayoutMargins;
- (long long)_contentViewListStyleFromLayoutAttributes:(id)arg1;
- (bool)_disableGroupOpacityInAnimations;
- (bool)_disableRasterizeInAnimations;
- (id)_elementKind;
- (bool)_hasBeenReused;
- (void)_invalidatePreferredAttributes;
- (bool)_isBeingReused;
- (bool)_isFocusableWhenStyledAsHeader;
- (bool)_isInUpdateAnimation;
- (bool)_isStyledAsHeaderOrFooterFromLayoutAttributes:(id)arg1;
- (id)_layoutAttributes;
- (void)_markAsDequeued;
- (void)_notifyIsDisplaying:(bool)arg1;
- (void)_performBlockWhenReused:(id /* block */)arg1;
- (void)_performBlocksForReuse;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1 isAnimatingExistingView:(bool)arg2;
- (void)_removeExistingBackdropViewForMasking;
- (void)_setAutomaticIntrinsicContentSizeInvalidationEnabled:(bool)arg1;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setElementKind:(id)arg1;
- (void)_setHiddenForReuse:(bool)arg1;
- (void)_setIsBeingReused:(bool)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1 force:(bool)arg2;
- (void)_setMaskView:(id)arg1;
- (void)_setReuseIdentifier:(id)arg1;
- (void)_setShouldConstrainHeight:(bool)arg1;
- (void)_setShouldConstrainWidth:(bool)arg1;
- (bool)_shouldConstrainHeight;
- (bool)_shouldConstrainWidth;
- (long long)_styleFromLayoutAttributes:(id)arg1;
- (void)_updateDefaultLayoutMarginsUsingAttributes:(id)arg1;
- (void)_updateMaskViewUsingAttributes:(id)arg1;
- (void)_updateMaskingUsingAttributes:(id)arg1;
- (bool)_wasDequeued;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)canBeEdited;
- (void)didMoveToSuperview;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)isEditing;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)setEditing:(bool)arg1;
- (void)setPreferredAttributesValid:(bool)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)_gkAdjustConstraintMargins:(id)arg1 leading:(double)arg2 trailing:(double)arg3;
+ (void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7;
+ (void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;
+ (id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;
+ (id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLabel:(id)arg3 lowerLabel:(id)arg4 leadingBetween:(double)arg5 fontTextStyle:(id)arg6 metricOverrides:(id)arg7;
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1;
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2;
+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;

- (id)_gkNewStandardImageView;
- (id)_gkNewStandardInfoLabel;
- (id)_gkNewStandardTitleLabel;
- (void)_gkSetLeadingGuideConstraint:(id)arg1 trailingGuideConstraint:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (bool)tv_belongsToOldIndexPath;
- (bool)tv_isDisplayed;
- (bool)tv_isFocused;
- (void)tv_setBelongsToOldIndexPath:(bool)arg1;
- (void)tv_setDisplayed:(bool)arg1;
- (void)tv_setFocused:(bool)arg1;

@end
