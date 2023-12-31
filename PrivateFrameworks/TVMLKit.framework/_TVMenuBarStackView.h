
@interface _TVMenuBarStackView : UIStackView {
    <_TVMenuBarStackViewDelegate> * _delegate;
    unsigned long long  _selectedIndex;
    NSArray * _tabBarItems;
}

@property (nonatomic) <_TVMenuBarStackViewDelegate> *delegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, copy) NSArray *tabBarItems;

- (void).cxx_destruct;
- (void)_buttonEventTouchUpInside:(id)arg1;
- (void)_configureView;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTabBarItems:(id)arg1;
- (id)tabBarItems;

@end
