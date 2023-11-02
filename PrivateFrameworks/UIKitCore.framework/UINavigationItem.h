
@interface UINavigationItem : NSObject <NSCoding, _UIBarAppearanceChangeObserver> {
    bool  __alignLargeTitleAccessoryViewToBaseline;
    NSArray * __alternateLargeTitles;
    bool  __backgroundHidden;
    UIView * __canvasView;
    <_UINavigationItemChangeObserver> * __changeObserver;
    double  __idealCustomTitleWidth;
    UIView * __largeTitleAccessoryView;
    unsigned long long  __largeTitleAccessoryViewHorizontalAlignment;
    unsigned long long  __largeTitleTwoLineMode;
    unsigned long long  __leftFlexibleSpaceCount;
    NSArray * __leftItemSpaceList;
    UINavigationBar * __owningNavigationBar;
    bool  __preserveSearchBarAcrossTransitions;
    unsigned long long  __rightFlexibleSpaceCount;
    NSArray * __rightItemSpaceList;
    _UINavigationBarItemStackEntry * __stackEntry;
    double  __titleViewWidthForAnimations;
    NSString * __weeTitle;
    NSArray * _abbreviatedBackButtonTitles;
    UIDeferredMenuElement * _additionalOverflowItems;
    bool  _alwaysUseManualScrollEdgeAppearance;
    double  _autoScrollEdgeTransitionDistance;
    UIAction * _backAction;
    UIBarButtonItem * _backBarButtonItem;
    long long  _backButtonDisplayMode;
    NSString * _backButtonTitle;
    UIView * _backButtonView;
    _UINavigationBarPalette * _bottomPalette;
    NSArray * _centerItemGroups;
    UINavigationBarAppearance * _compactAppearance;
    UINavigationBarAppearance * _compactScrollEdgeAppearance;
    id  _context;
    NSArray * _customLeftViews;
    NSArray * _customRightViews;
    NSString * _customizationIdentifier;
    UIView * _defaultTitleView;
    UIMenu * _documentMenu;
    UIDocumentProperties * _documentProperties;
    double  _fontScaleAdjustment;
    UIImageView * _frozenTitleView;
    _UIBarButtonItemSearchBarGroup * _inlineSearchBarItemGroup;
    long long  _largeTitleDisplayMode;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _largeTitleInsets;
    NSArray * _leadingItemGroups;
    NSArray * _leftBarButtonItems;
    bool  _manualScrollEdgeAppearanceEnabled;
    double  _manualScrollEdgeAppearanceProgress;
    NSMutableDictionary * _minimumDesiredHeights;
    UINavigationBar * _navigationBar;
    struct { 
        unsigned int hidesBackButton : 1; 
        unsigned int leftItemsSupplementBackButton : 1; 
        unsigned int alwaysShowsSearchBar : 1; 
        unsigned int shouldNotDismissPresentedViewControllerWhenPopped : 1; 
        unsigned int searchBarPlacementIsChangingWhenMovingToTop : 1; 
        unsigned int searchBarPlacementIsChangingWhenMovingFromTop : 1; 
    }  _navigationItemFlags;
    NSString * _pendingTitle;
    UIBarButtonItemGroup * _pinnedTrailingGroup;
    long long  _preferredSearchBarPlacement;
    NSString * _prompt;
    <UINavigationItemRenameDelegate> * _renameDelegate;
    _UINavigationItemRenameHandler * _renameHandler;
    NSArray * _rightBarButtonItems;
    UINavigationBarAppearance * _scrollEdgeAppearance;
    UISearchController * _searchController;
    UINavigationBarAppearance * _standardAppearance;
    long long  _style;
    UIBarButtonItem * _synthesizedBackBarButtonItem;
    long long  _tag;
    NSString * _title;
    id /* block */  _titleMenuProvider;
    UIView * _titleView;
    NSArray * _trailingItemGroups;
    bool  _useRelativeLargeTitleInsets;
}

