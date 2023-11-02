
@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(id /* block */)arg4;

@end
