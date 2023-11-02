
@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant> {
    UIView * _animationContentClippingView;
    long long  _apiVersion;
    bool  _backgroundCoversContentOnly;
    double  _backgroundExtension;
    _UIBarBackground * _backgroundView;
    _UINavigationBarPalette * _bottomPalette;
    _UIBarInsertLayoutData * _bottomPaletteLayoutData;
    double  _chromelessTransitionProgress;
    bool  _clientCanUpdateChromelessTransitionProgress;
    bool  _clientUsesManualScrollEdgeAppearanceProgressSPI;
    bool  _clientWantsBackgroundHidden;
    bool  _clientWantsToPreserveSearchBarAcrossTransitions;
    _UIBarBackgroundLayout * _compactBackgroundViewLayout;
    double  _computedBackgroundViewAlpha;
    _UIBarInsertLayoutData * _contentLayoutData;
    _UINavigationBarContentView * _contentView;
    _UINavigationBarContentViewLayout * _contentViewLayout;
    <_UINavigationBarContentViewVisualProvider> * _contentViewVisualProvider;
    bool  _hasInlineSearchBar;
    bool  _hidesSearchBarWhenScrolling;
    double  _largeTitleExposure;
    _UIBarInsertLayoutData * _largeTitleLayoutData;
    double  _largeTitleTransitionProgress;
    _UINavigationBarLargeTitleView * _largeTitleView;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _largeTitleViewInsets;
    _UINavigationBarLargeTitleViewLayout * _largeTitleViewLayout;
    bool  _largeTitleViewOverlaysContentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    double  _manualScrollEdgeAppearanceProgress;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originLayoutFrame;
    NSMutableArray * _priorityOrderedLayout;
    _UIBarInsertLayoutData * _promptLayoutData;
    _UINavigationBarModernPromptView * _promptView;
    _UINavigationControllerRefreshControlHost * _refreshControlHost;
    _UIBarInsertLayoutData * _refreshControlLayoutData;
    long long  _representedSearchLayoutState;
    double  _requestedBackgroundViewAlpha;
    NSArray * _restingHeights;
    _UIBarInsertLayoutData * _scopeBarLayoutData;
    UISearchBar * _searchBar;
    _UIBarInsertLayoutData * _searchBarLayoutData;
    NSMutableArray * _stackingOrderedLayout;
    _UIBarBackgroundLayout * _standardBackgroundViewLayout;
    _UIBarInsertLayoutData * _topWhitespaceLayoutData;
    bool  _useManualScrollEdgeAppearance;
    UILabel * _weeTitleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLayoutItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundViewLayoutFrameWithRelevantMaxY:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewLayoutFrameWithPromptMaxY:(double)arg1;
- (void)_includeContentLayoutDataInLayout:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_refreshControlLayoutFrameWithContentMaxY:(double)arg1;
- (void)_removeLayoutItem:(id)arg1;
- (void)_reprioritizeLayoutItem:(id)arg1 toPriority:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchBarLayoutFrameWithLargeTitleMaxY:(double)arg1;
- (void)_updateContentViewLayoutItem;
- (void)_updateLargeTitleViewLayoutItem;
- (void)_updateLayoutOutputs;
- (void)_updateLayoutParametersForWidth:(double)arg1;
- (void)_updateRefreshControlLayoutData;
- (void)_updateWhitespaceLayoutItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)finalizeStateFromTransition:(id)arg1;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)prepareToRecordToState:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })promptViewLayoutFrameWithTopMaxY:(double)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })topWhitespaceLayoutFrame;

@end