@property (setter=_setAbbreviatedBackButtonTitles:, nonatomic, copy) NSArray *_abbreviatedBackButtonTitles;
@property (nonatomic, readonly) bool _alignLargeTitleAccessoryViewToBaseline;
@property (nonatomic, retain) NSArray *_alternateLargeTitles;
@property (setter=_setAlwaysUseManualScrollEdgeAppearance:, nonatomic) bool _alwaysUseManualScrollEdgeAppearance;
@property (setter=_setAutoScrollEdgeTransitionDistance:, nonatomic) double _autoScrollEdgeTransitionDistance;
@property (setter=_setBackButtonDisplayMode:, nonatomic) unsigned long long _backButtonDisplayMode;
@property (setter=_setBackgroundHidden:, nonatomic) bool _backgroundHidden;
@property (setter=_setBottomPalette:, nonatomic, retain) _UINavigationBarPalette *_bottomPalette;
@property (setter=_setCanvasView:, nonatomic, retain) UIView *_canvasView;
@property (setter=_setChangeObserver:, nonatomic) <_UINavigationItemChangeObserver> *_changeObserver;
@property (setter=_dci_setAdditionalOverflowItems:, nonatomic, retain) UIDeferredMenuElement *_dci_additionalOverflowItems;
@property (setter=_dci_setBackAction:, nonatomic, copy) UIAction *_dci_backAction;
@property (setter=_dci_setCenterItemGroups:, nonatomic, copy) NSArray *_dci_centerItemGroups;
@property (setter=_dci_setCenterItems:, nonatomic, copy) NSArray *_dci_centerItems;
@property (setter=_dci_setCustomizationIdentifier:, nonatomic, copy) NSString *_dci_customizationIdentifier;
@property (setter=_dci_setDocumentMenu:, nonatomic, copy) UIMenu *_dci_documentMenu;
@property (setter=_dci_setDocumentMenuHeader:, nonatomic, retain) _UIDocumentMenuHeader *_dci_documentMenuHeader;
@property (setter=_dci_setDocumentMenuProvider:, nonatomic, copy) id /* block */ _dci_documentMenuProvider;
@property (setter=_dci_setFixedTrailingGroup:, nonatomic, retain) UIBarButtonItemGroup *_dci_fixedTrailingGroup;
@property (setter=_dci_setPreferredSearchBarPlacement:, nonatomic) long long _dci_preferredSearchBarPlacement;
@property (setter=_dci_setRenameHandler:, nonatomic, retain) _UINavigationItemRenameHandler *_dci_renameHandler;
@property (nonatomic, readonly) long long _dci_searchBarPlacement;
@property (setter=_dci_setStyle:, nonatomic) long long _dci_style;
@property (nonatomic, readonly) _UIBarButtonItemSearchBarGroup *_existingInlineSearchBarItemGroup;
@property (setter=_setFontScaleAdjustment:, nonatomic) double _fontScaleAdjustment;
@property (nonatomic, readonly) bool _hasInlineSearchBar;
@property (nonatomic, readonly) bool _hidesSearchBarWhenScrollingIfAllowed;
@property (setter=_setIdealCustomTitleWidth:, nonatomic) double _idealCustomTitleWidth;
@property (setter=_setIndependentBarStyle:, nonatomic) long long _independentBarStyle;
@property (nonatomic, readonly) _UIBarButtonItemSearchBarGroup *_inlineSearchBarItemGroup;
@property (setter=_setLargeTitleAccessoryView:, nonatomic, retain) UIView *_largeTitleAccessoryView;
@property (nonatomic, readonly) unsigned long long _largeTitleAccessoryViewHorizontalAlignment;
@property (setter=_setLargeTitleTwoLineMode:, nonatomic) unsigned long long _largeTitleTwoLineMode;
@property (setter=_setLeftFlexibleSpaceCount:, nonatomic) unsigned long long _leftFlexibleSpaceCount;
@property (setter=_setLeftItemSpaceList:, nonatomic, copy) NSArray *_leftItemSpaceList;
@property (getter=_isManualScrollEdgeAppearanceEnabled, setter=_setManualScrollEdgeAppearanceEnabled:, nonatomic) bool _manualScrollEdgeAppearanceEnabled;
@property (setter=_setManualScrollEdgeAppearanceProgress:, nonatomic) double _manualScrollEdgeAppearanceProgress;
@property (getter=_owningNavigationBar, setter=_setOwningNavigationBar:, nonatomic) UINavigationBar *_owningNavigationBar;
@property (setter=_setPendingTitle:, nonatomic, copy) NSString *_pendingTitle;
@property (setter=_setPreserveSearchBarAcrossTransitions:, nonatomic) bool _preserveSearchBarAcrossTransitions;
@property (setter=_setRightFlexibleSpaceCount:, nonatomic) unsigned long long _rightFlexibleSpaceCount;
@property (setter=_setRightItemSpaceList:, nonatomic, copy) NSArray *_rightItemSpaceList;
@property (nonatomic, readonly) UISearchController *_searchControllerIfAllowed;
@property (setter=_setShouldDismissPresentedViewControllerWhenPopped:, nonatomic) bool _shouldDismissPresentedViewControllerWhenPopped;
@property (setter=_setStackEntry:, nonatomic) _UINavigationBarItemStackEntry *_stackEntry;
@property (setter=_setSupportsTwoLineLargeTitles:, nonatomic) bool _supportsTwoLineLargeTitles;
@property (nonatomic) double _titleViewWidthForAnimations;
@property (setter=_setWeeTitle:, nonatomic, copy) NSString *_weeTitle;
@property (nonatomic, retain) UIDeferredMenuElement *additionalOverflowItems;
@property (nonatomic, copy) UIAction *backAction;
@property (nonatomic, retain) UIBarButtonItem *backBarButtonItem;
@property (nonatomic) long long backButtonDisplayMode;
@property (nonatomic, copy) NSString *backButtonTitle;
@property (nonatomic, copy) NSArray *centerItemGroups;
@property (nonatomic, copy) UINavigationBarAppearance *compactAppearance;
@property (nonatomic, copy) UINavigationBarAppearance *compactScrollEdgeAppearance;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) UIBarButtonItem *customLeftItem;
@property (nonatomic, retain) UIView *customLeftView;
@property (nonatomic, retain) UIBarButtonItem *customRightItem;
@property (nonatomic, retain) UIView *customRightView;
@property (nonatomic, retain) UIView *customTitleView;
@property (nonatomic, copy) NSString *customizationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDocumentProperties *documentProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesBackButton;
@property (nonatomic) bool hidesSearchBarWhenScrolling;
@property (nonatomic) long long largeTitleDisplayMode;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } largeTitleInsets;
@property (nonatomic, copy) NSArray *leadingItemGroups;
@property (nonatomic, retain) UIBarButtonItem *leftBarButtonItem;
@property (nonatomic, copy) NSArray *leftBarButtonItems;
@property (nonatomic) bool leftItemsSupplementBackButton;
@property (nonatomic) UINavigationBar *navigationBar;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *overflowPresentationSource;
@property (nonatomic, retain) UIBarButtonItemGroup *pinnedTrailingGroup;
@property (nonatomic) long long preferredSearchBarPlacement;
@property (nonatomic, copy) NSString *prompt;
@property (setter=pu_setBanner:, nonatomic, retain) PUAbstractNavigationBanner *pu_banner;
@property (setter=px_setBackButtonDisplayMode:, nonatomic) long long px_backButtonDisplayMode;
@property (setter=px_setDisableLargeTitle:, nonatomic) bool px_disableLargeTitle;
@property (setter=px_setHidesBackButtonInRegularWidth:, nonatomic) bool px_hidesBackButtonInRegularWidth;
@property (setter=px_setPreferredLargeTitleDisplayMode:, nonatomic) long long px_preferredLargeTitleDisplayMode;
@property (nonatomic) <UINavigationItemRenameDelegate> *renameDelegate;
@property (nonatomic, retain) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, copy) NSArray *rightBarButtonItems;
@property (nonatomic, copy) UINavigationBarAppearance *scrollEdgeAppearance;
@property (nonatomic, readonly) long long searchBarPlacement;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, readonly) bool sf_isEmpty;
@property (setter=sf_setPreferredDismissOrDoneButtonItem:, nonatomic, retain) UIBarButtonItem *sf_preferredDismissOrDoneButtonItem;
@property (nonatomic, retain) UIView *smu_largeTitleAccessoryView;
@property (nonatomic, copy) UINavigationBarAppearance *standardAppearance;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id /* block */ titleMenuProvider;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, copy) NSArray *trailingItemGroups;
@property (nonatomic) bool useRelativeLargeTitleInsets;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)defaultFont;

