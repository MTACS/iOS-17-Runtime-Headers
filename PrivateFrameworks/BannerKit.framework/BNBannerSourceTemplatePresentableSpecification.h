
@interface BNBannerSourceTemplatePresentableSpecification : BNBannerSourcePresentableSpecification <BNTemplateContentProvidingSpecifying> {
    <BNTemplateViewProviding> * _leadingTemplateViewProvider;
    NSString * _presentableAccessibilityIdentifier;
    <BNTemplateItemProviding> * _primaryTemplateItemProvider;
    <BNTemplateItemProviding> * _secondaryTemplateItemProvider;
    <BNTemplateViewProviding> * _trailingTemplateViewProvider;
}

@property (nonatomic, readonly) long long contentBehavior;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentOutsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BNTemplateViewProviding> *leadingTemplateViewProvider;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, copy) NSString *presentableAccessibilityIdentifier;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic, retain) <BNTemplateItemProviding> *primaryTemplateItemProvider;
@property (nonatomic, readonly) bool providesTemplateContent;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, retain) <BNTemplateItemProviding> *secondaryTemplateItemProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BNTemplateViewProviding> *trailingTemplateViewProvider;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniquePresentableIdentifier;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)leadingTemplateViewProvider;
- (id)presentableAccessibilityIdentifier;
- (id)primaryTemplateItemProvider;
- (bool)providesTemplateContent;
- (id)secondaryTemplateItemProvider;
- (void)setLeadingTemplateViewProvider:(id)arg1;
- (void)setPresentableAccessibilityIdentifier:(id)arg1;
- (void)setPrimaryTemplateItemProvider:(id)arg1;
- (void)setSecondaryTemplateItemProvider:(id)arg1;
- (void)setTrailingTemplateViewProvider:(id)arg1;
- (id)trailingTemplateViewProvider;

@end
