
@interface SGQuickResponsesInference : NSObject {
    SGQuickResponsesModel * _model;
    SGQuickResponsesPersonalization * _personalization;
    SGQuickResponsesRanking * _ranking;
    _PASRng * _rng;
    SGQuickResponsesStore * _store;
}

+ (id)dynamicIndicesAndTopIsDynamic:(id)arg1 config:(id)arg2;
+ (id)dynamicLabelForScore:(id)arg1 config:(id)arg2;
+ (id)languageForLocale:(id)arg1 withLanguageDetectionForMessage:(id)arg2;
+ (id)normalizeLabelScores:(id)arg1;
+ (id)normalizeStringForDeduping:(id)arg1;
+ (id)proactiveTriggerForDynamicLabel:(id)arg1 context:(id)arg2 language:(id)arg3;
+ (id)proactiveTriggerForDynamicLabel:(id)arg1 context:(id)arg2 language:(id)arg3 useContactNames:(bool)arg4;
+ (id)quickResponsesForMessage:(id)arg1 context:(id)arg2 time:(id)arg3 maxResponses:(unsigned long long)arg4 locale:(id)arg5 recipientHandles:(id)arg6 chunkPath:(id)arg7 plistPath:(id)arg8 espressoBinFilePath:(id)arg9 vocabFilePath:(id)arg10 includeCustomResponses:(bool)arg11 includeResponsesToRobots:(bool)arg12;
+ (id)quickResponsesForMessage:(id)arg1 conversationTurns:(id)arg2 maxResponses:(unsigned long long)arg3 localeIdentifier:(id)arg4 recipientHandles:(id)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 espressoBinFilePath:(id)arg8 vocabFilePath:(id)arg9 useContactNames:(bool)arg10 includeCustomResponses:(bool)arg11 includeResponsesToRobots:(bool)arg12;
+ (void)registerDisplayedQuickResponses:(id)arg1 plistPath:(id)arg2 vocabPath:(id)arg3;
+ (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(id)arg5 plistPath:(id)arg6 vocabPath:(id)arg7;
+ (id)stringsForQuickResponses:(id)arg1;

- (void).cxx_destruct;
- (id)_getMergedPromptForMessage:(id)arg1 conversationTurns:(id)arg2;
- (id)addCustomResponsesToCommonResponses:(id)arg1 language:(id)arg2 locale:(id)arg3 recipient:(id)arg4 modelScores:(id)arg5 maxResponses:(unsigned long long)arg6 customResponsesParams:(id)arg7;
- (id)customResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 context:(id)arg3 language:(id)arg4 locale:(id)arg5 recipients:(id)arg6;
- (id)initWithLanguage:(id)arg1 chunkPath:(id)arg2 plistPath:(id)arg3 espressoBinFilePath:(id)arg4 vocabFilePath:(id)arg5;
- (id)initWithLanguage:(id)arg1 plistPath:(id)arg2 espressoBinFilePath:(id)arg3 vocabFilePath:(id)arg4 storeDirectory:(id)arg5;
- (id)initWithModel:(id)arg1 ranking:(id)arg2 personalization:(id)arg3 rng:(id)arg4 store:(id)arg5;
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 recipients:(id)arg8 useContactNames:(bool)arg9 includeCustomResponses:(bool)arg10 includeResponsesToRobots:(bool)arg11;
- (id)quickResponsesFromReplyPositions:(id)arg1 isConfident:(bool)arg2 config:(id)arg3;
- (id)randomizedReplyPositionsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)replyPositionsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)replyPositionsFromSemanticClasses:(id)arg1 config:(id)arg2;
- (id)scoresAndIsConfidentForMessage:(id)arg1 language:(id)arg2 locale:(id)arg3;
- (id)signpostedQuickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 recipients:(id)arg8 useContactNames:(bool)arg9 includeCustomResponses:(bool)arg10 includeResponsesToRobots:(bool)arg11;

@end
