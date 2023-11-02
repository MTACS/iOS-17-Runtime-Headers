
@interface CDMServiceGraphUtil : NSObject

+ (void)addDebugInfo:(id)arg1 nluRequest:(id)arg2 responseObject:(id)arg3;
+ (id)adjustProtoMatchingSpans:(id)arg1 tokenChain:(id)arg2 outError:(id*)arg3;
+ (id)appendMarrsSpans:(id)arg1 marrsMRSpans:(id)arg2;
+ (id)buildLVCRequestWithTokenChain:(id)arg1 matchingSpans:(id)arg2 utterance:(id)arg3 embeddingTensor:(id)arg4 rewriteMsg:(id)arg5 nluRequestId:(id)arg6 reformedTurnInput:(id)arg7 error:(id*)arg8;
+ (id)buildNLv4ProtoRequestWithTokenChain:(id)arg1 matchingSpans:(id)arg2 utterance:(id)arg3 embeddingTensor:(id)arg4 currentTurn:(id)arg5 requestId:(id)arg6 outError:(id*)arg7;
+ (id)buildNormalizedUtterance:(id)arg1;
+ (id)buildPSCRequestWithTokenChain:(id)arg1 matchingSpans:(id)arg2 utterance:(id)arg3 embeddingTensor:(id)arg4 rewriteMsg:(id)arg5 nluRequestId:(id)arg6 currentTurn:(id)arg7 error:(id*)arg8;
+ (id)buildRepetitionResult:(id)arg1;
+ (id)buildSNLCProtoRequestWithTokenChain:(id)arg1 matchingSpans:(id)arg2 utterance:(id)arg3 embeddingTensor:(id)arg4 rewriteMsg:(id)arg5 requestId:(id)arg6 currentTurn:(id)arg7 error:(id*)arg8;
+ (bool)debugInfoEnabled:(id)arg1;
+ (id)embeddingsOutput:(id)arg1 embeddingConfig:(id)arg2 forFactor:(id)arg3;
+ (id)extractPrevTurnsAsrConfidence:(id)arg1;
+ (id)extractReferenceResolutionUtterances:(id)arg1;
+ (id)extractStableEmbeddings:(id)arg1;
+ (id)filterMatchingSpans:(id)arg1 withMatcherName:(int)arg2;
+ (id)getNonWhitespaceTokenChain:(id)arg1;
+ (id)mergeDateTimeSpans:(id)arg1 regexSpans:(id)arg2 siriVocabularySpans:(id)arg3 vocSpans:(id)arg4;
+ (id)overrideInputsFromUtterance:(id)arg1 matchingSpans:(id)arg2 tokenChain:(id)arg3 contextUpdateReformedTurnInputBundle:(id)arg4;
+ (id)prepareCcqrServiceRequest:(id)arg1 currentTurnAsrConf:(double)arg2 tokenResponse:(id)arg3 previousTurnsAsrConf:(id)arg4 previousTurnTokenizationResponseCommand:(id)arg5 nluRequestId:(id)arg6 resultCandidateId:(id)arg7 cdmRequestId:(id)arg8;
+ (id)prepareCcqrTokens:(id)arg1 currentTurn:(id)arg2 previousTurns:(id)arg3 utterance:(id)arg4 locale:(id)arg5;
+ (id)runCcqrService:(id)arg1 nluRequest:(id)arg2 tokenResponse:(id)arg3 previousTurnTokenizationResponseCommand:(id)arg4 rdResponse:(id)arg5 requestLink:(id)arg6 locale:(id)arg7;
+ (bool)runUaaPNLProtoService:(id)arg1 requestId:(id)arg2 utterance:(id)arg3 locale:(id)arg4 tokenChain:(id)arg5 matchingSpans:(id)arg6 embeddingTensor:(id)arg7 currentTurn:(id)arg8 outUaapProtoRequest:(id*)arg9 outUaapProtoResponse:(id*)arg10 outError:(id*)arg11;
+ (bool)spanHasMatcherName:(int)arg1 matchingSpan:(id)arg2;

@end
