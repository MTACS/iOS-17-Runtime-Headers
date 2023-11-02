
@interface UILabel : UIView <ABText, HUActsAsLabel, MPUAutoupdatingTextContainer, MUWidthMeasurable, NCTextSupporting, NSCoding, NUCrossFadeViewAnimatable, UIContentSizeCategoryAdjusting, UILetterformAwareAdjusting, _UILabelVisualStyleSubject, _UIMultilineTextContentSizing, _UIViewBaselineSpacing, _UIViewLanguageAwareAdjusting> {
    _UILabelConfiguration * __configuration;
    _UILabelVisualStyle * __visualStyle;
    unsigned long long  _accessibilityButtonShapesChangedToken;
    UIColor * _backgroundColor;
    NSDictionary * _cachedSynthesizedTextAttributes;
    _UILabelConfiguration * _configuration;
    _UILabelContent * _content;
    CUICatalog * _cuiCatalog;
    CUIStyleEffectConfiguration * _cuiStyleEffectConfiguration;
    NSMutableDictionary * _fallbackColorsForUserInterfaceStyle;
    UIFont * _fontForShortcutBaselineCalculation;
    UIColor * _highlightedColor;
    _UITextSizeCache * _intrinsicContentSizeCache;
    struct { 
        double firstBaseline; 
        double lastBaseline; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } referenceBounds; 
        long long measuredNumberOfLines; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    }  _intrinsicSizeBaselineInfo;
    UIColor * _lastSetColor;
    id  _layout;
    long long  _lineSpacing;
    NSMutableDictionary * _marqueeAnimations;
    NSMutableDictionary * _marqueeMaskAnimations;
    double  _minimumFontSize;
    double  _minimumScaleFactor;
    double  _multilineContextWidth;
    long long  _numberOfLines;
    double  _preferredMaxLayoutWidth;
    long long  _preferredVibrancy;
    double  _previousBaselineOffsetFromBottom;
    double  _previousFirstLineBaseline;
    _UILabelLegacyScaledMetrics * _scaledMetrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledMetricsTargetSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSAttributedString * _synthesizedAttributedText;
    NSTextEncapsulation * _textEncapsulation;
    struct { 
        unsigned int highlighted : 1; 
        unsigned int autosizeTextToFit : 1; 
        unsigned int supportMultiLineShrinkToFit : 1; 
        unsigned int autotrackTextToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int enabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int enablesMarqueeWhenAncestorFocused : 1; 
        unsigned int marqueeEnabled : 1; 
        unsigned int marqueeRunable : 1; 
        unsigned int marqueeRequired : 1; 
        unsigned int marqueeUpdatable : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int drawsDebugGlyphPathBoundsClipping : 1; 
        unsigned int explicitBaselineOffset : 1; 
        unsigned int usesSimpleTextEffects : 1; 
        unsigned int wantsUnderlineForAccessibilityButtonShapesEnabled : 1; 
        unsigned int disableUpdateTextColorOnTraitCollectionChange : 1; 
        unsigned int textAlignmentFollowsWritingDirection : 1; 
        unsigned int textAlignmentMirrored : 1; 
        unsigned int shortcutIntrinsicContentSize : 1; 
        unsigned int multilineLabelRequiresCarefulMeasurement : 1; 
        unsigned int noNeedsDisplayCheckForBaselineCalculationNeeded : 1; 
        unsigned int overallWritingDirectionFollowsLayoutDirection : 1; 
        unsigned int hyphenationFactorIgnoredIfURLsDetected : 1; 
        unsigned int extendedAccessibilityAdjustments : 1; 
        unsigned int canUseUILabelLayer : 1; 
        unsigned int implementsDefaultAttributes : 1; 
        unsigned int textColorFollowsTintColor : 1; 
        unsigned int materialTextColorFollowsTintColor : 1; 
        unsigned int showsExpansionTextWhenTruncated : 1; 
        unsigned int adjustsFontForContentSizeCategory : 1; 
        unsigned int disableConfigurationUpdate : 1; 
        unsigned int temporarilyDisableHighlight : 1; 
        unsigned int wantsContentAwareTypesettingLanguage : 1; 
        unsigned int isExtremeSizingEnabled : 1; 
        unsigned int sizingRule : 1; 
    }  _textLabelFlags;
}

