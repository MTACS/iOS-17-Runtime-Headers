
@protocol XAMAuthorizationProvider <NSObject>

@required

- (<XAMAuthorization> *)authorizationWithError:(id*)arg1;
- (void)requestAuthorizationWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <XAMAuthorization> *, NSError *, void*

@end
