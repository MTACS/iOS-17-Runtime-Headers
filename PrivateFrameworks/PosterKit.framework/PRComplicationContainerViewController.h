
@interface PRComplicationContainerViewController : UIViewController <BSInvalidatable, PRGraphicComplicationContainerViewControllerDelegate, PRInlineComplicationContainerViewControllerDelegate, PRWidgetGridViewControllerDelegate> {
    <PRComplicationContainerViewControllerDelegate> * _delegate;
    long long  _focusedElement;
    PRGraphicComplicationContainerViewController * _graphicComplicationContainerViewController;
    PRInlineComplicationContainerViewController * _inlineComplicationContainerViewController;
    PRWidgetGridViewController * _sidebarWidgetGridViewController;
    bool  _usesEditingLayout;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (nonatomic, retain) NSArray *complicationDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRComplicationContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long focusedElement;
@property (nonatomic, retain) PRGraphicComplicationContainerViewController *graphicComplicationContainerViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRInlineComplicationContainerViewController *inlineComplicationContainerViewController;
@property (nonatomic, retain) PRComplicationDescriptor *inlineComplicationDescriptor;
@property (nonatomic, retain) NSArray *sidebarComplicationDescriptors;
@property (nonatomic, retain) NSDictionary *sidebarIconLayout;
@property (nonatomic, retain) PRWidgetGridViewController *sidebarWidgetGridViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool usesEditingLayout;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (void)_updateFocusedWithAnimationSettings:(id)arg1;
- (void)cancelPrewarmComplicationDescriptor:(id)arg1;
- (id)complicationDescriptors;
- (id)delegate;
- (long long)focusedElement;
- (id)graphicComplicationContainerViewController;
- (bool)graphicComplicationContainerViewController:(id)arg1 canAddComplication:(id)arg2;
- (void)graphicComplicationContainerViewController:(id)arg1 didCancelDropOperationForComplication:(id)arg2;
- (void)graphicComplicationContainerViewController:(id)arg1 didDropComplication:(id)arg2 atIndex:(long long)arg3;
- (void)graphicComplicationContainerViewController:(id)arg1 didRemoveComplication:(id)arg2;
- (void)graphicComplicationContainerViewController:(id)arg1 didTapComplication:(id)arg2;
- (void)graphicComplicationContainerViewControllerDidTapAdd:(id)arg1;
- (id)initWithInlineComplicationDescriptor:(id)arg1 graphicComplicationDescriptors:(id)arg2 sidebarComplicationDescriptors:(id)arg3 sidebarIconLayout:(id)arg4;
- (id)inlineComplicationContainerViewController;
- (void)inlineComplicationContainerViewController:(id)arg1 didEditComplication:(id)arg2;
- (void)inlineComplicationContainerViewControllerDidTapAdd:(id)arg1;
- (id)inlineComplicationDescriptor;
- (void)invalidate;
- (void)loadView;
- (void)prewarmComplicationDescriptor:(id)arg1;
- (void)setComplicationDescriptors:(id)arg1;
- (void)setComplicationDescriptors:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFocusedElement:(long long)arg1;
- (void)setFocusedElement:(long long)arg1 animated:(bool)arg2;
- (void)setFocusedElement:(long long)arg1 animationSettings:(id)arg2;
- (void)setGraphicComplicationContainerViewController:(id)arg1;
- (void)setInlineComplicationContainerViewController:(id)arg1;
- (void)setInlineComplicationDescriptor:(id)arg1;
- (void)setSidebarComplicationDescriptors:(id)arg1;
- (void)setSidebarComplicationDescriptors:(id)arg1 animated:(bool)arg2;
- (void)setSidebarIconLayout:(id)arg1;
- (void)setSidebarWidgetGridViewController:(id)arg1;
- (void)setUsesEditingLayout:(bool)arg1;
- (void)setUsesEditingLayout:(bool)arg1 animated:(bool)arg2;
- (void)setUsesEditingLayout:(bool)arg1 animationSettings:(id)arg2;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)sidebarComplicationDescriptors;
- (id)sidebarIconLayout;
- (id)sidebarWidgetGridViewController;
- (bool)usesEditingLayout;
- (id)vibrancyConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)widgetGridViewController:(id)arg1 didAddWidget:(id)arg2 atIndex:(long long)arg3;
- (void)widgetGridViewController:(id)arg1 didRemoveComplication:(id)arg2;
- (void)widgetGridViewController:(id)arg1 didRequestLaunchForComplicationDescriptor:(id)arg2 withAction:(id)arg3;
- (void)widgetGridViewController:(id)arg1 didUpdateIconLayout:(id)arg2;
- (void)widgetGridViewControllerDidTapBackground:(id)arg1;

@end
