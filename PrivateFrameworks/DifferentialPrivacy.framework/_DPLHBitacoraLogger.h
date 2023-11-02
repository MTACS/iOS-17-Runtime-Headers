
@interface _DPLHBitacoraLogger : NSObject

+ (id)bitacoraDprivacydEventWithEventPhase:(int)arg1 uuid:(id)arg2 succeeded:(bool)arg3 errorCode:(int)arg4 errorMessage:(id)arg5;
+ (bool)donateEventToBitacoraForKey:(id)arg1 eventPhase:(int)arg2 uuid:(id)arg3 succeeded:(bool)arg4 errorCode:(int)arg5 errorMessage:(id)arg6 telemetryAllowed:(bool)arg7;
+ (id)trialIdentifiersForKey:(id)arg1;

@end
