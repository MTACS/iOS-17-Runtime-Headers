
@interface CDMVocTrie : NSObject {
    OVMarisaTrie * vocLabelTrieReadOnly;
    OVMarisaTrie * vocSemanticTrieReadOnly;
    OVMarisaTrie * vocTextTrieReadOnly;
    OVMarisaTrie * vocUsoNodeIndexTrieReadOnly;
    OVMarisaTrie * vocUsoTrieReadOnly;
}

+ (id)getTrieURLs:(id)arg1;

- (void).cxx_destruct;
- (id)entriesForText:(id)arg1;
- (long long*)getLabelTrieCount;
- (long long*)getTextTrieCount;
- (int)getUsoNodeIndex:(id)arg1 semantic:(id)arg2;
- (id)initWithTriePath:(id)arg1;
- (id)usoGraphForLabel:(id)arg1 semantic:(id)arg2;

@end
