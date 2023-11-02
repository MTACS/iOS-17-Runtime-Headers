
@interface HMDPredicateUtilities : HMFObject <HMFLogging> {
    unsigned long long  _audioAnalysisEventNotificationOptions;
    unsigned long long  _cameraSignificantEvent;
    HMDHome * _home;
    NSString * _logIdentifier;
    unsigned long long  _personFamiliarityOptions;
}

@property unsigned long long audioAnalysisEventNotificationOptions;
@property unsigned long long cameraSignificantEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly, copy) NSString *logIdentifier;
@property unsigned long long personFamiliarityOptions;
@property (readonly) Class superclass;

+ (id)decodePredicateFromData:(id)arg1 error:(id*)arg2;
+ (id)encodePredicate:(id)arg1 error:(id*)arg2;
+ (id)filteredPredicate:(id)arg1 withUserUUIDs:(id)arg2;
+ (id)logCategory;
+ (id)predicateCodingClasses;
+ (id)unarchiveFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_updatePredicate:(id)arg1 staleCharacteristicInCurrentPredicate:(bool*)arg2 accessory:(id)arg3 conditionModified:(bool*)arg4;
- (id)addDeltaToNow:(id)arg1;
- (unsigned long long)audioAnalysisEventNotificationOptions;
- (unsigned long long)cameraSignificantEvent;
- (id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (bool)containsPresenceEvents:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (void)fillAnalyticsData:(id)arg1 forPredicate:(id)arg2;
- (id)generateAnalyticsData:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 logIdentifier:(id)arg2;
- (id)logIdentifier;
- (unsigned long long)personFamiliarityOptions;
- (id)predicateWithoutStaleCharacteristicsFromPredicate:(id)arg1 accessory:(id)arg2 conditionModified:(bool*)arg3;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
- (id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4;
- (id)rewritePredicate:(id)arg1 forDaemon:(bool)arg2 message:(id)arg3;
- (id)rewritePredicateForClient:(id)arg1;
- (id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2;
- (void)setAudioAnalysisEventNotificationOptions:(unsigned long long)arg1;
- (void)setCameraSignificantEvent:(unsigned long long)arg1;
- (void)setHome:(id)arg1;
- (void)setPersonFamiliarityOptions:(unsigned long long)arg1;
- (id)sunrise;
- (id)sunset;
- (id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(bool*)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6;
- (id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(bool*)arg3;

@end
