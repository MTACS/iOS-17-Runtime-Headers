
@protocol ATXLocationManagerStateStore <NSObject>

@required

- (double)cacheExpirationInterval;
- (void)clear;
- (ATXLocationManagerState *)loadNowOrCallLater:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXLocationManagerState *, void*
- (void)setCacheExpirationInterval:(double)arg1;
- (void)write:(ATXLocationManagerState *)arg1;

@end
