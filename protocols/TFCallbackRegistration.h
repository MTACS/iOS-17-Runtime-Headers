
@protocol TFCallbackRegistration <NSObject>

@required

- (void)whenResolvingClass:(void *)arg1 scope:(void *)arg2 callbackBlock:(void *)arg3; // needs 3 arg types, found 9: Class, TFCallbackScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, <TFResolver> *, void*
- (void)whenResolvingProtocol:(void *)arg1 scope:(void *)arg2 callbackBlock:(void *)arg3; // needs 3 arg types, found 9: Protocol *, TFCallbackScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, <TFResolver> *, void*

@end
