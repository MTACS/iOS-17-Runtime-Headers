
@protocol CUAuthenticatableServer <NSObject>

@required

- (id /* block */)authCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (id /* block */)authHidePasswordHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)authShowPasswordHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, int, NSString *, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (NSString *)password;
- (int)passwordType;
- (void)setAuthCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAuthHidePasswordHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAuthShowPasswordHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, void*
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setPassword:(NSString *)arg1;
- (void)setPasswordType:(int)arg1;

@end
