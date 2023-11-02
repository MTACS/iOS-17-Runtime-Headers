
@interface AMSUIMessageButton : AMSUICommonButton {
    AMSDialogAction * _dialogAction;
    bool  _isFooterButton;
    unsigned long long  _messageStyle;
    UIFont * _preferredFont;
}

@property (nonatomic, readonly) AMSDialogAction *dialogAction;
@property (nonatomic) bool isFooterButton;
@property (nonatomic) unsigned long long messageStyle;
@property (nonatomic, retain) UIColor *preferredBackgroundColor;
@property (nonatomic, retain) UIFont *preferredFont;
@property (nonatomic, retain) UIColor *preferredForegroundColor;

+ (id)_defaultConfiguration;

- (void).cxx_destruct;
- (id)_appendChevronToString:(id)arg1;
- (void)_axSettingsDidUpdate:(id)arg1;
- (id)_chevronImage;
- (id)_closeImage;
- (void)_endObservations;
- (void)_refresh;
- (void)_setAXSettings;
- (void)_setAccessibilityIdentifier;
- (void)_setImagePadding;
- (void)_setupWithDialogAction:(id)arg1;
- (void)_startObservations;
- (id)_symbolConfiguration;
- (bool)canBecomeFocused;
- (void)dealloc;
- (id)dialogAction;
- (id)initWithDialogAction:(id)arg1 messageStyle:(unsigned long long)arg2;
- (bool)isDefaultCloseButton;
- (bool)isFooterButton;
- (void)layoutSubviews;
- (unsigned long long)messageStyle;
- (id)preferredBackgroundColor;
- (id)preferredFont;
- (id)preferredForegroundColor;
- (void)setFooterStyle;
- (void)setIsFooterButton:(bool)arg1;
- (void)setMessageStyle:(unsigned long long)arg1;
- (void)setPreferredBackgroundColor:(id)arg1;
- (void)setPreferredFont:(id)arg1;
- (void)setPreferredForegroundColor:(id)arg1;

@end
