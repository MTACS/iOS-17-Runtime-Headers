
@protocol BLSHBacklightHostTelemetryDelegate <NSObject>

@required

- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didAcquireSystemActivityWithError:(NSError *)arg2 isActive:(bool)arg3 details:(id <SWSystemActivityAcquisitionDetails>)arg4 forEvent:(BLSBacklightChangeEvent *)arg5;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 hadExistingSystemActivityForEvent:(BLSBacklightChangeEvent *)arg2;

@optional

- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didCompleteUpdateToFlipbookState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didCompleteUpdateToFlipbookState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didCompleteUpdateToState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didUpdateDisplayForState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didUpdateDisplayForState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didUpdateVisualContentsToBeginTransitionToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 didUpdateVisualContentsToBeginTransitionToState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 willPerformEvent:(BLSBacklightChangeEvent *)arg2;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 willTransitionToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)backlightTelemetrySource:(id <BLSHBacklightHostTelemetrySource>)arg1 willUpdateDisplayForState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;

@end
