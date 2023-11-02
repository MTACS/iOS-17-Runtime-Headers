
@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDeliveringDelegate> {
    UIApplication * _application;
    id  _handlerForIntent;
}

@property (nonatomic, retain) UIApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)application;
- (void)executeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithApplication:(id)arg1;
- (void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setApplication:(id)arg1;

@end
