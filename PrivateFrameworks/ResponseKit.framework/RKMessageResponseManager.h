
@interface RKMessageResponseManager : NSObject {
    RKResponseCollection * _collection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _preferredLanguages;
    RKRankLearner * _rankLearner;
}

@property (retain) RKResponseCollection *collection;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (retain) RKRankLearner *rankLearner;

+ (id)_chronologicalConversationHistory:(id)arg1;
+ (bool)_isMirroredResponseValidForResponse:(id)arg1;
+ (id)_mostRecentTextFromChronologicalConversationHistory:(id)arg1;
+ (bool)_needsMirroredAnalysisForMessage:(id)arg1 forChronologicalConversationHistory:(id)arg2;
+ (bool)_responseLooksLikeIncomingCheckInResponse:(id)arg1;
+ (bool)_responseLooksLikeOutgoingCheckInResponse:(id)arg1;
+ (bool)_responseTypeIsSunsetted:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)categoryForMessage:(id)arg1 langID:(id)arg2;
- (id)categoryForMessageWithoutQueue:(id)arg1 langID:(id)arg2;
- (id)collection;
- (id)dispatchQueue;
- (void)flushDynamicData;
- (id)getRankLearner;
- (id)init;
- (id)initWithAssetPlistURL:(id)arg1;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2;
- (bool)isQuestion:(id)arg1 withLanguage:(id)arg2;
- (id)preferredLanguages;
- (void)prunePersonalizedUserDatabase:(id)arg1;
- (id)rankLearner;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 metadata:(id)arg3 withLanguage:(id)arg4;
- (void)resetRegisteredResponses;
- (id)responseWithAttributesMatchingProactiveGrammarForMessage:(id)arg1 languageID:(id)arg2 kbdInputModes:(id)arg3;
- (void)responseWithAttributesMatchingProactiveGrammarForMessage:(id)arg1 languageID:(id)arg2 kbdInputModes:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)responseWithAttributesMatchingProactiveGrammarForMessageImp:(id)arg1 languageID:(id*)arg2 kbdInputModes:(id)arg3;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 inputModes:(id)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 recipientID:(id)arg3 forConversationHistory:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 recipientID:(id)arg3 forConversationHistory:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6 completionBlock:(id /* block */)arg7;
- (id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forRecipientID:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7;
- (id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 options:(unsigned long long)arg6;
- (void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 options:(unsigned long long)arg6 completionBlock:(id /* block */)arg7;
- (id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forRecipientID:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 withLanguage:(id*)arg6 inputModes:(id)arg7 options:(unsigned long long)arg8;
- (void)setCollection:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setRankLearner:(id)arg1;
- (bool)usePersonalizedRanking;

@end
