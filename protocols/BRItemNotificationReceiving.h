
@protocol BRItemNotificationReceiving <BRCancellable>

@required

- (void)receiveProgressUpdates:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)receiveUpdates:(void *)arg1 logicalExtensions:(void *)arg2 physicalExtensions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
