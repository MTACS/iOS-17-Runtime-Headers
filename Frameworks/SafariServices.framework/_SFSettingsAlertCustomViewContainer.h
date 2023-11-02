
@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView> {
    _SFSettingsAlertItemBackgroundView * _backgroundView;
    UIView * _contentView;
    long long  _defaultBackgroundMode;
    bool  _hidesSeparator;
    _SFSettingsAlertItem * _item;
    NSAttributedString * attributedDetailText;
    NSAttributedString * attributedText;
    <SFSettingsAlertItemViewDelegate> * delegate;
    NSString * detailText;
    bool  enabled;
    UIImage * image;
    bool  selected;
    NSString * text;
}

@property (nonatomic, copy) NSAttributedString *attributedDetailText;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) long long backgroundMode;
@property (nonatomic, readonly) UIView *contentView;
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
- (id)attributedDetailText;
- (id)attributedText;
- (long long)backgroundMode;
- (id)contentView;
- (long long)defaultBackgroundMode;
- (id)delegate;
- (id)detailText;
- (bool)hidesSeparator;
- (id)image;
- (id)initWithContentView:(id)arg1;
- (bool)isEnabled;
- (bool)isSelected;
- (id)item;
- (void)setAttributedDetailText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setDefaultBackgroundMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidesSeparator:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
