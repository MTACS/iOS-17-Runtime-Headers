
@protocol MFErrorController <MFResettable>

@required

- (void)reportCriticalError:(NSError *)arg1 forItem:(id <MFPlayerItem>)arg2;
- (void)resolveError:(void *)arg1 forItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSError *, <MFPlayerItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
