
@interface CalAppleConferenceFormat : NSObject <CalConferencePersistenceFormat>

+ (id)_buildDeserializationResultFromState:(id)arg1;
+ (id)_conferenceTitleRegex;
+ (id)_detailsDelimiterRegex;
+ (id)_joinMethodTitleAndFeaturesRegex;
+ (bool)_line:(id)arg1 matchesRegex:(id)arg2 outFoundRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
+ (void)_parseBlockTitle:(id)arg1 state:(id)arg2;
+ (void)_parseConferenceTitle:(id)arg1 state:(id)arg2;
+ (void)_parseJoinMethodTitleAndFeatures:(id)arg1 state:(id)arg2;
+ (void)_parseURL:(id)arg1 state:(id)arg2;
+ (id)_startDelimiterRegex;
+ (id)calBundle;
+ (id)calConferenceSerializationHandle;

- (id)deserializeConferences:(id)arg1;
- (id)serializeConference:(id)arg1 serializationBlockTitle:(id)arg2;
- (bool)supportsSerializingConferenceWithSource:(unsigned long long)arg1;

@end