- (void).cxx_destruct;
- (id)_abbreviatedBackButtonTitles;
- (bool)_accumulateViewsFromItems:(id)arg1 isLeft:(bool)arg2 refreshViews:(bool)arg3;
- (id)_addDefaultTitleViewToNavigationBarIfNecessary:(id)arg1;
- (bool)_alignLargeTitleAccessoryViewToBaseline;
- (id)_alternateLargeTitles;
- (bool)_alwaysUseManualScrollEdgeAppearance;
- (double)_autoScrollEdgeTransitionDistance;
- (unsigned long long)_backButtonDisplayMode;
- (id)_backButtonTitleAllowingGenericTitles:(bool)arg1;
- (bool)_backgroundHidden;
- (id)_barButtonForBackButtonIndicator;
- (id)_bottomPalette;
- (id)_buttonForBackButtonIndicator;
- (bool)_canRename;
- (id)_canvasView;
- (id)_changeObserver;
- (void)_cleanupFrozenTitleView;
- (id)_customLeftViews;
- (id)_customRightViews;
- (id)_dci_additionalOverflowItems;
- (id)_dci_backAction;
- (id)_dci_centerItemGroups;
- (id)_dci_centerItems;
- (id)_dci_customizationIdentifier;
- (id)_dci_documentMenu;
- (id)_dci_documentMenuHeader;
- (id /* block */)_dci_documentMenuProvider;
- (id)_dci_fixedTrailingGroup;
- (long long)_dci_preferredSearchBarPlacement;
- (id)_dci_renameHandler;
- (long long)_dci_searchBarPlacement;
- (void)_dci_setAdditionalOverflowItems:(id)arg1;
- (void)_dci_setBackAction:(id)arg1;
- (void)_dci_setCenterItemGroups:(id)arg1;
- (void)_dci_setCenterItems:(id)arg1;
- (void)_dci_setCustomizationIdentifier:(id)arg1;
- (void)_dci_setDocumentMenu:(id)arg1;
- (void)_dci_setDocumentMenuHeader:(id)arg1;
- (void)_dci_setDocumentMenuProvider:(id /* block */)arg1;
- (void)_dci_setFixedTrailingGroup:(id)arg1;
- (void)_dci_setPreferredSearchBarPlacement:(long long)arg1;
- (void)_dci_setRenameHandler:(id)arg1;
- (void)_dci_setStyle:(long long)arg1;
- (long long)_dci_style;
- (id)_defaultTitleView;
- (double)_desiredHeightForBarMetrics:(long long)arg1 defaultHeightBlock:(id /* block */)arg2;
- (id)_effectiveBackBarButtonItem;
- (id)_existingInlineSearchBarItemGroup;
- (id)_firstNonSpaceItemInList:(id)arg1;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceRightItem;
- (double)_fontScaleAdjustment;
- (void)_freezeCurrentTitleView;
- (void)_getLeadingItems:(id*)arg1 groups:(id*)arg2;
- (void)_getTrailingItems:(id*)arg1 groups:(id*)arg2;
- (bool)_hasDefaultTitleView;
- (bool)_hasInlineSearchBar;
- (bool)_hasInlineSearchBarForTraits:(id)arg1;
- (bool)_hidesSearchBarWhenScrollingIfAllowed;
- (double)_idealCustomTitleWidth;
- (id)_independentBackgroundImageForBarMetrics:(long long)arg1;
- (long long)_independentBarStyle;
- (id)_independentShadowImage;
- (id)_inlineSearchBarItemGroup;
- (bool)_isManualScrollEdgeAppearanceEnabled;
- (id)_largeTitleAccessoryView;
- (unsigned long long)_largeTitleAccessoryViewHorizontalAlignment;
- (unsigned long long)_largeTitleTwoLineMode;
- (unsigned long long)_leftFlexibleSpaceCount;
- (id)_leftItemSpaceList;
- (bool)_leftItemsWantBackButton;
- (double)_manualScrollEdgeAppearanceProgress;
- (void)_messageChangeObserver:(id)arg1 forTransitionFromSearchController:(id)arg2;
- (double)_minimumDesiredHeightForBarMetrics:(long long)arg1;
- (id)_minimumDesiredHeights;
- (void)_movedFromTopOfStack:(bool)arg1;
- (void)_movedToTopOfStack:(bool)arg1;
- (void)_movingFromTopOfStack;
- (void)_movingToTopOfStack;
- (id)_owningNavigationBar;
- (id)_pendingTitle;
- (bool)_preserveSearchBarAcrossTransitions;
- (void)_removeBackButtonView;
- (void)_removeBarButtonItemViews;
- (void)_removeContentInView:(id)arg1;
- (void)_removeTitleAndButtonViews;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(bool)arg3;
- (unsigned long long)_rightFlexibleSpaceCount;
- (id)_rightItemSpaceList;
- (id)_searchControllerIfAllowed;
- (void)_searchControllerReadyForDeferredAutomaticShowsScopeBar;
- (void)_setAbbreviatedBackButtonTitles:(id)arg1;
- (void)_setAlwaysUseManualScrollEdgeAppearance:(bool)arg1;
- (void)_setAutoScrollEdgeTransitionDistance:(double)arg1;
- (void)_setBackButtonDisplayMode:(unsigned long long)arg1;
- (void)_setBackButtonPressed:(bool)arg1;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2;
- (void)_setBackgroundHidden:(bool)arg1;
- (void)_setBottomPalette:(id)arg1;
- (void)_setBottomPaletteNeedsUpdate;
- (void)_setBottomPaletteNeedsUpdate:(id)arg1;
- (void)_setCanvasView:(id)arg1;
- (void)_setChangeObserver:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setFontScaleAdjustment:(double)arg1;
- (void)_setIdealCustomTitleWidth:(double)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3;
- (void)_setIndependentBarStyle:(long long)arg1;
- (void)_setLargeTitleAccessoryView:(id)arg1;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(bool)arg2;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(bool)arg2 horizontalAlignment:(unsigned long long)arg3;
- (void)_setLargeTitleTwoLineMode:(unsigned long long)arg1;
- (void)_setLargeTitleViewDataSource:(id)arg1;
- (void)_setLeftFlexibleSpaceCount:(unsigned long long)arg1;
- (void)_setLeftItemSpaceList:(id)arg1;
- (void)_setManualScrollEdgeAppearanceEnabled:(bool)arg1;
- (void)_setManualScrollEdgeAppearanceProgress:(double)arg1;
- (void)_setMinimumDesiredHeight:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setOwningNavigationBar:(id)arg1;
- (void)_setPendingTitle:(id)arg1;
- (void)_setPreserveSearchBarAcrossTransitions:(bool)arg1;
- (void)_setRightFlexibleSpaceCount:(unsigned long long)arg1;
- (void)_setRightItemSpaceList:(id)arg1;
- (void)_setShouldDismissPresentedViewControllerWhenPopped:(bool)arg1;
- (void)_setStackEntry:(id)arg1;
- (void)_setSupportsTwoLineLargeTitles:(bool)arg1;
- (void)_setTitle:(id)arg1 animated:(bool)arg2;
- (void)_setTitle:(id)arg1 animated:(bool)arg2 matchBarButtonItemAnimationDuration:(bool)arg3;
- (void)_setTitleViewDataSource:(id)arg1;
- (void)_setWeeTitle:(id)arg1;
- (bool)_shouldDismissPresentedViewControllerWhenPopped;
- (bool)_shouldSearchControllerDeferPresentationTransition:(id)arg1;
- (id)_stackEntry;
- (bool)_supportsTwoLineLargeTitles;
- (id)_titleView;
- (double)_titleViewWidthForAnimations;
- (void)_updateSearchBarItemGroup;
- (void)_updateViewsForBarSizeChangeAndApply:(bool)arg1;
- (bool)_wantsBackButtonIndicator;
- (id)_weeTitle;
- (id)additionalOverflowItems;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)backAction;
- (id)backBarButtonItem;
- (long long)backButtonDisplayMode;
- (id)backButtonTitle;
- (id)backButtonView;
- (id)centerItemGroups;
- (id)compactAppearance;
- (id)compactScrollEdgeAppearance;
- (id)context;
- (id)currentBackButtonTitle;
- (id)customLeftItem;
- (id)customLeftView;
- (id)customRightItem;
- (id)customRightView;
- (id)customTitleView;
- (id)customizationIdentifier;
- (void)dealloc;
- (id)description;
- (id)documentProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBackButtonView;
- (bool)hidesBackButton;
- (bool)hidesSearchBarWhenScrolling;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (long long)largeTitleDisplayMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })largeTitleInsets;
- (id)leadingItemGroups;
- (id)leftBarButtonItem;
- (id)leftBarButtonItems;
- (bool)leftItemsSupplementBackButton;
- (id)navigationBar;
- (id)overflowPresentationSource;
- (id)pinnedTrailingGroup;
- (long long)preferredSearchBarPlacement;
- (id)prompt;
- (id)renameDelegate;
- (id)rightBarButtonItem;
- (id)rightBarButtonItems;
- (id)scrollEdgeAppearance;
- (long long)searchBarPlacement;
- (id)searchController;
- (void)setAdditionalOverflowItems:(id)arg1;
- (void)setBackAction:(id)arg1;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setBackButtonDisplayMode:(long long)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)setCenterItemGroups:(id)arg1;
- (void)setCompactAppearance:(id)arg1;
- (void)setCompactScrollEdgeAppearance:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCustomLeftItem:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(bool)arg2;
- (void)setCustomLeftView:(id)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(bool)arg2;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(bool)arg2;
- (void)setCustomRightView:(id)arg1;
- (void)setCustomRightView:(id)arg1 animated:(bool)arg2;
- (void)setCustomTitleView:(id)arg1;
- (void)setCustomizationIdentifier:(id)arg1;
- (void)setDocumentProperties:(id)arg1;
- (void)setHidesBackButton:(bool)arg1;
- (void)setHidesBackButton:(bool)arg1 animated:(bool)arg2;
- (void)setHidesSearchBarWhenScrolling:(bool)arg1;
- (void)setLargeTitleDisplayMode:(long long)arg1;
- (void)setLargeTitleInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeadingItemGroups:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setLeftBarButtonItems:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setLeftItemsSupplementBackButton:(bool)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setPinnedTrailingGroup:(id)arg1;
- (void)setPreferredSearchBarPlacement:(long long)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRenameDelegate:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setRightBarButtonItems:(id)arg1;
- (void)setRightBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setScrollEdgeAppearance:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setStandardAppearance:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTag:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMenuProvider:(id /* block */)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTrailingItemGroups:(id)arg1;
- (void)setUseRelativeLargeTitleInsets:(bool)arg1;
- (void)set_alternateLargeTitles:(id)arg1;
- (void)set_alwaysUseManualScrollEdgeAppearance:(bool)arg1;
- (void)set_titleViewWidthForAnimations:(double)arg1;
- (id)standardAppearance;
- (long long)style;
- (long long)tag;
- (id)title;
- (id /* block */)titleMenuProvider;
- (id)titleView;
- (id)trailingItemGroups;
- (void)updateNavigationBarButtonsAnimated:(bool)arg1;
- (bool)useRelativeLargeTitleInsets;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (void)ams_configureWithDefaultBackground;
- (void)ams_configureWithTranslucentWhileScrollingBackground;
- (void)ams_configureWithTransparentBackground;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (id)doc_pendingSearchControllerUpdateRequest;
- (void)doc_safeSetSearchController:(id)arg1;
- (void)doc_setPendingSearchControllerUpdateRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmojiPoster.framework/EmojiPoster

