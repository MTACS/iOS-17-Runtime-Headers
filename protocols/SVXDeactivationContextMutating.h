
@protocol SVXDeactivationContextMutating <NSObject>

@required

- (void)setButtonEvent:(SVXButtonEvent *)arg1;
- (void)setClientInfo:(SVXClientInfo *)arg1;
- (void)setOptions:(SVXDeactivationOptions *)arg1;
- (void)setSource:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;

@end
