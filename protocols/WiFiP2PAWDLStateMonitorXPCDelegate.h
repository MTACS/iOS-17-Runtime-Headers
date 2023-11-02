
@protocol WiFiP2PAWDLStateMonitorXPCDelegate <NSObject>

@required

- (void)availabilityUpdatedForService:(NSString *)arg1 error:(NSError *)arg2;
- (void)channelSequenceChangedEvent:(NSArray *)arg1;
- (void)softAPChannelChangedEvent:(bool)arg1 channelNumber:(unsigned short)arg2;
- (void)threadCoexistenceEvent:(NSDictionary *)arg1;
- (void)updatedAWDLState:(WiFiP2PAWDLState *)arg1;
- (void)updatedRealtimeMode:(bool)arg1;
- (void)updatedStatistics;

@end
