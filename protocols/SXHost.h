
@protocol SXHost <NSObject>

@required

- (bool)active;
- (bool)canOpenURL:(NSURL *)arg1;
- (void)openURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
