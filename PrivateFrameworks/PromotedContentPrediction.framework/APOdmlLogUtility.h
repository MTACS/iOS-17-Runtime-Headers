
@interface APOdmlLogUtility : NSObject

+ (void)logModelInputWithAdamID:(id)arg1 adamID:(id)arg2;
+ (void)logTrainingRowFeatures:(id)arg1;
+ (void)logWithLoggerKey:(id)arg1 message:(id)arg2 category:(unsigned long long)arg3;
+ (void)printDESRecordInSegments:(id)arg1 isPlugin:(bool)arg2 rowID:(id)arg3;
+ (void)printDESRecordRowOrder:(id)arg1 iterationNumber:(id)arg2;
+ (id)printInSegments:(id)arg1 log:(id)arg2 isPlugin:(bool)arg3;
+ (id)printModelDeltasInSegments:(id)arg1 isPlugin:(bool)arg2;

@end
