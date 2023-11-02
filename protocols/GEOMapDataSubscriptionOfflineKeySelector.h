
@protocol GEOMapDataSubscriptionOfflineKeySelector <NSObject>

@required

- (void)determineNextRequestsWithMaximumCount:(void *)arg1 callbackQueue:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)determineTotalCountWithCallbackQueue:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 9: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, NSError *, void*

@end
