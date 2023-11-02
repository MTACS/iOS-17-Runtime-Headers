
@protocol IMRequestEncoding <NSObject>

@required

- (bool)personalizeRequests;
- (void)prepareRequest:(void *)arg1 account:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURLRequest *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSURLRequest *, NSError *, void*
- (void)prepareRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSURLRequest *, NSError *, void*
- (void)setPersonalizeRequests:(bool)arg1;

@end
