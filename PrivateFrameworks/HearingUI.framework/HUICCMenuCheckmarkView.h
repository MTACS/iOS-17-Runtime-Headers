
@interface HUICCMenuCheckmarkView : UIView <HACCContentModule, UIGestureRecognizerDelegate> {
    NSArray * _availableComfortSoundsAssets;
    HACCCapsuleDarkBackground * _backgroundMenuView;
    NSDictionary * _comfortSoundsDownloadProgress;
    NSMutableArray * _menuItemViews;
    NSMutableArray * _menuItems;
    HACCStackView * _menuViewStack;
    UITapGestureRecognizer * _tapGestureRecognizer;
    HACCCapsuleTitleView * _titleView;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (nonatomic, retain) NSArray *availableComfortSoundsAssets;
@property (nonatomic, retain) HACCCapsuleDarkBackground *backgroundMenuView;
@property (nonatomic, retain) NSDictionary *comfortSoundsDownloadProgress;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *menuItemViews;
@property (nonatomic, retain) NSMutableArray *menuItems;
@property (nonatomic, retain) HACCStackView *menuViewStack;
@property (nonatomic) unsigned long long module;
@property (nonatomic) bool providesOwnSeparator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) HACCCapsuleTitleView *titleView;

- (void).cxx_destruct;
- (void)_handleTapGesture:(id)arg1;
- (id)_menuItems;
- (void)_updateMenuViewIfNecessary;
- (id)availableComfortSoundsAssets;
- (id)backgroundMenuView;
- (id)comfortSoundsDownloadProgress;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andModule:(unsigned long long)arg2;
- (id)menuItemViews;
- (id)menuItems;
- (id)menuViewStack;
- (unsigned long long)module;
- (id /* block */)personalAudioToggleBlockForType:(unsigned long long)arg1;
- (void)setAvailableComfortSoundsAssets:(id)arg1;
- (void)setBackgroundMenuView:(id)arg1;
- (void)setComfortSoundsDownloadProgress:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMenuItemViews:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setMenuViewStack:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)tapGestureRecognizer;
- (id)titleView;
- (void)updateValue;

@end
