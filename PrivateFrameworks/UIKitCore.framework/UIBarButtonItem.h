
@interface UIBarButtonItem : UIBarItem <MFPresentationSource, NSCoding, UIMenuForcedAutomaticSelectionDelegate, _UIPopoverPresentationControllerSourceItem_Internal> {
    id /* block */  __autoValidationHandler;
    NSArray * __backButtonAlternateTitles;
    bool  __changesSelectionAsPrimaryAction;
    UIBarButtonItem * __itemVariation;
    UIBarButtonItemGroup * __owningButtonGroup;
    UINavigationItem * __owningNavigationItem;
    bool  __showsBackButtonIndicator;
    double  __toolbarCharge;
    <_UIBarButtonItemViewOwner> * __viewOwner;
    SEL  _action;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalSelectionInsets;
    _UIBarButtonItemAppearanceStorage * _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int isMinibarView : 1; 
        unsigned int disableAutosizing : 1; 
        unsigned int selected : 1; 
        unsigned int menuIsPrimary : 2; 
        unsigned int imageHasEffects : 1; 
        unsigned int actsAsFakeBackButton : 1; 
        unsigned int springLoaded : 1; 
        unsigned int showsChevron : 1; 
        unsigned int wantsThreeUp : 1; 
        unsigned int changesSelectionAsPrimaryAction : 1; 
        unsigned int enableSymbolAnimations : 1; 
    }  _barButtonItemFlags;
    UIBarButtonItemGroup * _buttonGroup;
    bool  _flexible;
    NSArray * _gestureRecognizers;
    bool  _groupRepresentative;
    bool  _hidden;
    UIImage * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    NSArray * _interactions;
    bool  _isKeyboardItem;
    UIImage * _landscapeImagePhone;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeImagePhoneInsets;
    double  _maximumWidth;
    UIMenu * _menu;
    UIMenuElement * _menuRepresentation;
    double  _minimumWidth;
    NSSet * _possibleSystemItems;
    NSSet * _possibleTitles;
    long long  _preferredMenuElementOrder;
    UIAction * _primaryAction;
    id /* block */  _secondaryActionsProvider;
    NSDictionary * _stylesForSizingTitles;
    id  _target;
    NSString * _title;
    UIView * _view;
    double  _width;
}

