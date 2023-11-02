
@interface UIActivityIndicatorView : UIView <NSCoding, UIActivityIndicatorProvider, _UIVisualStyleStylable> {
    long long  _activityIndicatorViewStyle;
    long long  _actualActivityIndicatorViewStyle;
    bool  _animating;
    UIImageView * _animatingImageView;
    UIColor * _color;
    double  _customWidth;
    bool  _disableUpdateColorOnTraitCollectionChange;
    double  _duration;
    bool  _hasShadow;
    bool  _hidesWhenStopped;
    _UIActivityIndicatorViewArtworkCacheKey * _lastArtCacheKey;
    _UIActivityIndicatorViewArtworkCacheKey * _lastHighlightArtCacheKey;
    NSString * _message;
    _UIActivityIndicatorMessageLabel * _messageLabel;
    bool  _restartAnimationOnNextLayout;
    UIColor * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    bool  _spinning;
    long long  _spokeCount;
    long long  _spokeFrameRatio;
    NSArray * _spokeHighlightImages;
    NSArray * _spokeImages;
    _UIActivityIndicatorViewStyleView * _styleView;
    bool  _wasAnimatingWhenAnimationsRemoved;
    double  _width;
}

@property (setter=_setCustomWidth:, nonatomic) double _customWidth;
@property (nonatomic) long long activityIndicatorViewStyle;
@property (getter=_actualActivityIndicatorViewStyle, nonatomic, readonly) long long actualActivityIndicatorViewStyle;
@property (getter=isAnimating, nonatomic) bool animating;
@property (getter=_animatingImageView, nonatomic, readonly) UIImageView *animatingImageView;
@property (nonatomic) double animationDuration;
@property (nonatomic, retain) UIColor *color;
@property (getter=_disableUpdateColorOnTraitCollectionChange, nonatomic, readonly) bool disableUpdateColorOnTraitCollectionChange;
@property (nonatomic) bool hasShadow;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) bool hidesWhenStopped;
@property (getter=_lastArtCacheKey, nonatomic, readonly) _UIActivityIndicatorViewArtworkCacheKey *lastArtCacheKey;
@property (getter=_lastHighlightArtCacheKey, nonatomic, readonly) _UIActivityIndicatorViewArtworkCacheKey *lastHighlightArtCacheKey;
@property (getter=_message, setter=_setMessage:, nonatomic, retain) NSString *message;
@property (getter=_messageLabel, nonatomic, readonly) _UIActivityIndicatorMessageLabel *messageLabel;
@property (getter=_restartAnimationOnNextLayout, nonatomic, readonly) bool restartAnimationOnNextLayout;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property bool spinning;
@property (getter=_spokeCount, nonatomic, readonly) long long spokeCount;
@property (getter=_spokeFrameRatio, nonatomic, readonly) long long spokeFrameRatio;
@property (getter=_spokeHighlightImages, nonatomic, readonly) NSArray *spokeHighlightImages;
@property (getter=_spokeImages, nonatomic, readonly) NSArray *spokeImages;
@property (nonatomic) double width;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_imageSetNameForArtworkBasedStyle:(long long)arg1 outImageCount:(out long long*)arg2;
+ (id)_loadResourcesForArtworkBasedStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeForStyle:(long long)arg1;
+ (id)visualStyleRegistryIdentity;

- (void).cxx_destruct;
- (long long)_actualActivityIndicatorViewStyle;
- (long long)_actualStyleByResolvingAutoUpdatingStyle:(long long)arg1;
- (double)_alphaValueForStep:(long long)arg1;
- (id)_animatingImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_animatingImageViewFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_artCacheKeyWithStyle:(long long)arg1 color:(id)arg2;
- (bool)_colorRequiresDynamicTinting;
- (void)_commonInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (long long)_customStyleForStyle:(long long)arg1;
- (double)_customWidth;
- (id)_defaultColorForStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_defaultSizeConsultingCustomWidthIfApplicable;
- (long long)_defaultStyle;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableUpdateColorOnTraitCollectionChange;
- (double)_effectiveCustomWidth;
- (long long)_externalStyleForStyle:(long long)arg1;
- (id)_generateImagesForColor:(id)arg1 highlight:(bool)arg2;
- (id)_generateModernImagesForImages:(id)arg1 color:(id)arg2;
- (bool)_hasClientSetColor;
- (bool)_hasShadow;
- (id)_highlightColorForStyle:(long long)arg1;
- (id)_imageForStep:(long long)arg1 withColor:(id)arg2;
- (id)_imagesForStyle:(long long)arg1 color:(id)arg2 highlight:(bool)arg3;
- (unsigned long long)_indexOfFirstImageForStartingAnimation;
- (long long)_internalStyleForStyle:(long long)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isArtworkBasedStyle;
- (bool)_isShowingMessage;
- (bool)_isStatusBarStyle;
- (id)_lastArtCacheKey;
- (id)_lastHighlightArtCacheKey;
- (id)_message;
- (id)_messageLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_messageLabelFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_refreshStyle;
- (void)_removeAllAnimations:(bool)arg1;
- (bool)_restartAnimationOnNextLayout;
- (void)_restoreRemovedAnimationsIncludingSubviews;
- (void)_setCustomWidth:(double)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setUpAnimation;
- (bool)_shouldGoBackToBaseStyle;
- (bool)_shouldGoToCustomStyle;
- (long long)_sizeForStyle:(long long)arg1;
- (long long)_spokeCount;
- (long long)_spokeFrameRatio;
- (id)_spokeHighlightImages;
- (id)_spokeImages;
- (double)_spokeLengthForGearWidth:(double)arg1;
- (double)_spokeWidthForGearWidth:(double)arg1;
- (void)_tearDownAnimation;
- (void)_updateLayoutInfo;
- (void)_updateMessageForStyle:(long long)arg1;
- (void)_updateSubviewFramesWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateVisualStyleProperties;
- (bool)_useCustomStyleForLegacyStyles;
- (bool)_wantsAnimationRestoration;
- (double)_widthForGearWidth:(double)arg1;
- (long long)activityIndicatorViewStyle;
- (double)animationDuration;
- (id)color;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasShadow;
- (bool)hidesWhenStopped;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setHidesWhenStopped:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpinning:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setWidth:(double)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)spinning;
- (void)startAnimating;
- (void)startAnimation;
- (void)stopAnimating;
- (void)stopAnimation;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (double)width;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)mt_applyVisualStyling:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)smu_activityIndicatorViewForStyleWithLoadingMessage;

@end
