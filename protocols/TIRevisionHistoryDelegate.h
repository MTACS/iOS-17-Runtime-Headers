
@protocol TIRevisionHistoryDelegate <NSObject>

@required

- (struct TITokenID { unsigned int x1; unsigned int x2; })addWord:(NSString *)arg1 contextTokens:(TIContextTokens *)arg2 surfaceFormPtr:(id*)arg3;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 contextTokens:(TIContextTokens *)arg3;
- (void)fillReversedConversationHistoryInContext:(TIContextTokens *)arg1;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(NSString *)arg1 contextTokens:(TIContextTokens *)arg2 tokenLookupMode:(unsigned int)arg3;
- (struct TITokenID { unsigned int x1; unsigned int x2; })findTokenIDForWord:(NSString *)arg1 contextTokens:(TIContextTokens *)arg2 tokenLookupMode:(unsigned int)arg3 surfaceFormPtr:(id*)arg4 hasCaseInsensitiveStaticVariant:(bool*)arg5;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 contextTokens:(TIContextTokens *)arg3 saveToDifferentialPrivacy:(int)arg4;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(bool)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
- (bool)isStringBasedModel;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 contextTokens:(TIContextTokens *)arg3 intended:(NSString *)arg4 intendedTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg5 hint:(int)arg6;
- (void)registerRevisionFrom:(NSString *)arg1 to:(NSString *)arg2 contextTokens:(TIContextTokens *)arg3;
- (void)softLearningRegisterAccepted:(NSString *)arg1 typed:(NSString *)arg2;
- (void)softLearningRegisterDeleted:(NSString *)arg1;

@end
