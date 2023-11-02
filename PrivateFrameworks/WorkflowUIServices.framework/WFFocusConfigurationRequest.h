
@interface WFFocusConfigurationRequest : NSObject <NSSecureCoding> {
    LNAction * _action;
    LNFullyQualifiedActionIdentifier * _actionIdentifier;
    WFContextualAction * _contextualAction;
    bool  _enabled;
    NSArray * _footerButtons;
    WFColor * _mastheadTintColor;
    unsigned long long  _mode;
    bool  _showsEnablementButton;
    LNFocusConfigurationSuggestionContext * _suggestionContext;
}

@property (nonatomic, copy) LNAction *action;
@property (nonatomic, readonly, copy) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (nonatomic, readonly) WFContextualAction *contextualAction;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSArray *footerButtons;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly, copy) WFColor *mastheadTintColor;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) bool showsEnablementButton;
@property (nonatomic, readonly, copy) LNFocusConfigurationSuggestionContext *suggestionContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)actionIdentifier;
- (id)contextualAction;
- (void)encodeWithCoder:(id)arg1;
- (id)footerButtons;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextualAction:(id)arg1 footerButtons:(id)arg2 showsEnablementButton:(bool)arg3 isEnabled:(bool)arg4 mastheadTintColor:(id)arg5;
- (id)initWithContextualActionOptions:(id)arg1;
- (id)initWithFocusConfigurationActionIdentifier:(id)arg1 action:(id)arg2 suggestionContext:(id)arg3 footerButtons:(id)arg4 showsEnablementButton:(bool)arg5 isEnabled:(bool)arg6;
- (id)initWithOptions:(id)arg1;
- (bool)isEnabled;
- (bool)isValid;
- (void)loadFocusActionWithCompletion:(id /* block */)arg1;
- (id)mastheadTintColor;
- (unsigned long long)mode;
- (void)setAction:(id)arg1;
- (bool)showsEnablementButton;
- (id)suggestionContext;

@end