@property (getter=_actsAsFakeBackButton, setter=_setActsAsFakeBackButton:, nonatomic) bool _actsAsFakeBackButton;
@property (setter=_setAdditionalSelectionInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property (setter=_setAutoValidationHandler:, nonatomic, copy) id /* block */ _autoValidationHandler;
@property (setter=_setBackButtonAlternateTitles:, nonatomic, copy) NSArray *_backButtonAlternateTitles;
@property (setter=_setChangesSelectionAsPrimaryAction:, nonatomic) bool _changesSelectionAsPrimaryAction;
@property (nonatomic, readonly) UIView *_configuredFloatableView;
@property (setter=_dci_setMenuRepresentation:, nonatomic, copy) UIMenuElement *_dci_menuRepresentation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _doc_ipi_rectForPresenting;
@property (nonatomic, retain) UIView *_doc_ipi_view;
@property (nonatomic, readonly) UIView *_doc_ipi_viewForPresenting;
@property (nonatomic, readonly, copy) UIMenuElement *_effectiveMenuRepresentation;
@property (setter=_setEnableSymbolAnimations:, nonatomic) bool _enableSymbolAnimations;
@property (setter=_setFlexible:, nonatomic) bool _flexible;
@property (getter=_isFloatable, nonatomic, readonly) bool _floatable;
@property (getter=_isFloating, nonatomic, readonly) bool _floating;
@property (setter=_setGestureRecognizers:, nonatomic, copy) NSArray *_gestureRecognizers;
@property (setter=_setHidden:, nonatomic) bool _hidden;
@property (setter=_setImageHasEffects:, nonatomic) bool _imageHasEffects;
@property (setter=_setInteractions:, nonatomic, copy) NSArray *_interactions;
@property (setter=_setItemVariation:, nonatomic, retain) UIBarButtonItem *_itemVariation;
@property (setter=_setLargeContentSizeTitle:, nonatomic, copy) NSString *_largeContentSizeTitle;
@property (setter=_setMaximumWidth:, nonatomic) double _maximumWidth;
@property (nonatomic, readonly) bool _menuIsPrimary;
@property (setter=_setMinimumWidth:, nonatomic) double _minimumWidth;
@property (setter=_setOwningButtonGroup:, nonatomic) UIBarButtonItemGroup *_owningButtonGroup;
@property (setter=_setOwningNavigationItem:, nonatomic) UINavigationItem *_owningNavigationItem;
@property (setter=_setPossibleItemVariations:, nonatomic, copy) NSSet *_possibleItemVariations;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _rectForPresenting;
@property (nonatomic, readonly) UIView *_referenceView;
@property (nonatomic, readonly, copy) NSString *_resolvedLargeContentSizeTitle;
@property (setter=_setSecondaryActionsProvider:, nonatomic, copy) id /* block */ _secondaryActionsProvider;
@property (getter=selected, setter=setSelected:, nonatomic) bool _selected;
@property (setter=_sf_setLongPressEnabled:, nonatomic) bool _sf_longPressEnabled;
@property (setter=_setShowsBackButtonIndicator:, nonatomic) bool _showsBackButtonIndicator;
@property (getter=_showsChevron, setter=_setShowsChevron:, nonatomic) bool _showsChevron;
@property (setter=_setStylesForSizingTitles:, nonatomic, copy) NSDictionary *_stylesForSizingTitles;
@property (nonatomic, readonly) UIToolbarButton *_toolbarButton;
@property (setter=_setToolbarCharge:, nonatomic) double _toolbarCharge;
@property (nonatomic, readonly) UIView *_viewForPresenting;
@property (setter=_setViewOwner:, nonatomic) <_UIBarButtonItemViewOwner> *_viewOwner;
@property (getter=_wantsThreeUp, setter=_setWantsThreeUp:, nonatomic) bool _wantsThreeUp;
@property (getter=_width, setter=_setWidth:, nonatomic) double _width;
@property (nonatomic) SEL action;
@property (nonatomic, readonly) UIBarButtonItemGroup *buttonGroup;
@property (nonatomic) bool changesSelectionAsPrimaryAction;
@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) bool groupRepresentative;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) bool isCustomViewItem;
@property (nonatomic) bool isKeyboardItem;
@property (nonatomic) bool isMinibarView;
@property (nonatomic, readonly) bool isSpaceItem;
@property (nonatomic, readonly) bool isSystemItem;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic, copy) UIMenuElement *menuRepresentation;
@property (getter=_possibleSystemItems, setter=_setPossibleSystemItems:, nonatomic, copy) NSSet *possibleSystemItems;
@property (nonatomic, copy) NSSet *possibleTitles;
@property (nonatomic) long long preferredMenuElementOrder;
@property (nonatomic, copy) UIAction *primaryAction;
@property (nonatomic, copy) UIMenu *secondaryActions;
@property (nonatomic) bool secondaryActionsArePrimary;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) bool smu_isSystemItem;
@property (nonatomic, readonly) long long smu_systemItem;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (getter=isSymbolAnimationEnabled, nonatomic) bool symbolAnimationEnabled;
@property (nonatomic, readonly) long long systemItem;
@property (nonatomic) id target;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIView *view;
@property (nonatomic) double width;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_appearanceBlindViewClasses;
+ (void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;
+ (Class)classForNavigationButton;
+ (Class)classForToolbarButton;
+ (id)fixedSpaceItemOfWidth:(double)arg1;
+ (id)flexibleSpaceItem;

- (void).cxx_destruct;
- (id)_NSToolbarSourceItem;
- (bool)_actsAsFakeBackButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (id)_appearanceStorage;
- (void)_applyDeferredSymbolEffects:(id /* block */)arg1;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (id /* block */)_autoValidationHandler;
- (id)_backButtonAlternateTitles;
- (id)_backgroundImageForState:(unsigned long long)arg1 compact:(bool)arg2 type:(long long)arg3;
- (bool)_canProduceNSToolbarItem;
- (bool)_changesSelectionAsPrimaryAction;
- (id)_configuredFloatableView;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_dci_creatingGroupWithCustomizationIdentifier:(id)arg1;
- (id)_dci_creatingOptionalGroupWithCustomizationIdentifier:(id)arg1;
- (id)_dci_creatingRequiredGroup;
- (id)_dci_menuRepresentation;
- (void)_dci_setMenuRepresentation:(id)arg1;
- (void)_deferSymbolEffectOperation:(long long)arg1 effect:(id)arg2 options:(id)arg3 animated:(bool)arg4;
- (id)_deferredEffectsCreateIfNecessary:(bool)arg1;
- (id)_effectiveMenuRepresentation;
- (bool)_enableSymbolAnimations;
- (void)_executeValidationHandler;
- (bool)_flexible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInCoordinateSpace:(id)arg1 window:(id)arg2;
- (id)_gestureRecognizers;
- (void)_getMenuTitle:(id*)arg1 image:(id*)arg2;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { double x1; double x2; }*)arg1 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 landscape:(bool)arg3;
- (void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8;
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg1 forBarStyle:(long long)arg2 landscape:(bool)arg3 alwaysBordered:(bool)arg4;
- (bool)_hasAction;
- (bool)_hidden;
- (id)_imageForState:(unsigned long long)arg1 compact:(bool)arg2 type:(long long)arg3;
- (bool)_imageHasEffects;
- (id)_interactions;
- (void)_invalidateToolbarRepresentations;
- (bool)_isFloatable;
- (bool)_isFloating;
- (bool)_isImageBarButtonItem;
- (bool)_isPopUpMenuButtonWithMenu:(id)arg1;
- (id)_itemForPresenting;
- (id)_itemVariation;
- (id)_largeContentSizeTitle;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (double)_maximumWidth;
- (bool)_menuIsPrimary;
- (id)_miniImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_miniImageInsets;
- (double)_minimumWidth;
- (id)_nearestViewController;
- (id)_owningButtonGroup;
- (id)_owningNavigationItem;
- (id)_possibleItemVariations;
- (id)_possibleSystemItems;
- (id)_primaryNSToolbarItemForIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPresenting;
- (id)_referenceView;
- (void)_relinquishOwnership:(id)arg1;
- (bool)_resizesBackgroundImage;
- (id)_resolvedImage;
- (id)_resolvedLargeContentSizeTitle;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (id /* block */)_secondaryActionsProvider;
- (id)_secondaryNSToolbarItemForIdentifier:(id)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_sendNeedsToolbarUpdate;
- (void)_setActsAsFakeBackButton:(bool)arg1;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAutoValidationHandler:(id /* block */)arg1;
- (void)_setBackButtonAlternateTitles:(id)arg1;
- (void)_setButtonGroup:(id)arg1 isRepresentative:(bool)arg2;
- (void)_setChangesSelectionAsPrimaryAction:(bool)arg1;
- (void)_setEnableSymbolAnimations:(bool)arg1;
- (void)_setEnclosingBar:(id)arg1 onItem:(id)arg2;
- (void)_setFlexible:(bool)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setImageHasEffects:(bool)arg1;
- (void)_setInteractions:(id)arg1;
- (void)_setItemVariation:(id)arg1;
- (void)_setLargeContentSizeTitle:(id)arg1;
- (void)_setMaximumWidth:(double)arg1;
- (void)_setMiniImage:(id)arg1;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setMinimumWidth:(double)arg1;
- (void)_setOwningButtonGroup:(id)arg1;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_setPossibleItemVariations:(id)arg1;
- (void)_setPossibleSystemItems:(id)arg1;
- (void)_setSecondaryActionsProvider:(id /* block */)arg1;
- (void)_setShowsBackButtonIndicator:(bool)arg1;
- (void)_setShowsChevron:(bool)arg1;
- (void)_setStylesForSizingTitles:(id)arg1;
- (void)_setSystemItem:(long long)arg1;
- (void)_setToolbarChange:(double)arg1;
- (void)_setToolbarCharge:(double)arg1;
- (void)_setViewOwner:(id)arg1;
- (void)_setWantsThreeUp:(bool)arg1;
- (void)_setWidth:(double)arg1;
- (bool)_showsBackButtonIndicator;
- (bool)_showsChevron;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPresentationInWindow:(id)arg1;
- (id)_sourceViewForPresentationInWindow:(id)arg1;
- (id)_stylesForSizingTitles;
- (id)_toolbarButton;
- (double)_toolbarCharge;
- (void)_triggerAction:(id)arg1;
- (void)_triggerActionForEvent:(id)arg1;
- (void)_triggerActionForEvent:(id)arg1 fallbackSender:(id)arg2;
- (void)_updateForAutomaticSelection;
- (bool)_updateMenuInPlace;
- (void)_updateView;
- (id)_viewForPresenting;
- (id)_viewOwner;
- (bool)_wantsThreeUp;
- (double)_width;
- (SEL)action;
- (void)addSymbolEffect:(id)arg1;
- (void)addSymbolEffect:(id)arg1 options:(id)arg2;
- (void)addSymbolEffect:(id)arg1 options:(id)arg2 animated:(bool)arg3;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct UIOffset { double x1; double x2; })backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)buttonGroup;
- (bool)changesSelectionAsPrimaryAction;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)creatingFixedGroup;
- (id)creatingMovableGroupWithCustomizationIdentifier:(id)arg1;
- (id)creatingOptionalGroupWithCustomizationIdentifier:(id)arg1 inDefaultCustomization:(bool)arg2;
- (id)customView;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forcedSelectionOfMenu:(id)arg1 willChangeTo:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInView:(id)arg1;
- (bool)groupRepresentative;
- (bool)hasImage;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)init;
- (id)initWithBarButtonSystemItem:(long long)arg1 menu:(id)arg2;
- (id)initWithBarButtonSystemItem:(long long)arg1 primaryAction:(id)arg2;
- (id)initWithBarButtonSystemItem:(long long)arg1 primaryAction:(id)arg2 menu:(id)arg3;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 menu:(id)arg2;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithPrimaryAction:(id)arg1;
- (id)initWithPrimaryAction:(id)arg1 menu:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 menu:(id)arg5;
- (id)initWithTitle:(id)arg1 menu:(id)arg2;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (bool)isCustomViewItem;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isKeyboardItem;
- (bool)isMinibarView;
- (bool)isSelected;
- (bool)isSpaceItem;
- (bool)isSpringLoaded;
- (bool)isSymbolAnimationEnabled;
- (bool)isSystemItem;
- (id)itemVariation;
- (id)landscapeImagePhone;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeImagePhoneInsets;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentSizeImageInsets;
- (id)menu;
- (id)menuRepresentation;
- (id)nextResponder;
- (id)possibleTitles;
- (long long)preferredMenuElementOrder;
- (id)primaryAction;
- (void)removeAllSymbolEffects;
- (void)removeAllSymbolEffectsWithOptions:(id)arg1;
- (void)removeAllSymbolEffectsWithOptions:(id)arg1 animated:(bool)arg2;
- (void)removeSymbolEffectOfType:(id)arg1;
- (void)removeSymbolEffectOfType:(id)arg1 options:(id)arg2;
- (void)removeSymbolEffectOfType:(id)arg1 options:(id)arg2 animated:(bool)arg3;
- (id)resolvedTitle;
- (id)secondaryActions;
- (bool)secondaryActionsArePrimary;
- (bool)selected;
- (void)setAction:(SEL)arg1;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setChangesSelectionAsPrimaryAction:(bool)arg1;
- (void)setCustomView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsKeyboardItem:(bool)arg1;
- (void)setIsMinibarView:(bool)arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMenu:(id)arg1;
- (void)setMenuRepresentation:(id)arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setPreferredMenuElementOrder:(long long)arg1;
- (void)setPrimaryAction:(id)arg1;
- (void)setSecondaryActions:(id)arg1;
- (void)setSecondaryActionsArePrimary:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSymbolAnimationEnabled:(bool)arg1;
- (void)setSymbolImage:(id)arg1 withContentTransition:(id)arg2;
- (void)setSymbolImage:(id)arg1 withContentTransition:(id)arg2 options:(id)arg3;
- (void)setTarget:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setView:(id)arg1;
- (void)setWidth:(double)arg1;
- (long long)style;
- (long long)systemItem;
- (id)target;
- (id)tintColor;
- (id)title;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)view;
- (double)width;
- (id)window;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_setAsSourceForPopoverPresentationController:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)ql_copySystemItem;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (double)_sf_longPressAllowableMovement;
+ (long long)_sf_popoverCancelButtonItem;
+ (long long)_sf_popoverDoneButtonItem;

