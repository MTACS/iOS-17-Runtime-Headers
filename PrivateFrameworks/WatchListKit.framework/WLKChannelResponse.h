
@interface WLKChannelResponse : NSObject {
    NSString * _channelLink;
    NSString * _channelTitle;
    unsigned long long  _environmentHash;
    NSDate * _expirationDate;
}

@property (nonatomic, retain) NSString *channelLink;
@property (nonatomic, retain) NSString *channelTitle;
@property (nonatomic) unsigned long long environmentHash;
@property (nonatomic, copy) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)channelLink;
- (id)channelTitle;
- (unsigned long long)environmentHash;
- (id)expirationDate;
- (id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (void)setChannelLink:(id)arg1;
- (void)setChannelTitle:(id)arg1;
- (void)setEnvironmentHash:(unsigned long long)arg1;
- (void)setExpirationDate:(id)arg1;

@end
