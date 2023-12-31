
@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation {
    NSString * _channelID;
    NSString * _externalContentID;
}

@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly, copy) NSString *externalContentID;

- (void).cxx_destruct;
- (id)channelID;
- (id)externalContentID;
- (id)initWithChannelID:(id)arg1 externalContentID:(id)arg2;

@end
