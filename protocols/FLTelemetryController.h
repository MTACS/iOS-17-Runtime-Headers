
@protocol FLTelemetryController <NSObject>

@required

- (void)captureActionForItem:(FLFollowUpItem *)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)captureCurrentState:(NSArray *)arg1;
- (void)captureItemAddition:(FLFollowUpItem *)arg1;
- (void)captureItemRemoval:(FLFollowUpItem *)arg1;
- (void)captureItemView:(FLFollowUpItem *)arg1;
- (void)sendAnalyticsForEvent:(void *)arg1 builder:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*

@end
