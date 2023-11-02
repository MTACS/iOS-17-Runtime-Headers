
@interface SFTabGroupBanner : SFPinnableBanner {
    SFThemeColorEffectView * _backdrop;
    _SWCollaborationButtonView * _collaborationButton;
    WBTabGroup * _tabGroup;
    UIAction * _tabGroupTapAction;
    SFTabGroupTitleView * _titleView;
    UIToolbar * _toolbar;
}

@property (nonatomic, retain) _SWCollaborationButtonView *collaborationButton;
@property (nonatomic, retain) WBTabGroup *tabGroup;
@property (nonatomic, retain) UIAction *tabGroupTapAction;

- (void).cxx_destruct;
- (void)_updateToolbarItems;
- (id)collaborationButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollaborationButton:(id)arg1;
- (void)setTabGroup:(id)arg1;
- (void)setTabGroupTapAction:(id)arg1;
- (bool)shouldUsePlainTheme;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tabGroup;
- (id)tabGroupTapAction;
- (void)themeDidChange;
- (void)updateTitle;

@end
