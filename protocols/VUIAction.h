
@protocol VUIAction <NSObject>

@required

- (void)performWithTargetResponder:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UIResponder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (bool)canPerformNow;

@end
