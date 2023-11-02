
@interface WFFocusConfigurationContextualActionOptions : NSObject {
    WFContextualAction * _contextualAction;
    bool  _enabled;
    NSArray * _footerButtons;
    WFColor * _mastheadTintColor;
    bool  _showsEnablementButton;
}

@property (nonatomic, readonly) WFContextualAction *contextualAction;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSArray *footerButtons;
@property (nonatomic, readonly, copy) WFColor *mastheadTintColor;
@property (nonatomic, readonly) bool showsEnablementButton;

- (void).cxx_destruct;
- (id)contextualAction;
- (id)footerButtons;
- (id)initWithContextualAction:(id)arg1;
- (id)initWithContextualAction:(id)arg1 footerButtons:(id)arg2;
- (id)initWithContextualAction:(id)arg1 footerButtons:(id)arg2 showsEnablementButton:(bool)arg3 isEnabled:(bool)arg4;
- (id)initWithContextualAction:(id)arg1 footerButtons:(id)arg2 showsEnablementButton:(bool)arg3 isEnabled:(bool)arg4 mastheadTintColor:(id)arg5;
- (bool)isEnabled;
- (id)mastheadTintColor;
- (bool)showsEnablementButton;

@end
