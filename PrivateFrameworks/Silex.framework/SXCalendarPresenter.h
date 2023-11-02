
@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter> {
    SXEventStoreProvider * _eventStoreProvider;
    <SXViewControllerPresenting> * _viewControllerPresenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXEventStoreProvider *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXViewControllerPresenting> *viewControllerPresenting;

- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)eventStoreProvider;
- (id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2;
- (void)presentCalendarEvent:(id)arg1;
- (id)viewControllerPresenting;

@end
