
@protocol DTXConnectionRemoteReceiveQueueCalls <DTXAllowedRPC>

@required

- (void)_channelCanceled:(unsigned int)arg1;
- (void)_notifyCompressionHint:(unsigned int)arg1 forChannelCode:(unsigned int)arg2;
- (void)_notifyOfPublishedCapabilities:(NSDictionary *)arg1;
- (void)_requestChannelWithCode:(unsigned int)arg1 identifier:(NSString *)arg2;
- (void)_setTracerState:(unsigned int)arg1;

@end
