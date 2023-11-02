
@interface _PSMapsSuggester : NSObject

- (void)deleteMapsFeedbackEventsMatchingHandle:(id)arg1 contactId:(id)arg2 startLocationId:(id)arg3 endLocationId:(id)arg4;
- (void)provideMapsFeedback:(id)arg1;
- (id)suggestionsFromContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;

@end
