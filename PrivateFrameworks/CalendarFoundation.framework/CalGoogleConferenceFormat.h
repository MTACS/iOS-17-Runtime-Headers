
@interface CalGoogleConferenceFormat : NSObject <CalConferencePersistenceFormat>

+ (id)_delimiterRegex;
+ (id)calConferenceSerializationHandle;

- (id)deserializeConferences:(id)arg1;
- (id)serializeConference:(id)arg1 serializationBlockTitle:(id)arg2;
- (bool)supportsSerializingConferenceWithSource:(unsigned long long)arg1;

@end
