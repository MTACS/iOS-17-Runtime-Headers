
@protocol AuthenticatorService <NSObject>

@required

- (void)startWithConfiguration:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: LAAuthenticatorServiceConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
