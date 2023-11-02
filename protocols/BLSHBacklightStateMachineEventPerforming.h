
@protocol BLSHBacklightStateMachineEventPerforming <BLSHBacklightHostObservable>

@required

- (unsigned long long)backlightStateChangeTimestamp;
- (NSString *)backlightStateDescription;
- (bool)isTransitioning;
- (void)performEvent:(BLSBacklightChangeEvent *)arg1;
- (<BLSHBacklightStateMachineEventPerformerDelegate> *)performerDelegate;
- (void)prewarmEvent:(BLSBacklightChangeEvent *)arg1;
- (bool)safeToUnblank;
- (void)setPerformerDelegate:(id <BLSHBacklightStateMachineEventPerformerDelegate>)arg1;
- (void)setSafeToUnblank:(bool)arg1;

@end
