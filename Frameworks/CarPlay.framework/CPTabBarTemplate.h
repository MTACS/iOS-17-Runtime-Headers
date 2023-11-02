
@interface CPTabBarTemplate : CPTemplate <CPTabBarClientTemplateDelegate> {
    <CPTabBarTemplateDelegate> * _delegate;
    unsigned long long  _indexOfSelectedTab;
    CPInterfaceController * _interfaceController;
    <CPTabBarTemplateProviding> * _templateProvider;
    NSArray * _templates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPTabBarTemplateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexOfSelectedTab;
@property (nonatomic) CPInterfaceController *interfaceController;
@property (nonatomic, readonly) CPTemplate *selectedTemplate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPTabBarTemplateProviding> *templateProvider;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, readonly) NSArray *templates;

+ (long long)maximumTabCount;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (unsigned long long)indexOfSelectedTab;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplates:(id)arg1;
- (id)interfaceController;
- (id)leadingNavigationBarButtons;
- (void)selectTemplate:(id)arg1;
- (void)selectTemplateAtIndex:(long long)arg1;
- (id)selectedTemplate;
- (void)setDelegate:(id)arg1;
- (void)setIndexOfSelectedTab:(unsigned long long)arg1;
- (void)setInterfaceController:(id)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTemplateProvider:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)templateProvider;
- (id)templates;
- (id)trailingNavigationBarButtons;
- (void)updateTemplates:(id)arg1;
- (void)validateTemplates:(id)arg1;

@end