- (void)em_setBackgroundHidden:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (bool)_sf_prefersDismissOrDoneButtonOnLeft;
- (bool)sf_isEmpty;
- (id)sf_preferredDismissOrDoneButtonItem;
- (void)sf_setPreferredDismissOrDoneButtonItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)ic_setTitle:(id)arg1 andSubtitle:(id)arg2;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (void)ob_applyAutomaticScrollToEdgeBehavior;
- (void)ob_applyAutomaticScrollToEdgeBehaviorWithDistance:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pkui_enableManualScrollEdgeAppearanceWithInitialProgress:(double)arg1;
- (void)pkui_setCenterAlignedTitleView:(id)arg1;
- (void)pkui_setupScrollEdgeChromelessAppearance;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)_updateFinalLargeTitleDisplayMode;
- (long long)px_backButtonDisplayMode;
- (bool)px_disableLargeTitle;
- (bool)px_hidesBackButtonInRegularWidth;
- (long long)px_preferredLargeTitleDisplayMode;
- (void)px_setBackButtonDisplayMode:(long long)arg1;
- (void)px_setDisableLargeTitle:(bool)arg1;
- (void)px_setHidesBackButtonInRegularWidth:(bool)arg1;
- (void)px_setPreferredLargeTitleDisplayMode:(long long)arg1;
- (void)px_updateBackButtonVisibilityForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (bool)_pu_shouldUpdateBarButtonItems:(id)arg1 withNewBarButtonItems:(id)arg2;
- (id)pu_banner;
- (void)pu_setBanner:(id)arg1;
- (void)pu_setDefaultBackBarButtonItemWithTitle:(id)arg1;
- (bool)pu_shouldUpdateLeftBarButtonItems:(id)arg1;
- (bool)pu_shouldUpdateRightBarButtonItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (void)setSmu_largeTitleAccessoryView:(id)arg1;
- (id)smu_largeTitleAccessoryView;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)ts_setBackButtonTitle:(id)arg1;
- (void)ts_setBottomPaletteMinimumHeight:(double)arg1;
- (void)ts_setBottomPalettePreferredHeight:(double)arg1;
- (void)ts_setBottomPaletteWithContentView:(id)arg1;
- (void)ts_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (void)setStackedSearchBarPlacement;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

- (void)icqui_hideNavigationBarSpinner;
- (void)icqui_showNavigationBarSpinner;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)fadeInTitleView;
- (void)fadeOutTitleView;
- (void)mergeValuesFromItem:(id)arg1;
- (void)resetAllValues;
- (void)setTitleView:(id)arg1 animated:(bool)arg2;

@end
