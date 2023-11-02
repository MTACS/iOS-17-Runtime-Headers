
@interface AMSUIWebOpenFamilyCircleAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSString * _clientName;
}

@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientName;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setClientName:(id)arg1;

@end