@property (setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:, nonatomic) bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (nonatomic, readonly) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
@property (nonatomic, readonly) double _capOffsetFromBoundsTop;
@property (setter=_setConfiguration:, nonatomic, retain) _UILabelConfiguration *_configuration;
@property (getter=_content, setter=_setContent:, nonatomic, retain) _UILabelContent *_content;
@property (setter=_setDrawsDebugBaselines:, nonatomic) bool _drawsDebugBaselines;
@property (setter=_setDrawsDebugGlyphPathBoundsClipping:, nonatomic) bool _drawsDebugGlyphPathBoundsClipping;
@property (getter=_isExtremeSizingEnabled, setter=_setExtremeSizingEnabled:, nonatomic) bool _extremeSizingEnabled;
@property (setter=_setFirstLineBaselineFrameOriginY:, nonatomic) double _firstLineBaselineFrameOriginY;
@property (nonatomic, readonly) double _firstLineBaselineOffsetFromBoundsTop;
@property (setter=_setFirstLineCapFrameOriginY:, nonatomic) double _firstLineCapFrameOriginY;
@property (setter=set_fontForShortcutBaselineCalculation:, nonatomic, retain) UIFont *_fontForShortcutBaselineCalculation;
@property (nonatomic, readonly) bool _glyphPathBoundsClippingDetected;
@property (nonatomic, readonly) _UIGlyphPathBoundsIntersectionViewData *_glyphPathBoundsIntersectionData;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (setter=_setLastLineBaselineFrameOriginY:, nonatomic) double _lastLineBaselineFrameOriginY;
@property (nonatomic, copy) NSAttributedString *_mapsui_attributedText;
@property (nonatomic) long long _mapsui_numberOfLines;
@property (nonatomic, copy) NSString *_mapsui_text;
@property (nonatomic, readonly) long long _measuredNumberOfLines;
@property (setter=_setPreferredVibrancy:, nonatomic) long long _preferredVibrancy;
@property (getter=_synthesizedAttributedText, nonatomic, readonly, retain) NSAttributedString *_synthesizedAttributedText;
@property (setter=_setVisualStyle:, nonatomic, retain) _UILabelVisualStyle *_visualStyle;
@property (setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:, nonatomic) bool _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool accessibilityExposeLabelAsValue;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool adjustsLetterSpacingToFitWidth;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long baselineAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool enablesMarqueeWhenAncestorFocused;
@property (nonatomic, readonly) double firstBaselineFromTop;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, readonly) double idealWidth;
@property (nonatomic, readonly) bool jet_isTextExtraTall;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } jet_languageAwareOutsets;
@property (nonatomic, readonly) long long jet_textLength;
@property (nonatomic, readonly) double lastBaselineFromBottom;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) unsigned long long lineBreakStrategy;
@property (nonatomic) long long lineSpacing;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, readonly) double naui_baselineOffsetFromBottom;
@property (nonatomic, readonly) double naui_capOffsetFromTop;
@property (getter=nc_isMenuEnabled, setter=nc_setMenuEnabled:, nonatomic) bool nc_menuEnabled;
@property (setter=nc_setNumberOfLines:, nonatomic) unsigned long long nc_numberOfLines;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) long long preferredVibrancy;
@property (nonatomic) bool roundedFont;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) bool showsExpansionTextWhenTruncated;
@property (nonatomic) long long sizingRule;
@property (nonatomic) double smu_firstLineCapFrameOriginY;
@property (nonatomic) bool smu_marqueeEnabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (setter=ts_setWantsUnderlineForAccessibilityButtonShapesEnabled:, nonatomic) bool ts_wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultAttributes;
+ (id)_defaultColor;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAttributedString:(id)arg2 withDefaultFont:(id)arg3 inView:(id)arg4;
+ (id)defaultFont;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_accessibilityButtonShapesChangedNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (double)_actualScaleFactor;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)_associatedScalingLabel;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (double)_baselineOffsetFromBottom;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_capOffsetFromBoundsTop;
- (bool)_clipsGlyphPathFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shouldContinueSuperviewTraversal:(bool*)arg2;
- (void)_commonInit;
- (id)_configuration;
- (id)_content;
- (void)_contentDidChange:(long long)arg1 fromContent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsFromFonts;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (id)_defaultAttributes;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_disabledFontColor;
- (void)_drawFullMarqueeTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 baselineCalculationOnly:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceMultiline:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_drawsDebugBaselines;
- (bool)_drawsDebugGlyphPathBoundsClipping;
- (double)_firstBaselineOffsetFromTop;
- (double)_firstLineBaseline;
- (double)_firstLineBaselineFrameOriginY;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (double)_firstLineCapFrameOriginY;
- (id)_fontForShortcutBaselineCalculation;
- (id)_fontInfoForBaselineSpacing;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (bool)_glyphPathBoundsClippingDetected;
- (id)_glyphPathBoundsIntersectionData;
- (bool)_hasBaseline;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasFontInfoForVerticalBaselineSpacing;
- (float)_hyphenationFactor;
- (id)_image;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateBaselineConstraints;
- (void)_invalidateLabelSize;
- (void)_invalidateTextSize;
- (bool)_isExtremeSizingEnabled;
- (bool)_isMarqueeUpdatable;
- (double)_lastLineBaseline;
- (double)_lastLineBaselineFrameOriginY;
- (long long)_measuredNumberOfLines;
- (double)_minimumFontSize;
- (double)_multilineContextWidth;
- (bool)_multilineLabelRequiresCarefulMeasurement;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_ola_willApplyMultilineTextWidthDisambiguationConstraint;
- (bool)_overallWritingDirectionFollowsLayoutDirection;
- (double)_preferredMaxLayoutWidth;
- (long long)_preferredVibrancy;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (void)_setColor:(id)arg1;
- (void)_setConfiguration:(id)arg1;
- (void)_setContent:(id)arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDefaultAttributes:(id)arg1;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (void)_setDrawsDebugGlyphPathBoundsClipping:(bool)arg1;
- (void)_setExtremeSizingEnabled:(bool)arg1;
- (void)_setFallbackTextColor:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (void)_setFirstLineBaselineFrameOriginY:(double)arg1;
- (void)_setFirstLineCapFrameOriginY:(double)arg1;
- (void)_setFont:(id)arg1;
- (void)_setHyphenationFactor:(float)arg1;
- (void)_setLastLineBaselineFrameOriginY:(double)arg1;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setLineBreakStrategy:(unsigned long long)arg1;
- (void)_setMarqueeUpdatable:(bool)arg1;
- (void)_setMinimumFontSize:(double)arg1;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setMultilineLabelRequiresCarefulMeasurement:(bool)arg1;
- (void)_setOverallWritingDirectionFollowsLayoutDirection:(bool)arg1;
- (void)_setPreferredVibrancy:(long long)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextAlignment:(long long)arg1;
- (void)_setTextAlignmentFollowsWritingDirection:(bool)arg1;
- (void)_setTextAlignmentMirrored:(bool)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextColorFollowsTintColor:(bool)arg1;
- (void)_setTextEncapsulation:(id)arg1;
- (void)_setUseShortcutIntrinsicContentSize:(bool)arg1;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (void)_setVisualStyle:(id)arg1;
- (void)_setWantsContentAwareTypesettingLanguage:(bool)arg1;
- (void)_setWantsUnderlineForAccessibilityButtonShapesEnabled:(bool)arg1;
- (bool)_shouldCeilSizeToViewScale;
- (bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_startMarqueeIfNecessary;
- (void)_stopMarqueeWithRedisplay:(bool)arg1;
- (id)_stringDrawingContext;
- (long long)_stringDrawingOptions;
- (id)_synthesizedAttributedText;
- (bool)_textAlignmentFollowsWritingDirection;
- (bool)_textAlignmentMirrored;
- (bool)_textColorFollowsTintColor;
- (id)_textEncapsulation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(bool)arg3;
- (id)_tightBoundingBoxLayoutGuide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tightBoundingRectOfFirstLine;
- (void)_updateSystemConstraints;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (bool)_useShortcutIntrinsicContentSize;
- (bool)_usesSimpleTextEffects;
- (id)_visualStyle;
- (bool)_wantsContentAwareTypesettingLanguage;
- (bool)_wantsUnderlineForAccessibilityButtonShapesEnabled;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (bool)adjustsLetterSpacingToFitWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)allowsDefaultTighteningForTruncation;
- (id)attributedText;
- (bool)autotrackTextToFit;
- (long long)baselineAdjustment;
- (bool)centersHorizontally;
- (id)color;
- (id)currentTextColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsUnderline;
- (bool)enablesMarqueeWhenAncestorFocused;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isEnabled;
- (bool)isHighlighted;
- (id)largeContentTitle;
- (void)layerWillDraw:(id)arg1;
- (long long)lineBreakMode;
- (unsigned long long)lineBreakStrategy;
- (long long)lineSpacing;
- (bool)marqueeEnabled;
- (bool)marqueeRunning;
- (double)minimumFontSize;
- (double)minimumScaleFactor;
- (long long)numberOfLines;
- (double)preferredMaxLayoutWidth;
- (long long)preferredVibrancy;
- (struct CGSize { double x1; double x2; })rawSize;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAdjustsLetterSpacingToFitWidth:(bool)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAutotrackTextToFit:(bool)arg1;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCentersHorizontally:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDrawsUnderline:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablesMarqueeWhenAncestorFocused:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setLineSpacing:(long long)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNeedsDisplay;
- (void)setNumberOfLines:(long long)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setPreferredVibrancy:(long long)arg1;
- (void)setRawSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShowsExpansionTextWhenTruncated:(bool)arg1;
- (void)setSizingRule:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)set_fontForShortcutBaselineCalculation:(id)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (bool)showsExpansionTextWhenTruncated;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)sizingRule;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;
- (struct CGSize { double x1; double x2; })textSize;
- (struct CGSize { double x1; double x2; })textSizeForWidth:(double)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;
- (void)_cnui_applyContactStylePlaceholder;
- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (id)_inui_labelWithText:(id)arg1;

