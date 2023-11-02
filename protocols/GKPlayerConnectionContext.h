
@protocol GKPlayerConnectionContext

@required

- (bool)connected;
- (bool)hasInitRelayInfo;
- (bool)hasUpdateRelayInfo;
- (NSDictionary *)info;
- (bool)relayInitiated;
- (void)setHasInitRelayInfo:(bool)arg1;
- (void)setHasUpdateRelayInfo:(bool)arg1;
- (void)setRelayInitiated:(bool)arg1;

@end
