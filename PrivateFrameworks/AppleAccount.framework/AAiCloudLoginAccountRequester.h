
@interface AAiCloudLoginAccountRequester : NSObject

+ (id)delegateParamsForAllDelegates;
+ (id)delegateParamsForiCloudOnly;

- (void)loginWithAccount:(id)arg1 forDelegates:(id)arg2 completion:(id /* block */)arg3;

@end
