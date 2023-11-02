
@protocol VSSubscriptionServiceProtocol <NSObject>

@required

- (void)fetchActiveSubscriptionsWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)registerSubscription:(VSSubscription *)arg1;
- (void)removeSubscriptions:(NSArray *)arg1;

@end
