
@interface SFUnifiedBarRegistration : NSObject <_SFBarRegistrationToken> {
    NSSet * _allBarItems;
    SFUnifiedBarItem * _backButton;
    SFUnifiedBar * _bar;
    _SFBarManager * _barManager;
    SFUnifiedBarButton * _bookmarksAndSidebarButton;
    SFUnifiedBarItem * _cancelButton;
    SFCollaborationUnifiedBarItem * _collaborationButton;
    long long  _contentMode;
    NSMutableSet * _disabledBarItems;
    SFDownloadsUnifiedBarItem * _downloadsButton;
    SFUnifiedBarItem * _forwardButton;
    NSMutableSet * _hiddenBarItems;
    NSArray * _leadingBarItems;
    bool  _needsUpdateItems;
    SFUnifiedBarItem * _newTabButton;
    bool  _nextUpdateShouldPinScrollPositionToTrailingEdge;
    long long  _persona;
    SFUnifiedBarItem * _shareButton;
    long long  _state;
    SFUnifiedBarItem * _tabGroupButton;
    SFUnifiedBarItem * _tabOverviewButton;
    NSArray * _trailingBarItems;
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
- (long long)_SFBarItemForUnifiedBarItem:(id)arg1;
- (id)_imageForBarItem:(long long)arg1;
- (bool)_isBarItemHidden:(long long)arg1;
- (void)_itemReceivedTap:(id)arg1;
- (id)_makeBarItemForSFBarItem:(long long)arg1;
- (void)_setNeedsUpdateItems;
- (id)_unifiedBarItemsForSFBarItems:(id)arg1;
- (void)_updateEnabledBarItems;
- (void)_updateItems;
- (void)_updateItemsIfNeeded;
- (id)collaborationButton;
- (bool)containsBarItem:(long long)arg1;
- (long long)contentMode;
- (id)initWithBar:(id)arg1 barManager:(id)arg2 persona:(long long)arg3;
- (id)popoverSourceInfoForItem:(long long)arg1;
- (void)pulseBarItem:(long long)arg1;
- (void)setAttributedTitle:(id)arg1 forBarItem:(long long)arg2;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(bool)arg2;
- (void)setBarItem:(long long)arg1 menu:(id)arg2;
- (void)setCollaborationButton:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1 forBarItem:(long long)arg2;
- (void)setProgress:(double)arg1 forBarItem:(long long)arg2;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1 forBarItem:(long long)arg2;
- (long long)state;
- (id)unifiedBarItemForSFBarItem:(long long)arg1;
- (void)updateBarAnimated:(bool)arg1;
- (id)viewForBarItem:(long long)arg1;

@end
