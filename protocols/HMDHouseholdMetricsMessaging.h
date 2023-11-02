
@protocol HMDHouseholdMetricsMessaging

@required

- (void)deregisterForMessage:(NSString *)arg1;
- (void)registerForMessage:(void *)arg1 messageHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, NSDictionary *, id*, void*
- (void)sendMessage:(void *)arg1 toDevice:(void *)arg2 withPayload:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, HMDDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*

@end
