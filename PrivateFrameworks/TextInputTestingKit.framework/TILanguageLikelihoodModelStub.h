
@interface TILanguageLikelihoodModelStub : NSObject <TILanguageLikelihoodModeling> {
    double  _emojiLastUsageTime;
    unsigned long long  _emojiUsageCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double emojiLastUsageTime;
@property (nonatomic) unsigned long long emojiUsageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
- (double)emojiLastUsageTime;
- (unsigned long long)emojiUsageCount;
- (unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(id /* block */)arg3;
- (id)rankedLanguagesForRecipient:(id)arg1;
- (void)setEmojiLastUsageTime:(double)arg1;
- (void)setEmojiUsageCount:(unsigned long long)arg1;

@end
