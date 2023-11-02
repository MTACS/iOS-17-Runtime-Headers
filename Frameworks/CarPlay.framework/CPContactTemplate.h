
@interface CPContactTemplate : CPTemplate <CPBarButtonProviding, CPEntityClientTemplateDelegate, CPEntityProviding, NSSecureCoding> {
    CPContact * _contact;
}

@property (nonatomic, retain) CPBarButton *backButton;
@property (nonatomic, retain) CPContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (bool)control:(id)arg1 setEnabled:(bool)arg2;
- (bool)control:(id)arg1 setSelected:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (void)performUpdate;
- (void)setContact:(id)arg1;

@end
