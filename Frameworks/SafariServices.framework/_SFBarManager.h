
@interface _SFBarManager : NSObject {
    NSMapTable * _barToRegistrationMap;
    id /* block */  _coalescedUpdatesBlock;
    NSTimer * _coalescedUpdatesTimer;
    _SWCollaborationButtonView * _collaborationButton;
    long long  _contentMode;
    NSString * _customActivityAccessibilityLabel;
    UIImage * _customActivityImage;
    bool  _deferUpdateAllRegistrations;
    <_SFBarManagerDelegate> * _delegate;
    double  _downloadsItemProgress;
    NSArray * _itemConfigurationMap;
    double  _lastCoalescedUpdatesTime;
    bool  _needsUpdateAllRegistrations;
    long long  _state;
}

@property (nonatomic, retain) _SWCollaborationButtonView *collaborationButton;
@property (nonatomic) long long contentMode;
@property (nonatomic) <_SFBarManagerDelegate> *delegate;
@property (nonatomic) double downloadsItemProgress;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_invalidateCoalescedUpdatesTimer;
- (void)_updateAllRegistrations;
- (void)_updateAllRegistrationsAnimated:(bool)arg1;
- (void)_updateRegistrationWithToken:(id)arg1 animated:(bool)arg2;
- (bool)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
- (void)cancelCoalescedUpdates;
- (id)collaborationButton;
- (long long)contentMode;
- (id)delegate;
- (double)downloadsItemProgress;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBarItem:(long long)arg1 inCoordinateSpace:(id)arg2;
- (id)init;
- (bool)isBarItemEnabled:(long long)arg1;
- (bool)isBarItemHidden:(long long)arg1;
- (bool)isBarItemSelected:(long long)arg1;
- (void)performCoalescedUpdates:(id /* block */)arg1;
- (void)performCoalescedUpdatesAnimated:(bool)arg1 updates:(id /* block */)arg2;
- (void)performCoalescedUpdatesNowAnimated:(bool)arg1;
- (void)pulseDownloadsItem;
- (void)registerBar:(id)arg1 withToken:(id)arg2;
- (void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(long long)arg3;
- (void)registerUnifiedBar:(id)arg1 withPersona:(long long)arg2;
- (void)setBarItem:(long long)arg1 attributedTitle:(id)arg2;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBarItem:(long long)arg1 hidden:(bool)arg2;
- (void)setBarItem:(long long)arg1 menu:(id)arg2;
- (void)setBarItem:(long long)arg1 selected:(bool)arg2;
- (void)setBarItem:(long long)arg1 title:(id)arg2;
- (void)setCollaborationButton:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCustomActivityImage:(id)arg1 accessibilityLabel:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDownloadsItemNeedsLayout;
- (void)setDownloadsItemProgress:(double)arg1;
- (void)setImage:(id)arg1 forBarItem:(long long)arg2;
- (void)setState:(long long)arg1;
- (long long)state;
- (unsigned long long)test_numberOfRegistrations;
- (id)test_registrationForBar:(id)arg1;
- (void)visibleBarItemsNeedUpdate;

@end
