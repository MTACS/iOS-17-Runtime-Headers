
@interface SBBannerSourceListenerTemplatePresentableViewController : BNBannerSourceListenerPresentableViewController <BNBannerSourceListenerTemplatePresentable> {
    PLPillView * _pillView;
    <BNTemplateContentProvidingSpecifying> * _templateContentProvidingSpecification;
}

@property (nonatomic, readonly) int bannerAppearState;
@property (getter=isContentHosted, nonatomic, readonly) bool contentHosted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNBannerSourceListenerPresentableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BNPresentable> *presentable;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (getter=isReady, nonatomic, readonly) bool ready;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isTemplateContent, nonatomic, readonly) bool templateContent;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniquePresentableIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_handleButtonPrimaryAction:(id)arg1 forEvent:(long long)arg2;
- (void)_handleTapOnPillView:(id)arg1;
- (id)_pillView;
- (id)_templateContentProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (id)initWithSpecification:(id)arg1 serviceDomain:(id)arg2 readyCompletion:(id /* block */)arg3;
- (bool)isTemplateContent;
- (id)leadingTemplateViewProvider;
- (id)primaryTemplateItemProvider;
- (bool)providesTemplateContent;
- (id)secondaryTemplateItemProvider;
- (id)trailingTemplateViewProvider;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
