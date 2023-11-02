
@interface _CDComplications : NSObject {
    NSDictionary * _activeComplications;
    NSObject<OS_dispatch_queue> * complicationQueue;
    int  deviceChangeToken;
    NSMutableDictionary * meterTokens;
    NSUserDefaults * pushLimits;
}

@property (copy) NSDictionary *activeComplications;

+ (id)initializeForAdmissionChecking:(bool)arg1;
+ (id)sharedComplication;

- (void).cxx_destruct;
- (id)activeComplications;
- (bool)admissionCheckOnComplication:(id)arg1 forRemote:(bool)arg2 error:(id*)arg3;
- (id)initForComplications;
- (bool)isBundleActiveComplication:(id)arg1;
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)readOutActiveComplications;
- (int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1;
- (void)setActiveComplications:(id)arg1;
- (bool)watchIsCharging;

@end
