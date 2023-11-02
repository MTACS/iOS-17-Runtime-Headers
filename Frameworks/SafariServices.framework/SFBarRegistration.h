
@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {
    NSOrderedSet * _arrangedBarItems;
    UIBarButtonItem * _backItem;
    UIToolbar * _bar;
    _SFBarManager * _barManager;
    UIBarButtonItem * _bookmarksItem;
    UIBarButtonItem * _customActivityItem;
    SFDownloadsBarButtonItem * _downloadsItem;
    UIBarButtonItem * _forwardItem;
    NSMutableSet * _hiddenBarItems;
    NSOrderedSet * _lastCommittedArrangedBarItems;
    long long  _layout;
    UIBarButtonItem * _newTabItem;
    UIBarButtonItem * _openInSafariItem;
    UIBarButtonItem * _shareItem;
    UIBarButtonItem * _tabExposeItem;
}

@property (nonatomic, retain) _SWCollaborationButtonView *collaborationButton;
@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *microphoneButton;
@property (nonatomic) unsigned long long pageFormatItemState;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIBarButtonItemForItem:(long long)arg1;
- (id)_UIBarButtonItemForBarItem:(long long)arg1;
- (id)_UIBarButtonItemsForArrangedBarItems:(id)arg1;
- (bool)_arrangedBarItemsNeedUpdate;
- (long long)_barItemForUIBarButtonItem:(id)arg1;
- (id)_effectiveArrangedBarItems;
- (void)_itemReceivedLongPress:(id)arg1;
- (void)_itemReceivedTap:(id)arg1;
- (void)_itemReceivedTouchDown:(id)arg1;
- (id)_newBarButtonItemForSFBarItem:(long long)arg1;
- (void)_updateTitlesAndMenus;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)containsBarItem:(long long)arg1;
- (id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(long long)arg4;
- (id)popoverSourceInfoForItem:(long long)arg1;
- (void)pulseBarItem:(long long)arg1;
- (void)pulseDownloadsItem;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(bool)arg2;
- (void)setBarItem:(long long)arg1 menu:(id)arg2;
- (void)setBarItem:(long long)arg1 selected:(bool)arg2;
- (void)setCustomActivityImage:(id)arg1 accessibilityLabel:(id)arg2;
- (void)setDownloadsItemProgress:(double)arg1;
- (void)setImage:(id)arg1 forBarItem:(long long)arg2;
- (void)setProgress:(double)arg1 forBarItem:(long long)arg2;
- (void)updateArrangedUIBarButtonItemsIfNeeded;
- (void)updateBarAnimated:(bool)arg1;

@end
