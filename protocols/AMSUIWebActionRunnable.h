
@protocol AMSUIWebActionRunnable <NSObject>

@required

- (AMSUIWebClientContext *)context;
- (id)initWithJSObject:(NSDictionary *)arg1 context:(AMSUIWebClientContext *)arg2;
- (AMSPromise *)runAction;

@end
