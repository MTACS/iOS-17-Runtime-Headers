
@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    UIColor * _selectionBackgroundTintColor;
    UIView * _selectionBackgroundView;
    UIColor * _selectionTintColor;
}

@property (nonatomic, retain) UIColor *selectionBackgroundTintColor;
@property (nonatomic, retain) UIColor *selectionTintColor;

- (void).cxx_destruct;
- (long long)_securePasteButtonSite;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)selectionBackgroundTintColor;
- (id)selectionTintColor;
- (void)setSelectionBackgroundTintColor:(id)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;

@end
