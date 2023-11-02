
@protocol HMELastEventStoreWriteHandle <NSObject>

@required

- (void)resetTopic:(NSString *)arg1;
- (void)writer:(id <HMELastEventStoreWriter>)arg1 saveEvent:(HMEEvent *)arg2 topic:(NSString *)arg3;
- (bool)writer:(id <HMELastEventStoreWriter>)arg1 saveEventIfAllowed:(HMEEvent *)arg2 topic:(NSString *)arg3;
- (bool)writer:(id <HMELastEventStoreWriter>)arg1 saveEventIfDifferent:(HMEEvent *)arg2 topic:(NSString *)arg3;

@end
