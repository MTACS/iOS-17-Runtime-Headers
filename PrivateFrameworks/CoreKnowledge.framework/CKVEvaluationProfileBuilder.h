
@interface CKVEvaluationProfileBuilder : NSObject {
    NSMutableDictionary * _companionPriors;
    NSMutableDictionary * _companionProfiles;
    NSSet * _omitItemTypes;
    NSDictionary * _primaryPriors;
    KVProfile * _primaryProfile;
}

- (void).cxx_destruct;
- (bool)_processRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 error:(id*)arg5;
- (bool)addCompanionRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 error:(id*)arg5;
- (id)buildWithError:(id*)arg1;
- (id)init;
- (id)initWithOmittedItemTypes:(id)arg1;
- (bool)setPrimaryRawSpeechProfile:(id)arg1 rawSpeechProfileMetadata:(id)arg2 error:(id*)arg3;

@end
