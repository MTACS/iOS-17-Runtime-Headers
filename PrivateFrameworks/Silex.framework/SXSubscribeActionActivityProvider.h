
@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXActionManager> * _actionManager;
    <SXSubscribeActionHandler> * _handler;
    <SXViewControllerPresenting> * _viewControllerPresenting;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXSubscribeActionHandler> *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXViewControllerPresenting> *viewControllerPresenting;

- (void).cxx_destruct;
- (id)actionManager;
- (id)activityGroupForAction:(id)arg1;
- (id)handler;
- (id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2 actionManager:(id)arg3;
- (id)viewControllerPresenting;

@end
