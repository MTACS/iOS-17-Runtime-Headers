
@interface WFGlyphPickerTabBar : UIView <UITabBarDelegate> {
    <WFGlyphPickerTabBarDelegate> * _delegate;
    unsigned long long  _selectedTabIndex;
    UITabBar * _tabBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFGlyphPickerTabBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectedTabIndex;
@property (readonly) Class superclass;
@property (nonatomic) UITabBar *tabBar;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTabNames:(id)arg1 tabCharacters:(id)arg2;
- (unsigned long long)selectedTabIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedTabIndex:(unsigned long long)arg1;
- (void)setTabBar:(id)arg1;
- (id)tabBar;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;

@end
