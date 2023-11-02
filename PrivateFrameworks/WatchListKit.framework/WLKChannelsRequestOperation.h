
@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation {
    NSString * _caller;
    WLKChannelsResponse * _channelsResponse;
    bool  _filtered;
}

@property (nonatomic, copy) NSString *caller;
@property (nonatomic, retain) WLKChannelsResponse *channelsResponse;
@property (nonatomic) bool filtered;

- (void).cxx_destruct;
- (id)caller;
- (id)channelsResponse;
- (bool)filtered;
- (id)initWithCaller:(id)arg1;
- (id)initWithCaller:(id)arg1 isFilteredByUserChannels:(bool)arg2;
- (void)processResponse;
- (void)setCaller:(id)arg1;
- (void)setChannelsResponse:(id)arg1;
- (void)setFiltered:(bool)arg1;

@end
