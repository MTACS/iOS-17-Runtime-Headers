
@protocol AAUIGenericTermsRemoteUIDelegate <NSObject>

@required

- (void)genericTermsRemoteUI:(AAUIGenericTermsRemoteUI *)arg1 didFinishWithSuccess:(bool)arg2;

@optional

- (void)genericTermsRemoteUI:(AAUIGenericTermsRemoteUI *)arg1 acceptedTermsInfo:(NSDictionary *)arg2;

@end
