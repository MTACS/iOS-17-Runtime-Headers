
@interface SALCMTvChannel : SADomainObject

@property (nonatomic, copy) NSString *callSign;
@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSURL *streamUrl;

+ (id)tvChannel;
+ (id)tvChannelWithDictionary:(id)arg1 context:(id)arg2;

- (id)callSign;
- (id)channelIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (void)setCallSign:(id)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStreamUrl:(id)arg1;
- (id)streamUrl;

@end
