
@interface SXCloseActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXCloseActionHandler> * _handler;
    <SXViewControllerPresenting> * _viewControllerPresenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;

@end
