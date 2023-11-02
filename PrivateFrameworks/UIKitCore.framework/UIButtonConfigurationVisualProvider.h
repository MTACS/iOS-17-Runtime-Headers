
@interface UIButtonConfigurationVisualProvider : NSObject <UIButtonModernVisualProvider> {
    unsigned long long  _accessibilityButtonShapesChangedToken;
    _UISystemBackgroundView * _backgroundView;
    UIButton * _button;
    struct { 
        unsigned int needsUpdateConfiguration : 1; 
    }  _flags;
    UIImageView * _imageView;
    UIImageView * _indicatorView;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } buttonBounds; 
        struct CGSize { 
            double width; 
            double height; 
        } idealSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageFrame; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } indicatorFrame; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } titleFrame; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } subtitleFrame; 
        struct { 
            double firstFromTop; 
            double lastFromBottom; 
        } baselineOffsets; 
        struct { 
            unsigned int isValid : 1; 
            unsigned int hasImage : 1; 
            unsigned int hasIndicator : 1; 
            unsigned int hasProgressIndicator : 1; 
            unsigned int hasTitle : 1; 
            unsigned int hasSubtitle : 1; 
        } flags; 
    }  _layoutData;
    double  _previousFirstBaselineOffsetForAttributeLowering;
    double  _previousLastBaselineOffsetForAttributeLowering;
    UIActivityIndicatorView * _progressIndicatorView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    bool  _vendsBaselineInformationToAutoLayout;
    double  _widthForMultilineTextLayout;
}

@property (nonatomic) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBaseline;
@property (nonatomic, readonly) bool hasMultilineText;
@property (readonly) unsigned long long hash;
@property (nonatomic) double previousFirstBaselineOffsetForAttributeLowering;
@property (nonatomic) double previousLastBaselineOffsetForAttributeLowering;
@property (readonly) Class superclass;
@property (nonatomic) bool vendsBaselineInformationToAutoLayout;
@property (nonatomic) double widthForMultilineTextLayout;

+ (bool)requiresNewVisualProviderForChanges;
+ (bool)shouldUpdateContextMenuEnabledOnMenuChanges;
+ (id)visualProviderForButton:(id)arg1;
+ (bool)wantsConfigurationUpdateForButtonShapes;

- (void).cxx_destruct;
- (void)_accessibilityButtonShapesChangedNotification:(id)arg1;
- (void)_applyButtonValuesToConfiguration:(id)arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct { double x_7_1_1; double x_7_1_2; } x7; struct { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; } x8; })_debugLayoutData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutBounds;
- (void)_layoutContent;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct { double x_7_1_1; double x_7_1_2; } x7; struct { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; } x8; })_layoutDataInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct { double x_7_1_1; double x_7_1_2; } x7; struct { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; } x8; })_layoutDataInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forConfiguration:(id)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct { double x_7_1_1; double x_7_1_2; } x7; struct { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; } x8; })_layoutDataUpdatingIfNecessary;
- (void)_updateBackgroundViewWithConfiguration:(id)arg1;
- (void)_updateImageViewWithConfiguration:(id)arg1;
- (void)_updateIndicatorWithConfiguration:(id)arg1;
- (void)_updateProgressIndicatorWithConfiguration:(id)arg1;
- (void)_updateSubtitleLabelWithConfiguration:(id)arg1;
- (void)_updateTitleLabelWithConfiguration:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)alignmentRectInsetsHaveChangedForChildImageView:(id)arg1;
- (void)applyConfiguration;
- (void)automaticallyUpdateConfigurationIfNecessary:(id)arg1;
- (id)backgroundViewCreateIfNeeded:(bool)arg1;
- (struct { double x1; double x2; })baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)button;
- (bool)canBecomeFocused;
- (void)cleanupForVisualProvider:(id)arg1;
- (id)contentBackdropView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 updateStyleForMenuWithConfiguration:(id)arg2 style:(id)arg3;
- (void)dealloc;
- (id)defaultFocusEffect;
- (void)didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)effectiveContentView;
- (bool)hasBaseline;
- (bool)hasMultilineText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageViewCreateIfNeeded:(bool)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)invalidateLayoutData;
- (bool)isOn;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)pointerEffectPreviewParameters;
- (id)pointerEffectWithPreview:(id)arg1;
- (id)pointerShapeInContainer:(id)arg1 proposal:(id /* block */)arg2;
- (void)pointerWillEnter:(id)arg1;
- (void)pointerWillExit:(id)arg1;
- (id)preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)preferredHoverEffect;
- (id)preferredHoverShape;
- (double)previousFirstBaselineOffsetForAttributeLowering;
- (double)previousLastBaselineOffsetForAttributeLowering;
- (id)selectionIndicatorView;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setButton:(id)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContextMenuIsPrimary:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMenu:(id)arg1;
- (void)setMenuProvider:(id /* block */)arg1;
- (void)setNeedsUpdateConfiguration;
- (void)setOn:(bool)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;
- (void)setPreviousFirstBaselineOffsetForAttributeLowering:(double)arg1;
- (void)setPreviousLastBaselineOffsetForAttributeLowering:(double)arg1;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setRole:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setVendsBaselineInformationToAutoLayout:(bool)arg1;
- (void)setWidthForMultilineTextLayout:(double)arg1;
- (id)subtitleViewCreateIfNeeded:(bool)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleViewCreateIfNeeded:(bool)arg1;
- (void)touchesBegan;
- (void)touchesEnded;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBaselineInformationDependentOnBounds;
- (void)updateConfigurationIfNecessary;
- (void)updateConstraints;
- (void)updatedAppliedCornerRadius:(double)arg1;
- (void)updatedAppliedCornersAreContinuous:(bool)arg1;
- (bool)useTitleForSelectedIndicatorBounds;
- (bool)vendsBaselineInformationToAutoLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visualBoundsWithCornerRadius:(double*)arg1;
- (double)widthForMultilineTextLayout;
- (void)willMoveToWindow:(id)arg1;

@end
