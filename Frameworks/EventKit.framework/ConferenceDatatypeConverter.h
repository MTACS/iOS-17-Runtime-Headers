
@interface ConferenceDatatypeConverter : NSObject

+ (id)_calJoinMethodFromEKJoinMethod:(id)arg1;
+ (id)_calJoinMethodsFromEKJoinMethods:(id)arg1;
+ (unsigned long long)_calSourceFromEKSource:(unsigned long long)arg1;
+ (id)_ekJoinMethodFromCalJoinMethod:(id)arg1;
+ (id)_ekJoinMethodsFromCalJoinMethods:(id)arg1;
+ (unsigned long long)_ekSourceFromCalSource:(unsigned long long)arg1;
+ (id)_ekVirtualConferenceFromCalVirtualConference:(id)arg1;
+ (id)calVirtualConferenceFromEKVirtualConference:(id)arg1;
+ (id)ekDeserializationResultFromCalDeserializationResult:(id)arg1;

@end
