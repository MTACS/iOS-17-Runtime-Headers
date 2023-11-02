
@interface AFMultiUserDataSyncUtils : NSObject

+ (id)audioAppSignalsDataKey;
+ (id)audioAppSignalsLastSyncTimestampKey;
+ (id)audioAppSignalsTimestampKey;
+ (id)localTime;
+ (id)retrieveAudioAppSignals;
+ (void)storeAudioAppSignals:(id)arg1;
+ (id)suiteName;

@end
