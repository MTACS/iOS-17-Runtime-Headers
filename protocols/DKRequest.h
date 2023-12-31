
@protocol DKRequest <DKRequestExtensionHandler>

@required

+ (<DKRequest> *)requestWithExtensionAttributes:(id <DKExtensionAttributes>)arg1;

- (void)beginWithPayload:(id <NSSecureCoding>)arg1;
- (void)cancel;
- (<NSCopying> *)connectWithError:(id*)arg1;
- (id)context;
- (<DKRequestDelegate> *)delegate;
- (id)hostServicesDelegate;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id <DKRequestDelegate>)arg1;
- (void)setHostServicesDelegate:(id)arg1;
- (void)setNotAllowListedWithContactMessage:(NSString *)arg1;

@end
