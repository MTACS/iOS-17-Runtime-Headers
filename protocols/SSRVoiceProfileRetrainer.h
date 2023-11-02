
@protocol SSRVoiceProfileRetrainer <NSObject>

@required

- (void)addUtterances:(void *)arg1 withPolicy:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 16: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSError *, id /* block */, NSURL *, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, NSDictionary *, NSDictionary *, void*
- (bool)implicitTrainingRequired;
- (id)initWithVoiceRetrainingContext:(SSRVoiceProfileRetrainingContext *)arg1;
- (NSURL *)modelFilePath;
- (bool)needsRetrainingWithAudioFiles:(NSArray *)arg1;
- (NSError *)purgeConfusionInformationWithPolicy:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSDictionary *, void*
- (void)purgeLastSpeakerEmbedding;
- (bool)resetModelForRetraining;
- (unsigned long long)retrainerType;

@end
