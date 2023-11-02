
@interface TrieNode : NSObject {
    int  _node;
    int  _offset;
    Trie * _trie;
}

@property (nonatomic) int node;
@property (nonatomic) int offset;
@property (nonatomic) Trie *trie;

- (void).cxx_destruct;
- (int)node;
- (int)offset;
- (void)setNode:(int)arg1;
- (void)setOffset:(int)arg1;
- (void)setTrie:(id)arg1;
- (id)trie;

@end
