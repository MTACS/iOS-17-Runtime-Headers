
@protocol ICSystemPaperExtensionHost <NSObject>

@required

- (oneway void)dismissViewControllerCancelled:(bool)arg1;
- (oneway void)openURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
