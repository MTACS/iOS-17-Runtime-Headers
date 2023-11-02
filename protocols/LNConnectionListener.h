
@protocol LNConnectionListener <NSObject>

@required

+ (id)sharedListener;

- (void)handleAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: BSAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSActionResponse *, void*

@end