- (void)_inui_setText:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

- (double)firstBaselineFromTop;
- (double)lastBaselineFromBottom;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

+ (id)labelWithString:(id)arg1;
+ (id)wrappingLabelWithString:(id)arg1;

- (bool)canUseFastLayoutSizeCalulation;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_labelWithText:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3 fontWeight:(double)arg4;

// Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI

- (id)br_contentDescription;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

+ (void)fcui_layoutPrimaryLabel:(id)arg1 secondaryLabel:(id)arg2 inTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 primaryLabelFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 secondaryLabelFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 drawingContext:(inout id)arg6;

- (double)fcui_drawingHeightWithNumberOfLines:(unsigned long long)arg1;
- (double)fcui_measuringHeightWithNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)fcui_numberOfLinesInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maximum:(unsigned long long)arg2 drawingContext:(inout id)arg3;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkUpdateShadowForFocusChange:(bool)arg1;
- (double)firstBaselineFromTop;
- (double)lastBaselineFromBottom;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_hkecg_bodyLabel;
+ (id)_hkecg_heartRateLabel;
+ (id)hk_fontAdjustingLabel;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (id)hrui_fontAdjustingLabel;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)labelWithText:(id)arg1 font:(id)arg2;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (bool)hasContent;
- (bool)jet_isTextExtraTall;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })jet_languageAwareOutsets;
- (long long)jet_textLength;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (bool)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (void)MPU_configureWithTextAttributes:(id)arg1;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_defaultLabel;
+ (double)_mapsui_maximumHeightWithFont:(id)arg1 numberOfLines:(long long)arg2 displayScale:(double)arg3;

