
@interface CPInformationTemplate : CPTemplate <CPBarButtonProviding, CPTemplateDelegate, NSSecureCoding> {
    NSArray * _actions;
    NSArray * _items;
    long long  _layout;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) long long layout;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sanitizeButtons:(id)arg1;
- (id)_sanitizeItems:(id)arg1;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 layout:(long long)arg2 items:(id)arg3 actions:(id)arg4;
- (id)items;
- (long long)layout;
- (void)performUpdate;
- (void)setActions:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateTemplatePropertiesFromTemplate:(id)arg1;

@end
