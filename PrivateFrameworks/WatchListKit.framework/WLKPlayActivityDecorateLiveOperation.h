
@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation {
    NSString * _channelID;
    NSString * _serviceID;
}

@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly, copy) NSString *serviceID;

- (void).cxx_destruct;
- (id)channelID;
- (id)initWithChannelID:(id)arg1 serviceID:(id)arg2;
- (id)serviceID;

@end
