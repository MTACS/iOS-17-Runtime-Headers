
@interface _SFSettingsAlertControl : UIControl <SFSettingsAlertItemView> {
    _SFSettingsAlertItemBackgroundView * _backgroundView;
    long long  _defaultBackgroundMode;
    <SFSettingsAlertItemViewDelegate> * _delegate;
    bool  _hidesSeparator;
    _SFSettingsAlertItem * _item;
}

@property (nonatomic, copy) NSAttributedString *attributedDetailText;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) long long backgroundMode;
@property (nonatomic, readonly) _SFSettingsAlertItemBackgroundView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultBackgroundMode;
@property (nonatomic) <SFSettingsAlertItemViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesSeparator;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) _SFSettingsAlertItem *item;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_updateBackgroundView;
- (long long)backgroundMode;
- (id)backgroundView;
- (long long)defaultBackgroundMode;
- (id)delegate;
- (bool)hidesSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)setDefaultBackgroundMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesSeparator:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;

@end
