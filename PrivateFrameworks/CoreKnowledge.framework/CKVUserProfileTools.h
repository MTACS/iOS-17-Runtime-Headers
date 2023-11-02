
@interface CKVUserProfileTools : NSObject

+ (id)convertRawSpeechProfile:(id)arg1 metadata:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 omitItemTypes:(id)arg5 error:(id*)arg6;
+ (id)localeFromRawSpeechProfile:(id)arg1 error:(id*)arg2;
+ (id)mapItemIdsToPriorsFromMetadata:(id)arg1;
+ (id)mergeMultiUserPrimaryProfile:(id)arg1 withCompanionProfiles:(id)arg2 error:(id*)arg3;
+ (id)parseRawSpeechProfileMetadata:(id)arg1 error:(id*)arg2;
+ (id)vocabularyItemsOfType:(long long)arg1 fromRawSpeechProfile:(id)arg2 metadata:(id)arg3 error:(id*)arg4;

@end
