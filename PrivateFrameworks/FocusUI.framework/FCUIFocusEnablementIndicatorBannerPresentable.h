
@interface FCUIFocusEnablementIndicatorBannerPresentable : NSObject <BNPresentable, BNPresentableObservable, BNTemplateContentProviding> {
    <FCActivityDescribing> * _activityDescription;
    bool  _activityEnabled;
    NSHashTable * _observers;
    NSString * _requestIdentifier;
    NSString * _requesterIdentifier;
}

@property (nonatomic, readonly, copy) <FCActivityDescribing> *activityDescription;
@property (getter=isActivityEnabled, nonatomic, readonly) bool activityEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BNTemplateViewProviding> *leadingTemplateViewProvider;
@property (nonatomic, readonly, copy) NSString *presentableAccessibilityIdentifier;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly) <BNTemplateItemProviding> *primaryTemplateItemProvider;
@property (nonatomic, readonly) bool providesTemplateContent;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) <BNTemplateItemProviding> *secondaryTemplateItemProvider;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) <BNTemplateViewProviding> *trailingTemplateViewProvider;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)accessibilityIdentifierForActivityDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (id)activityDescription;
- (void)addPresentableObserver:(id)arg1;
- (void)handleTemplateContentEvent:(long long)arg1;
- (id)initWithActivityDescription:(id)arg1 requesterIdentifier:(id)arg2 enabled:(bool)arg3;
- (bool)isActivityEnabled;
- (id)leadingTemplateViewProvider;
- (id)presentableAccessibilityIdentifier;
- (long long)presentableBehavior;
- (id)presentableDescription;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)primaryTemplateItemProvider;
- (bool)providesTemplateContent;
- (void)removePresentableObserver:(id)arg1;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (id)secondaryTemplateItemProvider;
- (id)trailingTemplateViewProvider;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;

@end
