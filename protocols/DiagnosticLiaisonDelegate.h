
@protocol DiagnosticLiaisonDelegate <NSObject>

@required

- (void)remoteTriggerDeliveryUpdateEvent:(NSDictionary *)arg1;
- (void)requestSnapshotWithSignature:(NSDictionary *)arg1 flags:(unsigned long long)arg2 events:(NSArray *)arg3;

@end
