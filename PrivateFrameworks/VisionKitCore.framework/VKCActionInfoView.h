
@interface VKCActionInfoView : VKPlatformView {
    bool  __quickActionsHidden;
    bool  _alignQuickActionsWithVerticalCenter;
    bool  _automaticVisualRectLayoutDisabled;
    UIView * _containerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    bool  _isShowingSingleTapMoreButtonMenu;
    VKCActionInfoViewLayoutContext * _layoutContext;
    bool  _layoutUpdatesSuspended;
    VKImageAnalysisButton * _liveTextButton;
    bool  _liveTextButtonDisabled;
    VKCActionInfoMoreButton * _moreButton;
    UIView * _moreButtonContainer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedVisibleRect;
    double  _preferredQuickActionButtonHeight;
    id /* block */  _quickActionConfigurationUpdateHandler;
    NSArray * _quickActions;
    bool  _quickActionsDisabled;
    bool  _shouldAnimateQuickActionVisibilityChanges;
    UIView * _textButtonContainer;
    UIView * _visualSearchContainer;
    VKCVisualSearchCornerView * _visualSearchCornerView;
    bool  _visualSearchCornerViewDisabled;
    bool  _wantsTranslucentActionInfoButtons;
}

@property (nonatomic) bool _quickActionsHidden;
@property (nonatomic) bool alignQuickActionsWithVerticalCenter;
@property (nonatomic, readonly) NSArray *allViews;
@property (nonatomic) bool automaticVisualRectLayoutDisabled;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) bool isShowingSingleTapMoreButtonMenu;
@property (nonatomic, retain) VKCActionInfoViewLayoutContext *layoutContext;
@property (nonatomic) bool layoutUpdatesSuspended;
@property (nonatomic, retain) VKImageAnalysisButton *liveTextButton;
@property (nonatomic) bool liveTextButtonDisabled;
@property (nonatomic, retain) VKCActionInfoMoreButton *moreButton;
@property (nonatomic, retain) UIView *moreButtonContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedVisibleRect;
@property (nonatomic) double preferredQuickActionButtonHeight;
@property (nonatomic, copy) id /* block */ quickActionConfigurationUpdateHandler;
@property (nonatomic, copy) NSArray *quickActions;
@property (nonatomic) bool quickActionsDisabled;
@property (nonatomic) bool shouldAnimateQuickActionVisibilityChanges;
@property (nonatomic, retain) UIView *textButtonContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleImageRect;
@property (nonatomic, retain) UIView *visualSearchContainer;
@property (nonatomic, retain) VKCVisualSearchCornerView *visualSearchCornerView;
@property (nonatomic) bool visualSearchCornerViewDisabled;
@property (nonatomic) bool wantsTranslucentActionInfoButtons;

+ (id)buildMoreButtonMenuFromQuickActions:(id)arg1 moreButton:(id)arg2 isStandAloneMoreButton:(bool)arg3;

- (void).cxx_destruct;
- (void)_applyConfigurationUpdateHandlerToQuickActions;
- (bool)_quickActionsHidden;
- (void)adjustContextToFitWidth:(id)arg1;
- (bool)alignQuickActionsWithVerticalCenter;
- (id)allViews;
- (bool)automaticVisualRectLayoutDisabled;
- (id)configureView:(id)arg1 isLeading:(bool)arg2 container:(id)arg3 layoutContext:(id)arg4;
- (id)containerView;
- (bool)containsInteractableItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)createContainerForView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithLiveTextButton:(id)arg1 cornerView:(id)arg2;
- (bool)isInteractableView:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isShowingSingleTapMoreButtonMenu;
- (void)layoutContainerView;
- (id)layoutContext;
- (void)layoutSubviews;
- (bool)layoutUpdatesSuspended;
- (id)liveTextButton;
- (bool)liveTextButtonDisabled;
- (id)moreButton;
- (id)moreButtonContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleRect;
- (double)preferredQuickActionButtonHeight;
- (void)processView:(id)arg1 hasContent:(bool)arg2 isLeading:(bool)arg3 layoutContext:(id)arg4;
- (id /* block */)quickActionConfigurationUpdateHandler;
- (id)quickActions;
- (bool)quickActionsDisabled;
- (void)setAlignQuickActionsWithVerticalCenter:(bool)arg1;
- (void)setAutomaticVisualRectLayoutDisabled:(bool)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsShowingSingleTapMoreButtonMenu:(bool)arg1;
- (void)setLayoutContext:(id)arg1;
- (void)setLayoutUpdatesSuspended:(bool)arg1;
- (void)setLiveTextButton:(id)arg1;
- (void)setLiveTextButtonDisabled:(bool)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setMoreButtonContainer:(id)arg1;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferredQuickActionButtonHeight:(double)arg1;
- (void)setQuickActionConfigurationUpdateHandler:(id /* block */)arg1;
- (void)setQuickActions:(id)arg1;
- (void)setQuickActionsDisabled:(bool)arg1;
- (void)setShouldAnimateQuickActionVisibilityChanges:(bool)arg1;
- (void)setTextButtonContainer:(id)arg1;
- (void)setVisualSearchContainer:(id)arg1;
- (void)setVisualSearchCornerView:(id)arg1;
- (void)setVisualSearchCornerViewDisabled:(bool)arg1;
- (void)setWantsTranslucentActionInfoButtons:(bool)arg1;
- (void)set_quickActionsHidden:(bool)arg1;
- (bool)shouldAnimateQuickActionVisibilityChanges;
- (struct CGSize { double x1; double x2; })sizeForView:(id)arg1 scale:(double)arg2;
- (id)textButtonContainer;
- (void)updateFramesForContext:(id)arg1;
- (void)updateLayoutIfNecessary;
- (void)updateMoreButtonMenuForContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleImageRect;
- (id)visualSearchContainer;
- (id)visualSearchCornerView;
- (bool)visualSearchCornerViewDisabled;
- (bool)wantsTranslucentActionInfoButtons;

@end
