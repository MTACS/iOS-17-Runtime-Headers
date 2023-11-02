
@interface WFFocusConfigurationOptions : NSObject {
    LNAction * _action;
    LNFullyQualifiedActionIdentifier * _actionIdentifier;
    bool  _enabled;
    NSArray * _footerButtons;
    bool  _showsEnablementButton;
    LNFocusConfigurationSuggestionContext * _suggestionContext;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) LNFullyQualifiedActionIdentifier *actionIdentifier;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSArray *footerButtons;
@property (nonatomic, readonly) bool showsEnablementButton;
@property (nonatomic, readonly, copy) LNFocusConfigurationSuggestionContext *suggestionContext;

- (void).cxx_destruct;
- (id)action;
- (id)actionIdentifier;
- (id)footerButtons;
- (id)initWithFocusConfigurationAction:(id)arg1;
- (id)initWithFocusConfigurationActionIdentifier:(id)arg1 action:(id)arg2;
- (id)initWithFocusConfigurationActionIdentifier:(id)arg1 action:(id)arg2 suggestionContext:(id)arg3;
- (id)initWithFocusConfigurationActionIdentifier:(id)arg1 action:(id)arg2 suggestionContext:(id)arg3 footerButtons:(id)arg4;
- (id)initWithFocusConfigurationActionIdentifier:(id)arg1 action:(id)arg2 suggestionContext:(id)arg3 footerButtons:(id)arg4 showsEnablementButton:(bool)arg5 isEnabled:(bool)arg6;
- (bool)isEnabled;
- (bool)showsEnablementButton;
- (id)suggestionContext;

@end
