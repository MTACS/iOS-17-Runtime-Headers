
@interface SGQuickResponsesStore : NSObject {
    _PASLock * _readerWriter;
}

+ (id)instanceInMemory;
+ (bool)isProfane:(id)arg1 inLocales:(id)arg2;
+ (id)keyWithLanguage:(id)arg1 andResponse:(id)arg2;
+ (id)sharedInstance;
+ (void)warmup;

- (void).cxx_destruct;
- (void)_addCustomResponseToDb:(id)arg1 reply:(id)arg2 language:(id)arg3 embedding:(id)arg4 sentAt:(double)arg5 recipient:(id)arg6 messagesRowId:(long long)arg7 onError:(id /* block */)arg8;
- (void)_incrementCustomResponseInDb:(id)arg1 reply:(id)arg2 language:(id)arg3 embedding:(id)arg4 sentAt:(double)arg5 recipient:(id)arg6 messagesRowId:(long long)arg7 onError:(id /* block */)arg8;
- (id)_recordsForResponses:(id)arg1 language:(id)arg2;
- (void)addDisplayedToResponses:(id)arg1 language:(id)arg2;
- (void)addSelectedToResponse:(id)arg1 language:(id)arg2;
- (void)addWrittenToResponse:(id)arg1 language:(id)arg2 isMatch:(bool)arg3;
- (bool)addingMessageExceedsBatchLimit:(unsigned long long)arg1 tableLimit:(unsigned long long)arg2 message:(id)arg3 language:(id)arg4 prompt:(id)arg5 recipientHandle:(id)arg6 sentAt:(id)arg7;
- (void)calculateUsageSpreads;
- (unsigned long long)countCustomResponsesAfterPruningWithMinimumCountThreshold:(double)arg1;
- (unsigned long long)countCustomResponsesAfterTruncatingTable:(unsigned long long)arg1;
- (void)decayAllCustomResponsesWithDecayFactor:(double)arg1 filteringBatchSize:(unsigned long long)arg2;
- (bool)deltaForResponsesOnRow:(id /* block */)arg1 completion:(id /* block */)arg2;
- (unsigned long long)designateFilteringBatch:(unsigned long long)arg1;
- (void)destroyInstanceInMemory;
- (id)embeddingForPrompt:(id)arg1 language:(id)arg2 embedder:(id /* block */)arg3;
- (void)filterBatchWithMinimumDistinctRecipients:(unsigned long long)arg1 minimumReplyOccurences:(unsigned long long)arg2;
- (bool)frailReadTransaction:(id /* block */)arg1;
- (bool)frailWriteTransaction:(id /* block */)arg1;
- (id)getModelVersion;
- (double)getPerRecipientCountForReply:(id)arg1 language:(id)arg2 recipient:(id)arg3;
- (id)getProfanityLocale;
- (double)getUsageSpreadForReply:(id)arg1 language:(id)arg2;
- (id)init;
- (id)initInDirectory:(id)arg1 inMemory:(bool)arg2 withMigration:(bool)arg3;
- (id)initInDirectory:(id)arg1 inMemory:(bool)arg2 withMigration:(bool)arg3 forTools:(bool)arg4;
- (id)messagesForEval:(id)arg1;
- (id)nearestCustomResponsesAndScoresToPromptEmbedding:(id)arg1 recipient:(id)arg2 limit:(unsigned long long)arg3 withinRadius:(float)arg4 responseCountExponent:(float)arg5 minimumDecayedCount:(float)arg6 compatibilityVersion:(unsigned long long)arg7 language:(id)arg8 locale:(id)arg9 allowProfanity:(bool)arg10 minimumTimeInterval:(double)arg11 usageSpreadExponent:(float)arg12;
- (id)nearestCustomResponsesToPromptEmbedding:(id)arg1 recipient:(id)arg2 limit:(unsigned long long)arg3 withinRadius:(float)arg4 responseCountExponent:(float)arg5 minimumDecayedCount:(float)arg6 compatibilityVersion:(unsigned long long)arg7 language:(id)arg8 locale:(id)arg9 allowProfanity:(bool)arg10 minimumTimeInterval:(double)arg11 usageSpreadExponent:(float)arg12;
- (void)prunePerRecipientTableWithMaxRows:(unsigned long long)arg1;
- (void)recordKnownCustomResponsesInBatchWithEmbedder:(id /* block */)arg1 compatibilityVersion:(unsigned long long)arg2;
- (void)recordMessagesInBatchAsCustomResponsesWithEmbedder:(id /* block */)arg1 compatibilityVersion:(unsigned long long)arg2;
- (id)recordsForResponses:(id)arg1 language:(id)arg2;
- (id)recordsForResponsesInternal:(id)arg1 language:(id)arg2;
- (void)resetCustomResponsesAndResetMessages:(bool)arg1;
- (void)resetCustomResponsesForEval:(id)arg1;
- (bool)resetDbIfNeededCompareWithCompatibilityVersion:(unsigned long long)arg1;
- (void)setProfanityLocale:(id)arg1 andModelVersion:(long long)arg2;

@end
