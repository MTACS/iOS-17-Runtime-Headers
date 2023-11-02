
@interface WLKChannelLookupOperation : WLKUTSNetworkRequestOperation {
    WLKChannelResponse * _channelResponse;
}

@property (nonatomic, retain) WLKChannelResponse *channelResponse;

- (void).cxx_destruct;
- (id)channelResponse;
- (id)initWithAdamId:(id)arg1;
- (void)processResponse;
- (void)setChannelResponse:(id)arg1;

@end
