
@protocol CUAuthenticatableClient <NSObject>

@required

- (id /* block */)authCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (id /* block */)authPromptHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, int, unsigned int, int, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (NSString *)password;
- (int)passwordType;
- (void)setAuthCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAuthPromptHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, int, void*
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setPassword:(NSString *)arg1;
- (void)setPasswordType:(int)arg1;
- (void)tryPassword:(NSString *)arg1;

@end
