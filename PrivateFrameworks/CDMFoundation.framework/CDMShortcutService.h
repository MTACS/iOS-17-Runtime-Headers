
@interface CDMShortcutService : CDMDAGBaseService {
    NSArray * _denyList;
}

@property (nonatomic, retain) NSArray *denyList;

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (id)voiceCommandPredicate;

- (void).cxx_destruct;
- (id)buildEmptyShortcutUserParse;
- (id)buildParseWithDelegatedUserDialogAct;
- (id)denyList;
- (id)extractShortcutDataFromSpan:(id)arg1;
- (id)filterExactMatchVoiceCommandSpans:(id)arg1;
- (id)filterVoiceCommandPrefixMatchingSpans:(id)arg1 voiceCommandSpan:(id)arg2;
- (id)filterVoiceCommandSuffixMatchingSpans:(id)arg1 voiceCommandSpan:(id)arg2;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)handleVoiceCommandFollowUp:(id)arg1;
- (bool)hasAutoShortcutIdentifier:(id)arg1;
- (bool)isPhrase:(id)arg1 inDenyList:(id)arg2;
- (id)loadDenyListFromBundle:(id)arg1 languageCode:(id)arg2;
- (void)setDenyList:(id)arg1;
- (id)setup:(id)arg1;
- (bool)shouldSpanComboProduceParse:(id)arg1 prefixSpans:(id)arg2 suffixSpans:(id)arg3 tokenChain:(id)arg4;
- (id)validateDenyListArray:(id)arg1;

@end