- (id)_mapsui_attributedText;
- (long long)_mapsui_numberOfLines;
- (id)_mapsui_text;
- (double)idealWidth;
- (void)set_mapsui_attributedText:(id)arg1;
- (void)set_mapsui_numberOfLines:(long long)arg1;
- (void)set_mapsui_text:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)mt_applyVisualStyling:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

+ (id)SUUITrending_defaultLabelWithText:(id)arg1;
+ (id)SUUITrending_defaultTitleColor;
+ (id)SUUITrending_defaultTitleFont;
+ (id)SUUITrending_titleLabelWithElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

- (void)mtui_setText:(id)arg1 hyphenationFactor:(float)arg2;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (unsigned long long)numberOfWordsInText;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

- (double)naui_baselineOffsetFromBottom;
- (double)naui_capOffsetFromTop;
- (double)naui_distanceFromBaselineToCoordinate:(double)arg1 inView:(id)arg2;
- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed

- (void)ne_verticallyCenterCapInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;
- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forceWordWrap:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (void)PG_removeVibrancyEffect;
- (void)PG_updateVibrancyEffectForTintColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (bool)px_isTruncatedForAttributedString:(id)arg1 forWidth:(double)arg2 lines:(long long)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)px_isOneLineForWidth:(double)arg1;
- (bool)px_isTruncatedForWidth:(double)arg1 lines:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (bool)roundedFont;
- (void)setRoundedFont:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport

