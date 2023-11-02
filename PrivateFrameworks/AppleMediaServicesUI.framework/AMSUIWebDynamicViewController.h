
@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController <AMSUIDynamicViewControllerDelegate, AMSUIWebPagePresenter> {
    AMSUIWebClientContext * _context;
}

@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (id)initWithContext:(id)arg1 URL:(id)arg2;
- (void)setContext:(id)arg1;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
