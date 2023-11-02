
@interface CPGridTemplate : CPTemplate <CPBarButtonProviding, CPGridTemplateClientDelegate> {
    NSArray * _gridButtons;
    NSString * _title;
}

@property (nonatomic, retain) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gridButtons;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_prepareButtons:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gridButtons;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 gridButtons:(id)arg2;
- (void)performUpdate;
- (id)title;
- (void)updateGridButtons:(id)arg1;
- (void)updateTitle:(id)arg1;

@end
