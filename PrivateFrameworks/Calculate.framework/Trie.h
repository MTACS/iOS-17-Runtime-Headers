
@interface Trie : NSObject {
    bool  _autocompress;
    int  _characterCount;
    int  _characterSize;
    char * _characters;
    bool  _compressed;
    int * _firstByteCache;
    int  _nodeCount;
    int  _nodeSize;
    struct { unsigned int x1 : 24; unsigned int x2 : 8; unsigned int x3; unsigned int x4; } * _nodes;
    NSMutableArray * _objects;
    TrieNode * _root;
}

@property (nonatomic) int characterCount;
@property (nonatomic) int characterSize;
@property (nonatomic) char *characters;
@property (nonatomic) bool compressed;
@property (nonatomic) int*firstByteCache;
@property (nonatomic) int nodeCount;
@property (nonatomic) int nodeSize;
@property (nonatomic) struct { unsigned int x1 : 24; unsigned int x2 : 8; unsigned int x3; unsigned int x4; }*nodes;
@property (nonatomic, retain) NSMutableArray *objects;

- (void).cxx_destruct;
- (int)characterCount;
- (int)characterSize;
- (char *)characters;
- (bool)compressed;
- (void)dealloc;
- (int*)firstByteCache;
- (id)init;
- (int)nodeCount;
- (int)nodeSize;
- (struct { unsigned int x1 : 24; unsigned int x2 : 8; unsigned int x3; unsigned int x4; }*)nodes;
- (id)objects;
- (void)setCharacterCount:(int)arg1;
- (void)setCharacterSize:(int)arg1;
- (void)setCharacters:(char *)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setFirstByteCache:(int*)arg1;
- (void)setNodeCount:(int)arg1;
- (void)setNodeSize:(int)arg1;
- (void)setNodes:(struct { unsigned int x1 : 24; unsigned int x2 : 8; unsigned int x3; unsigned int x4; }*)arg1;
- (void)setObjects:(id)arg1;
- (void)writeCharacter:(unsigned char)arg1;
- (void)writeNode:(struct { unsigned int x1 : 24; unsigned int x2 : 8; unsigned int x3; unsigned int x4; })arg1;

@end
