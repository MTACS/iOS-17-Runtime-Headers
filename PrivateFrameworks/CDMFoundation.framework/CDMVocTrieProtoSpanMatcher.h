
@interface CDMVocTrieProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    CDMVocTrie * trie;
    bool  useNormalizedValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id /* block */)spanIdentifierCountComparator;

- (void).cxx_destruct;
- (id)initWithVocTriePath:(id)arg1 useNormalizedValues:(bool)arg2;
- (id)matchSpansForTokenChain:(id)arg1;
- (bool)utteranceStartsWithVoiceTriggerSpan:(id)arg1;

@end
