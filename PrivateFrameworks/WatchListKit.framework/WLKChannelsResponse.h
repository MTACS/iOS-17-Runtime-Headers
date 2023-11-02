
@interface WLKChannelsResponse : NSObject {
    NSDictionary * _channels;
    unsigned long long  _environmentHash;
    NSDate * _expirationDate;
    bool  _filtered;
    NSObject<OS_dispatch_queue> * _modificationQueue;
    NSArray * _orderedChannels;
}

@property (nonatomic, readonly) NSDictionary *channels;
@property (nonatomic) unsigned long long environmentHash;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) bool filtered;
@property (nonatomic, readonly) NSArray *orderedChannels;

+ (id)parseChannelsFromPayload:(id)arg1;

- (void).cxx_destruct;
- (id)channels;
- (unsigned long long)environmentHash;
- (id)expirationDate;
- (bool)filtered;
- (id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 filtered:(bool)arg4;
- (bool)isValidForFiltered:(bool)arg1;
- (void)modifyConsentStatusForChannelEntry:(id)arg1 consented:(bool)arg2;
- (id)orderedChannels;
- (void)setChannels:(id)arg1;
- (void)setEnvironmentHash:(unsigned long long)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFiltered:(bool)arg1;
- (void)setOrderedChannels:(id)arg1;

@end
