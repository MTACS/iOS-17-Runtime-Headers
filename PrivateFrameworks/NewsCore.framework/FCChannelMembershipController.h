
@interface FCChannelMembershipController : NSObject {
    FCChannelMembershipRecordSource * _recordSource;
}

@property (nonatomic, readonly) FCChannelMembershipRecordSource *recordSource;

- (void).cxx_destruct;
- (id)cachedChannelMembershipsForIDs:(id)arg1;
- (id)channelMembershipsFromHeldRecords:(id)arg1;
- (void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithChannelMembershipRecordSource:(id)arg1;
- (id)recordSource;

@end
