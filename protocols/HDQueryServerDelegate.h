
@protocol HDQueryServerDelegate <HDTaskServerDelegate>

@required

- (void)queryServer:(void *)arg1 requestsAuthorizationWithContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDQueryServer *, HDObjectAuthorizationRequestContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)queryServer:(void *)arg1 requestsAuthorizationWithContext:(void *)arg2 promptIfNeeded:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HDQueryServer *, HDObjectAuthorizationRequestContext *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)queryServer:(void *)arg1 shouldStartWithCompletion:(void *)arg2; // needs 2 arg types, found 8: HDQueryServer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)queryServerDidFinish:(HDQueryServer *)arg1;

@end
