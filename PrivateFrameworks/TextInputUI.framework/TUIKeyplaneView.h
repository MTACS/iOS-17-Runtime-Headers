
@interface TUIKeyplaneView : UIView <TUIVariantSelectorDelegate> {
    TUIKey * _activeKey;
    NSMutableArray * _activeVariantViews;
    bool  _allowsPaddles;
    UIButton * _biasEscapeButton;
    NSLayoutConstraint * _bottomRowSizingConstraint;
    UILayoutGuide * _bottomRowSizingGuide;
    NSLayoutConstraint * _bottomSpacing;
    long long  _currentHandBias;
    TUIKeyplane * _currentKeyplane;
    NSMutableDictionary * _delayedDeactivationKeys;
    bool  _dismissingKeyboardMenu;
    NSString * _displayedType;
    UIKBRenderFactory * _factory;
    long long  _floatingControlKeyType;
    long long  _fullControlKeyType;
    NSLayoutConstraint * _heightConstraint;
    NSLayoutConstraint * _horizontalBiasButtonConstraint;
    bool  _isCurrentlySplit;
    bool  _isFloating;
    bool  _isInSplitTransition;
    NSString * _keyLayout;
    NSMutableDictionary * _keyRowViews;
    UILayoutGuide * _keySizeReferenceGuide;
    NSLayoutConstraint * _keySizeSpacer;
    UIView * _keyboardContentView;
    UIKBTree * _keyplane;
    bool  _layoutReadyForTreeUpdate;
    NSLayoutConstraint * _leadingSpacing;
    NSLayoutConstraint * _leftSplitWidth;
    double  _maximumWidth;
    bool  _movingFromFloating;
    bool  _movingToFloating;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredFloatingSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    NSLayoutConstraint * _preferredWidthConstraint;
    double  _previousWidth;
    UIKBRenderConfig * _renderConfig;
    UIKBRenderingContext * _renderingContext;
    NSLayoutConstraint * _rightSplitWidth;
    NSLayoutConstraint * _scalingConstraint;
    UIKBScreenTraits * _screenTraits;
    NSLayoutConstraint * _sizeRatioConstraint;
    NSLayoutConstraint * _splitSpacing;
    NSMutableDictionary * _splitTransitionLayoutGuides;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _standardKeyInsets;
    double  _startingWidthConstant;
    NSMutableDictionary * _storedKeyViews;
    NSMutableDictionary * _storedVariantViews;
    NSLayoutConstraint * _topSpacing;
    NSLayoutConstraint * _trailingSpacing;
    NSLayoutConstraint * _trailingTieConstraint;
    double  _transitionProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _unsplitSize;
}

@property (nonatomic, retain) TUIKey *activeKey;
@property (nonatomic, retain) NSMutableArray *activeVariantViews;
@property (nonatomic) bool allowsPaddles;
@property (nonatomic, retain) UIButton *biasEscapeButton;
@property (nonatomic, retain) NSLayoutConstraint *bottomRowSizingConstraint;
@property (nonatomic, retain) UILayoutGuide *bottomRowSizingGuide;
@property (nonatomic, retain) NSLayoutConstraint *bottomSpacing;
@property (nonatomic) long long currentHandBias;
@property (nonatomic, retain) TUIKeyplane *currentKeyplane;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableDictionary *delayedDeactivationKeys;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissingKeyboardMenu;
@property (nonatomic, retain) NSString *displayedType;
@property (nonatomic, retain) UIKBRenderFactory *factory;
@property (nonatomic) long long floatingControlKeyType;
@property (nonatomic) long long fullControlKeyType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *horizontalBiasButtonConstraint;
@property (nonatomic) bool isCurrentlySplit;
@property (nonatomic) bool isFloating;
@property (nonatomic) bool isInSplitTransition;
@property (nonatomic, retain) NSString *keyLayout;
@property (nonatomic, retain) NSMutableDictionary *keyRowViews;
@property (nonatomic, retain) UILayoutGuide *keySizeReferenceGuide;
@property (nonatomic, retain) NSLayoutConstraint *keySizeSpacer;
@property (nonatomic, retain) UIView *keyboardContentView;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic) bool layoutReadyForTreeUpdate;
@property (nonatomic, retain) NSLayoutConstraint *leadingSpacing;
@property (nonatomic, retain) NSLayoutConstraint *leftSplitWidth;
@property (nonatomic) double maximumWidth;
@property (nonatomic) bool movingFromFloating;
@property (nonatomic) bool movingToFloating;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredFloatingSize;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, retain) NSLayoutConstraint *preferredWidthConstraint;
@property (nonatomic) double previousWidth;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) UIKBRenderingContext *renderingContext;
@property (nonatomic, retain) NSLayoutConstraint *rightSplitWidth;
@property (nonatomic, retain) NSLayoutConstraint *scalingConstraint;
@property (nonatomic, retain) UIKBScreenTraits *screenTraits;
@property (nonatomic, retain) NSLayoutConstraint *sizeRatioConstraint;
@property (nonatomic, retain) NSLayoutConstraint *splitSpacing;
@property (nonatomic, retain) NSMutableDictionary *splitTransitionLayoutGuides;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } standardKeyInsets;
@property (nonatomic) double startingWidthConstant;
@property (nonatomic, retain) NSMutableDictionary *storedKeyViews;
@property (nonatomic, retain) NSMutableDictionary *storedVariantViews;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topSpacing;
@property (nonatomic, retain) NSLayoutConstraint *trailingSpacing;
@property (nonatomic, retain) NSLayoutConstraint *trailingTieConstraint;
@property (nonatomic) double transitionProgress;
@property (nonatomic) struct CGSize { double x1; double x2; } unsplitSize;

