
@interface AMSUIWebCallbackAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSDictionary * _data;
    NSString * _service;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (nonatomic, retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (id)service;
- (void)setData:(id)arg1;
- (void)setService:(id)arg1;

@end
