
@protocol SKAPushManaging <NSObject>

@required

- (void)createChannelWithProtoData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (<SKAPushManagingDelegate> *)delegate;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (void)publishStatus:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSData *)pushToken;
- (void)sendPresenceMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSDate *)serverTime;
- (void)setDelegate:(id <SKAPushManagingDelegate>)arg1;
- (void)subscribeToPresenceChannels:(NSArray *)arg1;
- (void)subscribeToStatusChannels:(NSArray *)arg1;
- (void)subscribedPresenceChannelsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)subscribedStatusChannelsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)switchPresenceFilterToEnabled;
- (void)switchPresenceFilterToNonwaking;
- (void)switchStatusFilterToEnabled;
- (void)switchStatusFilterToNonwaking;
- (void)unsubscribeFromPresenceChannels:(NSArray *)arg1;
- (void)unsubscribeFromStatusChannels:(NSArray *)arg1;

@end
