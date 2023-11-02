
@interface SiriNLUOverridesTrieBundle : NSObject {
    SiriNLUMarisaTrie * overrideIdTrie;
    SiriNLUMarisaTrie * overrideTimeStampTrie;
    SiriNLUMarisaTrie * patternTrie;
    SiriNLUMarisaTrie * ruleTrie;
    SiriNLUMarisaTrie * userParseTrie;
}

+ (id)buildPatternTrieLookupKey:(id)arg1 locale:(id)arg2 overrideNamespace:(long long)arg3;
+ (id)getTrieURLs:(id)arg1;

- (void).cxx_destruct;
- (id)fetchOverrideId:(id)arg1;
- (id)fetchOverrideIdArray:(id)arg1;
- (unsigned long long)fetchOverrideTimeStamp:(id)arg1;
- (id)fetchRegexRuleIds:(id)arg1 overrideNamespace:(long long)arg2;
- (id)fetchRuleId:(id)arg1 locale:(id)arg2 overrideNamespace:(long long)arg3;
- (id)fetchSerializedNluRequestRule:(id)arg1;
- (id)fetchSerializedUserParse:(id)arg1;
- (id)init:(id)arg1;

@end
