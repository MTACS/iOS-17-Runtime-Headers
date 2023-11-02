
@protocol ARSessionMetricsReporting <NSObject>

@required

- (void)postDarwinNotification:(NSString *)arg1;
- (void)sendEvent:(void *)arg1 dictionary:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*

@end
