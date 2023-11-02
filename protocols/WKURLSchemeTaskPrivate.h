
@protocol WKURLSchemeTaskPrivate <WKURLSchemeTask>

@required

- (void)_didPerformRedirection:(NSURLResponse *)arg1 newRequest:(NSURLRequest *)arg2;
- (WKFrameInfo *)_frame;
- (bool)_requestOnlyIfCached;
- (void)_willPerformRedirection:(void *)arg1 newRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*

@end
