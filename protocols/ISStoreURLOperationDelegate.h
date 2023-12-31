
@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional

- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
- (void)operation:(void *)arg1 shouldAuthenticateWithContext:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 9: ISStoreURLOperation *, SSAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SSAuthenticateResponse *, NSError *, void*
- (bool)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;

@end
