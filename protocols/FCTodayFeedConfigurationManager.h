
@protocol FCTodayFeedConfigurationManager <NSObject>

@required

- (void)fetchTodayFeedConfigurationIfNeededWithCompletionQueue:(void *)arg1 feedType:(void *)arg2 formatVersion:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSObject<OS_dispatch_queue> *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSData *)todayFeedConfigurationData;

@end