- (void)setBoldSubString:(id)arg1;
- (void)setBoldSubString:(id)arg1;
- (void)setBoldSubString:(id)arg1;
- (void)setColor:(id)arg1 toSubstring:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (void)setSmu_firstLineCapFrameOriginY:(double)arg1;
- (void)setSmu_marqueeEnabled:(bool)arg1;
- (double)smu_firstLineCapFrameOriginY;
- (bool)smu_marqueeEnabled;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_configuredBodyLabel;
+ (id)siriui_configuredCaptionLabel;
+ (id)siriui_configuredFootnoteLabel;
+ (id)siriui_configuredHeadlineLabel;
+ (id)siriui_configuredLabel;
+ (id)siriui_configuredPriceLabel;
+ (id)siriui_configuredSubheadLabel;
+ (id)siriui_configuredTitle3Label;
+ (id)siriui_configuredTitleLabel;

- (void)setUseSecondaryTextColor;
- (void)setUseShortLineHeight;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)SBPIP_removeVibrancyEffect;
- (void)SBPIP_updateVibrancyEffectForTintColorWithFilter:(id)arg1;
- (void)drawWithMetrics:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (double)sb_yPositionForLabelWithContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 baselineOffset:(double)arg2 font:(id)arg3;
- (double)sb_yPositionForLabelWithContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineHeight:(double)arg2 baselineOffset:(double)arg3 font:(id)arg4;
- (double)sb_yPositionForLayoutAfterLabel:(id)arg1 baselineOffset:(double)arg2;
- (id)stringMetricsForFirstLineWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)SKUITrending_defaultLabelWithText:(id)arg1;
+ (id)SKUITrending_defaultTitleColor;
+ (id)SKUITrending_defaultTitleFont;
+ (id)SKUITrending_titleLabelWithElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (double)tv_heightToFirstBaseline;
- (double)tv_scaledValueForValue:(double)arg1;
- (struct CGSize { double x1; double x2; })tv_textSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tv_textSizeForWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)ts_setHyphenationFactor:(float)arg1;
- (void)ts_setWantsUnderlineForAccessibilityButtonShapesEnabled:(bool)arg1;
- (bool)ts_wantsUnderlineForAccessibilityButtonShapesEnabled;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (bool)accessibilityExposeLabelAsValue;
- (void)setAccessibilityExposeLabelAsValue:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (unsigned long long)nc_numberOfLines;
- (void)nc_setNumberOfLines:(unsigned long long)arg1;
- (double)unui_drawingHeightWithNumberOfLines:(unsigned long long)arg1;
- (double)unui_measuringHeightWithNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)unui_numberOfLinesInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maximum:(unsigned long long)arg2 drawingContext:(inout id)arg3;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (long long)_textAlignmentFromElementAlignment:(unsigned long long)arg1;
- (void)configureForIKTextElement:(id)arg1 fontDescriptor:(id)arg2 textStyle:(id)arg3;
- (void)configureForIKTextElement:(id)arg1 fontDescriptor:(id)arg2 textStyle:(id)arg3 capitalize:(bool)arg4;
- (void)configureForIKTextElement:(id)arg1 fontDescriptor:(id)arg2 textStyle:(id)arg3 capitalize:(bool)arg4 overrideWithTraitCollection:(id)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vui_alignmentInsetsForExpectedWidth:(double)arg1;
- (double)vui_heightToBaseline;
- (struct CGSize { double x1; double x2; })vui_textSizeForSize:(struct CGSize { double x1; double x2; })arg1;

@end
