
@interface _SFSettingsAlertItem : NSObject {
    NSString * _accessibilityIdentifier;
    long long  _actionType;
    NSAttributedString * _attributedSubtitle;
    NSAttributedString * _attributedTitle;
    UIView * _badgeView;
    NSArray * _componentsArrangement;
    id  _controller;
    bool  _enabled;
    _SFSettingsAlertItem * _group;
    id /* block */  _handler;
    UIImage * _icon;
    bool  _selected;
    bool  _showsIndicatorDot;
    UIImageView * _statusImageView;
    NSArray * _subItems;
    NSString * _subtitle;
    NSString * _textStyle;
    UIColor * _tintColor;
    NSString * _title;
    long long  _type;
    <SFSettingsAlertItemView> * _view;
    id /* block */  _viewConfigurationBlock;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, copy) NSAttributedString *attributedSubtitle;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIView *badgeView;
@property (nonatomic, copy) NSArray *componentsArrangement;
@property (nonatomic, retain) id controller;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) _SFSettingsAlertItem *group;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool selected;
@property (nonatomic) bool showsIndicatorDot;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, copy) NSArray *subItems;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic) <SFSettingsAlertItemView> *view;
@property (nonatomic, readonly) _SFSettingsAlertButton *viewAsButton;
@property (nonatomic, readonly) UIView<SFSettingsAlertItemView> *viewAsUIView;
@property (nonatomic, copy) id /* block */ viewConfigurationBlock;

+ (id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 action:(long long)arg4 handler:(id /* block */)arg5;
+ (id)optionGroupOptionWithAttributedTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 action:(long long)arg4 handler:(id /* block */)arg5;
+ (id)optionsGroupWithTitle:(id)arg1 action:(long long)arg2 subItemAction:(long long)arg3 controller:(id)arg4;
+ (id)paletteWithAction:(long long)arg1 controller:(id)arg2;
+ (id)singleLineButtonWithTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 action:(long long)arg4 handler:(id /* block */)arg5;
+ (id)stepperWithController:(id)arg1 action:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_buttonCommonInitWithTextStyle:(id)arg1 icon:(id)arg2 handler:(id /* block */)arg3;
- (void)_updateButtonSubtitle;
- (void)_updateButtonTitle;
- (id)accessibilityIdentifier;
- (long long)actionType;
- (id)attributedSubtitle;
- (id)attributedTitle;
- (id)badgeView;
- (id)componentsArrangement;
- (id)controller;
- (bool)enabled;
- (id)group;
- (id /* block */)handler;
- (id)icon;
- (id)initWithType:(long long)arg1 action:(long long)arg2;
- (bool)selected;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setComponentsArrangement:(id)arg1;
- (void)setController:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIcon:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowsIndicatorDot:(bool)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setSubItems:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewConfigurationBlock:(id /* block */)arg1;
- (bool)showsIndicatorDot;
- (id)statusImageView;
- (id)subItems;
- (id)subtitle;
- (id)textStyle;
- (id)tintColor;
- (id)title;
- (long long)type;
- (void)updateOptionsGroupDetailLabel;
- (id)view;
- (id)viewAsButton;
- (id)viewAsUIView;
- (id /* block */)viewConfigurationBlock;

@end
