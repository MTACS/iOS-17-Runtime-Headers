
@protocol SKAAccountProviding <NSObject>

@required

- (NSString *)presenceJwtTokenForPrimaryAccountWithError:(id*)arg1;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)statusJwtTokenForPrimaryAccountWithError:(id*)arg1;

@end