+ (id)dynamicKeyboardForName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isLandscape:(bool)arg3;
+ (id)keyplaneViewForKeyboard:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isLandscape:(bool)arg3;
+ (id)keyplaneViewForKeyboard:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isLandscape:(bool)arg3 displayKeyplane:(unsigned long long)arg4;
+ (id)keyplaneViewForLayout:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isLandscape:(bool)arg3;
+ (id)updateDynamicKeyboard:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 isLandscape:(bool)arg3;
+ (id)updateDynamicKeyplane:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 isLandscape:(bool)arg3;

- (void).cxx_destruct;
- (void)_generateFactoryIfNeeded;
- (void)_generateRenderingContextIfNeeded;
- (void)_regenerateFactoryPreservingUpdates:(bool)arg1;
- (bool)_shouldAllowKey:(id)arg1;
- (void)_updateRenderingContext;
- (id)activeKey;
- (id)activeVariantViews;
- (id)actualView;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (bool)allowsPaddles;
- (id)biasEscapeButton;
- (id)bottomRowSizingConstraint;
- (id)bottomRowSizingGuide;
- (id)bottomSpacing;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cachedVariantViewForTree:(id)arg1;
- (id)cachedVariantViewForTree:(id)arg1 state:(int)arg2;
- (void)changingSelectedVariantForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)compareKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)createContentViewsIfNeeded;
- (void)createSplitLayoutIfNeeded;
- (long long)currentHandBias;
- (id)currentKeyplane;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)deactivateKeys;
- (id)delayedDeactivationKeys;
- (id)description;
- (void)didTapBiasEscapeButton;
- (void)dimKeys:(id)arg1;
- (bool)dismissingKeyboardMenu;
- (id)displayedType;
- (id)factory;
- (void)finalLayoutForSplit:(bool)arg1;
- (void)finishSplitTransition;
- (void)finishedSelectingVariantForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (long long)floatingControlKeyType;
- (long long)fullControlKeyType;
- (double)fullHeightForDockedKeyboard;
- (void)generateFactoryForKeyplane:(id)arg1 landscape:(bool)arg2;
- (id)heightConstraint;
- (id)horizontalBiasButtonConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCurrentlySplit;
- (bool)isFloating;
- (bool)isInSplitTransition;
- (bool)isSplit;
- (id)keyLayout;
- (long long)keyLayoutStyle;
- (id)keyRowViews;
- (id)keySizeReferenceGuide;
- (id)keySizeSpacer;
- (id)keyViewForKey:(id)arg1;
- (id)keyViewForTree:(id)arg1;
- (id)keyboardContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })keycapInsets;
- (id)keyplane;
- (id)keyplaneFromTree:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 controlKeyType:(long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })keyplaneInsets;
- (id)keyplaneRenderConfig;
- (void)layoutKeysInRows:(id)arg1;
- (bool)layoutReadyForTreeUpdate;
- (void)layoutRows:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)leadingSpacing;
- (struct CGSize { double x1; double x2; })leftSplitSize;
- (id)leftSplitWidth;
- (double)maximumWidth;
- (bool)movingFromFloating;
- (bool)movingToFloating;
- (id)pinchGestureRecognizer;
- (struct CGSize { double x1; double x2; })preferredFloatingSize;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)preferredWidthConstraint;
- (void)prepareForDisplay;
- (void)prepareForSplitTransition;
- (void)presentSelectorView:(id)arg1 fromBaseKey:(id)arg2;
- (double)previousWidth;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (id)renderConfig;
- (id)renderConfigForCurrentTraitCollection;
- (id)renderingContext;
- (void)resetLayoutAndApplyKeyplane:(id)arg1;
- (struct CGSize { double x1; double x2; })rightSplitSize;
- (id)rightSplitWidth;
- (id)scalingConstraint;
- (id)screenTraits;
- (void)setActiveKey:(id)arg1;
- (void)setActiveVariantViews:(id)arg1;
- (void)setAllowsPaddles:(bool)arg1;
- (void)setBiasEscapeButton:(id)arg1;
- (void)setBottomRowSizingConstraint:(id)arg1;
- (void)setBottomRowSizingGuide:(id)arg1;
- (void)setBottomSpacing:(id)arg1;
- (void)setCurrentHandBias:(long long)arg1;
- (void)setCurrentKeyplane:(id)arg1;
- (void)setDelayedDeactivationKeys:(id)arg1;
- (void)setDismissingKeyboardMenu:(bool)arg1;
- (void)setDisplayedType:(id)arg1;
- (void)setFactory:(id)arg1;
- (void)setFloatingControlKeyType:(long long)arg1;
- (void)setFullControlKeyType:(long long)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setHorizontalBiasButtonConstraint:(id)arg1;
- (void)setIsCurrentlySplit:(bool)arg1;
- (void)setIsFloating:(bool)arg1;
- (void)setIsInSplitTransition:(bool)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyRowViews:(id)arg1;
- (void)setKeySizeReferenceGuide:(id)arg1;
- (void)setKeySizeSpacer:(id)arg1;
- (void)setKeyboardBias:(long long)arg1;
- (void)setKeyboardContentView:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setKeyplaneForAutomation:(id)arg1;
- (void)setLayoutReadyForTreeUpdate:(bool)arg1;
- (void)setLeadingSpacing:(id)arg1;
- (void)setLeftSplitWidth:(id)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMovingFromFloating:(bool)arg1;
- (void)setMovingToFloating:(bool)arg1;
- (void)setOverrideScreenTraits:(id)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setPreferredFloatingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredWidthConstraint:(id)arg1;
- (void)setPreviousWidth:(double)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setRenderingContext:(id)arg1;
- (void)setRightSplitWidth:(id)arg1;
- (void)setScalingConstraint:(id)arg1;
- (void)setScreenTraits:(id)arg1;
- (void)setSizeRatioConstraint:(id)arg1;
- (void)setSplitSpacing:(id)arg1;
- (void)setSplitTransitionLayoutGuides:(id)arg1;
- (void)setStandardKeyInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStartingWidthConstant:(double)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)setStoredKeyViews:(id)arg1;
- (void)setStoredVariantViews:(id)arg1;
- (void)setTopSpacing:(id)arg1;
- (void)setTrailingSpacing:(id)arg1;
- (void)setTrailingTieConstraint:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)setUnsplitSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeFromScreenTraitsAndClass;
- (id)sizeRatioConstraint;
- (struct CGSize { double x1; double x2; })splitSizeForRightSide:(bool)arg1;
- (id)splitSpacing;
- (id)splitTransitionLayoutGuides;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })standardKeyInsets;
- (double)startingWidthConstant;
- (int)stateForKey:(id)arg1;
- (id)storedKeyViews;
- (id)storedVariantViews;
- (bool)supportsSplit;
- (void)tappedToDismissSelector;
- (id)topSpacing;
- (id)trailingSpacing;
- (id)trailingTieConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionProgress;
- (void)transitionToKeyplane:(id)arg1;
- (void)transitionWillFinishWithProgress:(double)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })unsplitSize;
- (void)updateAllTrees;
- (void)updateBiasEscapeButtonVisbility:(bool)arg1;
- (void)updateBottomRowSizingGuide;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })updateFrameForKey:(id)arg1;
- (void)updateKeyplaneSpacing;
- (void)updateKeysForFloating:(bool)arg1;
- (void)updateKeysForRow:(unsigned long long)arg1 withKeys:(id)arg2;
- (void)updateRowsForKeyplane:(id)arg1;
- (void)updateSplitProgress:(double)arg1;
- (void)updateToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateToSpecifiedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateTreeForAutomation;
- (void)updateVariantSelectorFramesForKey:(id)arg1;
- (id)variantViewForKey:(id)arg1 cacheID:(id)arg2;
- (id)viewForBaseKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end