- (bool)_sf_longPressEnabled;
- (void)_sf_setLongPressEnabled:(bool)arg1;
- (void)_sf_setTarget:(id)arg1 longPressAction:(SEL)arg2;
- (void)_sf_setTarget:(id)arg1 touchDownAction:(SEL)arg2 longPressAction:(SEL)arg3;
- (void)_sf_test_simulateLongPressInvocation;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_doc_ipi_rectForPresenting;
- (void)_doc_ipi_triggerActionForEvent:(id)arg1;
- (id)_doc_ipi_view;
- (id)_doc_ipi_viewForPresenting;
- (bool)_doc_isRemoteBarItemForUUID:(id)arg1;
- (void)set_doc_ipi_view:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)makeTapToRadarItemWithTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_backButtonForDate:(id)arg1;
+ (id)hk_backButtonWithTitle:(id)arg1;
+ (id)hk_sequencingButtonWithTitle:(id)arg1 accessibilityFormatString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (id)nu_view;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_itemWithFixedWidth:(double)arg1;
+ (id)ic_itemWithFlexibleSpace;

- (void)ic_setTitleAndAccessibilityLabel:(id)arg1;
- (void)ic_setTitleTextAttributesForAllStates:(id)arg1;
- (id)ic_view;
- (void)setIc_titleAndAccessibilityLabel:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_localizedAddBarButtonItem;
+ (id)px_localizedDeselectAllBarButtonItem;
+ (id)px_localizedSelectAllBarButtonItem;
+ (id)px_localizedSelectBarButtonItem;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

+ (id)_sss_cropItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)_sss_redoItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)_sss_shareItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)_sss_trashItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)_sss_undoItemWithTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (bool)smu_isSystemItem;
- (long long)smu_systemItem;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (id)ts_barButtonItemView;
- (id)ts_compressibleBarButtonItemView;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)telephonyUI_fixedSpaceBarButtonItem;
+ (id)telephonyUI_flexibleSpaceBarButtonItem;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (id)initWithBarButtonSystemItem:(long long)arg1;
- (id)initWithImage:(id)arg1 style:(long long)arg2;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (void)tmlSignalAttach:(id)arg1;
- (void)tmlSignalDetach:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptButton:(id)arg1;

@end
