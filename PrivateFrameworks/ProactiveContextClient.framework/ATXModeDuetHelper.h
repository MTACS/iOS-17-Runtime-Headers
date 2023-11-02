
@interface ATXModeDuetHelper : NSObject

- (id)_duetStreamShim;
- (id)_updateModeStreamEndDates:(id)arg1 to:(id)arg2;
- (id)modeStreamFrom:(id)arg1 to:(id)arg2 ascending:(bool)arg3 limit:(unsigned long long)arg4;
- (id)modeStreamFrom:(id)arg1 to:(id)arg2 limit:(unsigned long long)arg3;

@end
