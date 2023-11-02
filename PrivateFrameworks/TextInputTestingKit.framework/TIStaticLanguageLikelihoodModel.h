
@interface TIStaticLanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling> {
    TIInputMode * _primaryInputMode;
    TIInputMode * _secondaryInputMode;
    float  _secondaryLanguageWeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIInputMode *primaryInputMode;
@property (nonatomic, readonly) float primaryLanguageWeight;
@property (nonatomic, readonly) TIInputMode *secondaryInputMode;
@property (nonatomic, readonly) float secondaryLanguageWeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_priorProbabilityForLanguage:(id)arg1 recipient:(id)arg2;
- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
- (unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2;
- (id)initWithPrimaryInputMode:(id)arg1 secondaryInputMode:(id)arg2 secondaryLanguageWeight:(float)arg3;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (id)primaryInputMode;
- (float)primaryLanguageWeight;
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(id /* block */)arg3;
- (id)rankedLanguagesForRecipient:(id)arg1;
- (id)secondaryInputMode;
- (float)secondaryLanguageWeight;

@end
