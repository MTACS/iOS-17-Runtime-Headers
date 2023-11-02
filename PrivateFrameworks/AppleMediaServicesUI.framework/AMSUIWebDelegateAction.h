
@interface AMSUIWebDelegateAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSDictionary * _delegateData;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *delegateData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_didResolveWithResult:(id)arg1 error:(id)arg2;
- (id)_handleActionObject:(id)arg1;
- (id)_handleResolveActionWithData:(id)arg1;
- (id)_infoWithBuyParams:(id)arg1 additionalInfo:(id)arg2;
- (id)delegateData;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setDelegateData:(id)arg1;

@end
