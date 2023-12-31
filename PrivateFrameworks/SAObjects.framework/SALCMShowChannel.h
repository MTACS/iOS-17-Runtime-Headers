
@interface SALCMShowChannel : SABaseClientBoundCommand

@property (nonatomic, retain) SALCMTvChannel *channel;

+ (id)showChannel;
+ (id)showChannelWithDictionary:(id)arg1 context:(id)arg2;

- (id)channel;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setChannel:(id)arg1;

@end
