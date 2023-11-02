
@interface SBSystemApertureTelemetryEmitter : NSObject

+ (void)_emitCoreAnalyticsTelemetryIfNecessaryWithUpdatedContext:(id)arg1 previousContext:(id)arg2;
+ (void)_emitPowerLogIfNecessaryWithUpdatedContext:(id)arg1 previousContext:(id)arg2;
+ (void)logTelemetryForInteractionLongPress:(bool)arg1 clientIdentifier:(id)arg2 elementIdentifier:(id)arg3;
+ (void)logTelemetryForInteractionPanGesture:(long long)arg1 handled:(bool)arg2 clientIdentifier:(id)arg3 elementIdentifier:(id)arg4;
+ (void)logTelemetryForInteractionTap:(bool)arg1 clientIdentifier:(id)arg2 elementIdentifier:(id)arg3;
+ (void)logTelemetryForUpdatedContext:(id)arg1;
+ (id)stringBySanitizingNil:(id)arg1;

@end
