
@interface PRGraphicComplicationContainerViewController : UIViewController <BSInvalidatable, PRComplicationWrapperViewControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate> {
    <UIDropSession> * _activeDropSession;
    NSArray * _complicationDescriptors;
    <PRGraphicComplicationContainerViewControllerDelegate> * _delegate;
    bool  _focused;
    unsigned long long  _lastProposedDropOperation;
    long long  _layoutStyle;
    PRComplicationWrapperViewController * _prewarmedComplicationWrapperViewController;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    NSMutableDictionary * _widgetViewControllersByUniqueIdentifier;
}

@property (nonatomic, retain) <UIDropSession> *activeDropSession;
@property (nonatomic, retain) NSArray *complicationDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRGraphicComplicationContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFocused, nonatomic) bool focused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (void)_addDescriptor:(id)arg1 atIndex:(long long)arg2 animated:(bool)arg3;
- (void)_addHostViewControllerForDescriptor:(id)arg1 animated:(bool)arg2;
- (id)_complicationDescriptorForDragItem:(id)arg1;
- (id)_complicationLayout;
- (id)_hostViewControllerForComplicationDescriptor:(id)arg1;
- (void)_removeDescriptor:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_updateComplicationLayoutAnimated:(bool)arg1;
- (id)activeDropSession;
- (void)cancelPrewarmComplicationDescriptor:(id)arg1;
- (id)complicationDescriptors;
- (void)complicationWrapperViewControllerDidTapComplication:(id)arg1;
- (void)complicationWrapperViewControllerDidTapRemove:(id)arg1;
- (id)delegate;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithComplicationDescriptors:(id)arg1 layoutStyle:(long long)arg2;
- (void)invalidate;
- (bool)isFocused;
- (void)loadView;
- (void)prewarmComplicationDescriptor:(id)arg1;
- (void)setActiveDropSession:(id)arg1;
- (void)setComplicationDescriptors:(id)arg1;
- (void)setComplicationDescriptors:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFocused:(bool)arg1;
- (void)setFocused:(bool)arg1 animated:(bool)arg2;
- (void)setFocused:(bool)arg1 animationSettings:(id)arg2;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)vibrancyConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
