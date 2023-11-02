
@protocol MTSecureKeyRequestHandler

@required

- (void)loadCertificateDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTContentKeyResponse *, void*
- (void)loadKeyDataFor:(void *)arg1 account:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
