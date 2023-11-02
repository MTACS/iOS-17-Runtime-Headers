
@interface ECSubjectParser : NSObject

+ (unsigned long long)_fastPrefixLengthForSubject:(id)arg1 replyOnly:(bool)arg2;
+ (unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)arg1;
+ (unsigned long long)_prefixLengthForSubject:(id)arg1 replyOnly:(bool)arg2;
+ (unsigned long long)prefixLengthForSubject:(id)arg1;
+ (unsigned long long)prefixLengthForSubject:(id)arg1 replyOnly:(bool)arg2;
+ (bool)subjectHasReplyPrefix:(id)arg1;
+ (id)subjectWithoutPrefixForSubject:(id)arg1;
+ (id)subjectWithoutPrefixForSubject:(id)arg1 prefix:(id*)arg2;
+ (id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)arg1 prefix:(id*)arg2;

@end
