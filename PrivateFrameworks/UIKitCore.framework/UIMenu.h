
@interface UIMenu : UIMenuElement <_UIMenuElementStateObserver> {
    bool  __surfacesSelectionState;
    unsigned long long  _behaviorOptions;
    NSArray * _children;
    bool  _forceAutomaticSelection;
    <UIMenuForcedAutomaticSelectionDelegate> * _forcedAutomaticSelectionDelegate;
    UIView * _headerView;
    id /* block */  _headerViewProvider;
    NSString * _identifier;
    struct { 
        bool isPreparedForDisplay; 
        bool hasVisibleSelectedItem; 
        bool hasDeepHierarchy; 
        bool hasAtLeastOneVisibleItem; 
        bool hasVisibleLargePalette; 
    }  _metadata;
    unsigned long long  _options;
    long long  _preferredElementSize;
    long long  _resolvedElementSize;
}

@property (setter=_setResolvedElementSize:, nonatomic) long long _resolvedElementSize;
@property (nonatomic, readonly, copy) NSArray *_selectedElements;
@property (setter=_setSurfacesSelectionState:, nonatomic) bool _surfacesSelectionState;
@property (nonatomic) unsigned long long behaviorOptions;
@property (nonatomic, readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceAutomaticSelection;
@property (nonatomic) <UIMenuForcedAutomaticSelectionDelegate> *forcedAutomaticSelectionDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic, copy) id /* block */ headerViewProvider;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) struct { bool x1; bool x2; bool x3; bool x4; bool x5; } metadata;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) long long preferredElementSize;
@property (nonatomic, readonly) NSArray *selectedElements;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultInlineMenuWithIdentifier:(id)arg1 children:(id)arg2;
+ (id)_defaultMenuImageNames;
+ (id)_defaultMenuTitles;
+ (id)_defaultMenuWithIdentifier:(id)arg1 children:(id)arg2;
+ (id)_defaultMenuWithIdentifier:(id)arg1 options:(unsigned long long)arg2 children:(id)arg3;
+ (id)menuWithChildren:(id)arg1;
+ (id)menuWithTitle:(id)arg1 children:(id)arg2;
+ (id)menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
+ (id)menuWithTitle:(id)arg1 imageName:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (id)_copyWithOptions:(unsigned long long)arg1;
- (void)_elementStateDidChange:(id)arg1;
- (void)_elementWillPerformAction:(id)arg1;
- (bool)_hasGlobalHeader;
- (id)_immutableCopy;
- (id)_immutableCopySharingLeafObservers:(bool)arg1;
- (id)_mutableCopy;
- (long long)_resolvedElementSize;
- (id)_selectedElements;
- (void)_setResolvedElementSize:(long long)arg1;
- (void)_setSurfacesSelectionState:(bool)arg1;
- (bool)_shouldShowSelectionState;
- (bool)_surfacesSelectionState;
- (void)addAsStateObserver;
- (unsigned long long)behaviorOptions;
- (id)childElementForElement:(id)arg1;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)establishInitialDefaultSingleSelection;
- (bool)forceAutomaticSelection;
- (id)forcedAutomaticSelectionDelegate;
- (unsigned long long)hash;
- (id)headerView;
- (id /* block */)headerViewProvider;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithMenu:(id)arg1 overrideChildren:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 identifier:(id)arg4 options:(unsigned long long)arg5 children:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)menuByReplacingChildren:(id)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; })metadata;
- (unsigned long long)options;
- (long long)preferredElementSize;
- (id)recursivelySelectDefaultForcedSelection:(bool)arg1;
- (void)removeAsStateObserver;
- (id)selectedElements;
- (void)setBehaviorOptions:(unsigned long long)arg1;
- (void)setForceAutomaticSelection:(bool)arg1;
- (void)setForcedAutomaticSelectionDelegate:(id)arg1;
- (void)setHeaderViewProvider:(id /* block */)arg1;
- (void)setMetadata:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; })arg1;
- (void)setPreferredElementSize:(long long)arg1;
- (void)updateChildrenForSingleSelectedElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)safari_menuWithCachedChildrenProvider:(id /* block */)arg1;
+ (id)safari_menuWithTitle:(id)arg1 cachedChildrenProvider:(id /* block */)arg2;
+ (id)safari_menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 cachedChildrenProvider:(id /* block */)arg5;
+ (id)safari_menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 uncachedChildrenProvider:(id /* block */)arg5;
+ (id)safari_menuWithTitle:(id)arg1 uncachedChildrenProvider:(id /* block */)arg2;
+ (id)safari_menuWithUncachedChildrenProvider:(id /* block */)arg1;
+ (id)sf_bookmarkMenu;
+ (id)sf_tabMenu;
+ (id)sf_tabMenuWithAdditionalChildrenProvider:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

+ (id)_safari_recentlyClosedTabsMenuItemsForProfile:(id)arg1 openHandler:(id /* block */)arg2;
+ (id)safari_recentlyClosedTabsMenuForProfile:(id)arg1 showProfileTitle:(bool)arg2 openHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_inlineMenuWithChildren:(id)arg1;
+ (id)ic_inlineMenuWithElementSize:(long long)arg1 children:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (id)pr_menuByUpdatingItemMatchingItem:(id)arg1 updater:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (bool)_supportsSurfacingSelectionState;

- (void)_sb_setSurfacesSelectionState:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_menuWithItems:(id)arg1 title:(id)arg2;
+ (id)vk_menuWithItems:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (id)vk_menuWithItems:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4;

- (id)vk_addItems:(id)arg1;
- (id)vk_addNonNilItem:(id)arg1;
- (id)vk_addNonNilItems:(id)arg1;

@end
